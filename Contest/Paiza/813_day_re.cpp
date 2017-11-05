#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

double Pythagorean(ll,ll,ll,ll);
bool comparison(ll,ll);
void flag_change(std::vector<ll> &out,std::vector<bool> &soe,std::vector<ll> &x,std::vector<ll> &y,ll &current_x,ll &current_y,ll &minsoe);


int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);

  std::vector<ll> x(N),y(N);
  std::vector<bool> soe(N,true);
  std::vector<ll> out;
  ll current_x=0,current_y=0,minsoe;
  double leng_temp;
  for (int i = 0; i < N; i++) {
    std::cin >> x[i] >> y[i];
  }
  //以上入力


  while (1) {
    double minlen=10000000000;
    for (size_t i = 0; i < N; i++) {
      if(soe[i]==false){
        continue;
      }
      leng_temp=Pythagorean(x[i],y[i],current_x,current_y);
      if(minlen>leng_temp){
        minlen=leng_temp;
        minsoe=i;
      }
    }
    flag_change(out,soe,x,y,current_x,current_y,minsoe);
    if(out.size()==N){
      break;
    }
  }

//以下出力
  for (int i = 0; i < N; i++) {
    printf("%lld %lld\n",x[out[i]],y[out[i]]);
  }

  return 0;
}

//使い方：x,y,current_x,current_yを適当に入れると三平方の定理で計算して投げ返してくる
double Pythagorean(ll x,ll y,ll current_x,ll current_y){
  double ans = sqrt(pow(abs(current_x-x),2)+pow(abs(current_y-y),2));
  return ans;
}

//使い方:a,bを入れるとa>=bのときtrue,a<bのときfalseを返します
bool comparison(ll a,ll b){
  if(a>=b){
    return true;
  }else{
    return false;
  }
}

//使い方、参照渡しで渡されたものを操作します。
//outへのpush_backと添字のフラグ、現在の座標を変更します。
void flag_change(std::vector<ll> &out,std::vector<bool> &soe,std::vector<ll> &x,std::vector<ll> &y,ll &current_x,ll &current_y,ll &minsoe){
  out.push_back(minsoe);
  soe[minsoe]=false;
  current_x=x[minsoe];
  current_y=y[minsoe];
}



/*
N - 宝の個数
x[N] - それぞれの宝のx座標
y[N] - それぞれの宝のy座標
soe[N] - 探索終わった宝のメモ
out[N] - 出力する宝の添字
current_x - 現在のx座標
current_y - 現在のy座標
minsoe - 現在探索中で、かつ一番近かった宝の添字
minlen - 現在探索中で、かつ一番近かった宝の距離

==アルゴリズム==
１．入力受付
１．５．三平方の定理を適応してminlenと比較、minsoeに入れる、soeのフラグを書き換える
２．現在の座標から最も近い座標を探して(.5)添字をvector outに入れる


*/
