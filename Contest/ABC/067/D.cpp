#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N=0,a,b;
  scanf("%d",&N);
  int A[N][N]={0};
  for (size_t i = 0; i < N; i++) {
    scanf("%d%d",&a,&b);
    if(a>b) swap(a,b); //常にa<bの状態に
    A[a][b]=1;
  }
  return 0;
}


/*アルゴリズム
入力はA[N][N]より、隣接行列で受け取ってグラフを表現する(A[a][b]が1だとa-b間に路があることになってる２２)
/////幅優先探索により最適パスを確認しなくていい/////
どこまでが黒でどこからが白かチェック【d(1,i)<=d(N,i)ならiは黒……のように距離でチェックしていく】
重要なのは1からの距離とNからの距離を比較するってところですかね
あとはその数が多い方がたくさん取れるので勝ち、もし同数なら後手側が勝つ。
*/
