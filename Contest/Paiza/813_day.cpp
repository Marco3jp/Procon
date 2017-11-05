#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);

  std::vector<ll> x(N),y(N);
  std::vector<bool> soe(N,true);
  std::vector<ll> out;
  ll currentx=0,currenty=0,minsoe;
  ll minlen=10000000000;

  for (int i = 0; i < N; i++) {
    std::cin >> x[i] >> y[i];
  }
  //以上入力

  for (int i = 0; i < N; i++) {
    if(soe[i]==false && i!=N-1){
      continue;
    }else if(soe[i]==false && i==N-1){
      out.push_back(minsoe);
      soe[minsoe]=false;
      currentx=x[minsoe];
      currenty=y[minsoe];
      if(out.size()!=N){
        i=0;
        minlen=10000000000;
        if(soe[i]==false && i!=N-1){
          continue;
        }
      }else{
        break;
      }
    }
    double templen = sqrt(pow(abs(currentx-x[i]),2)+pow(abs(currenty-y[i]),2));
    //printf("実行確認計算後templen%f,minlen%f\n",templen,minlen);
    if (templen<minlen) {
      minlen=templen;
      minsoe=i;
      //printf("実行確認比較後minlen%f minsoe%lld minlen%f\n",minlen,minsoe,minlen);
    }
    if(i==N-1){
      out.push_back(minsoe);
      soe[minsoe]=false;
      currentx=x[minsoe];
      currenty=y[minsoe];
      if(out.size()!=N){
        i=0;
        minlen=10000000000;
        //printf("実行確認リセット時 minsoe%lld\n",minsoe);
      }else{
        //printf("ラスト minsoe%lld\n",minsoe);
      }
    }
  }

  for (int i = 0; i < N; i++) {
    printf("%lld %lld\n",x[out[i]],y[out[i]]);
  }

  return 0;
}

/*
N - 宝の個数
x[N] - それぞれの宝のx座標
y[N] - それぞれの宝のy座標
soe[N] - 探索終わった宝のメモ
out[N] - 出力する宝の添字
currentx - 現在のx座標
currenty - 現在のy座標
minsoe - 現在探索中で、かつ一番近かった宝の添字
minlen - 現在探索中で、かつ一番近かった宝の距離

==アルゴリズム==
１．入力受付
１．５．三平方の定理を適応してminlenと比較、minsoeに入れる、soeのフラグを書き換える
２．現在の座標から最も近い座標を探して(.5)添字をvector outに入れる


*/
