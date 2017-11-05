#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,M;
  int ro=0,oto=0,aka=0;
  scanf("%d%d",&N,&M);
  if(M%2==1){
    ro=1;N-=1;M-=3;
  }
  int temp=4*N; //tempには残りの全員が赤ちゃんだった場合の足の本数が入る
  int over=temp-M; //overには何本超えるかが入ります
  aka=(temp-(over*2))/4;
  oto=over/2;
  if(aka < 0 || oto < 0 || over < 0 || M < 0 || (oto+aka) != N){
    printf("-1 -1 -1\n");
  }else{
    printf("%d %d %d\n",oto,ro,aka);
  }
  return 0;
}

/*
N - N人
M - M本

大人は2本、老人は3本、赤ちゃんは4本
まず奇数なら3で引いて、Mが2のx倍であるかチェックし、N-1人に当てはまるように2,4を埋める感じ(1と2をN-1個組み合わせてxを作るので、ちょっとめんどくさいかもしれないですね、
あ、いや2をN-1個組み合わせてみて、xをオーバーした数だけ2を減らして1を増やせばいいのか)
3*2でも同じ人数だけどめんどいので無視。
*/
