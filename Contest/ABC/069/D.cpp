#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;
void nuri(int&,int);

int main(int argc, char const *argv[]) {
  int H,W,N;
  scanf("%d%d%d",&H,&W,&N);
  std::vector<int> A(N);
  int c[H][W];
  for (int i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  int current=1,i=0,j=0;

  //塗りますよ～～
  while (1) {
    for (; j < W; ++j) { //右行き
      nuri(c[i][j],current);
      --A[current-1];
      if(A[current-1]==0){
        ++current;
      }
    }
    //printf("残り%d_現在%d\n",A[current-1],current);
    if(H==i+1){ //終わり判定
      break;
    }else{
      ++i;
    }

    for (; j > 0; --j) { //左行き
      nuri(c[i][j-1],current);
      --A[current-1];
      if(A[current-1]==0){
        ++current;
      }
    }
    if(H==i+1){ //終わり判定
      break;
    }else{
      ++i;
    }
  }

  //出力
  for (size_t i = 0; i < H; i++) {
    for (size_t j = 0; j < W-1; j++) {
      printf("%d ",c[i][j]);
    }
    printf("%d\n",c[i][W-1]);
  }

  return 0;
}


void nuri(int& point,int color){
  point=color;
  //printf("現在のポイント色%d\n",point);
}





/* 変数リスト
H - 縦数
W - 横数
N - 色の種類//数字でいい
A[N] - 各色の数//i色はA[i]個ある状態になる、みたいな
c[H][W] - 出力(中身は色の番号)
current - 今塗ってる色(数との関係はA[current-1]になる)

[i][j]の順ね
*/

/*アルゴリズム
おそらく100*100程度のサイズなら試行していい気がする
んで常に折り返すようにうめていけばOKなはずなので、そんな感じで1番目の色から順に埋めていく
埋めるたびにa[?]を減らしていって、0になったら次の色にする感じ
*/
