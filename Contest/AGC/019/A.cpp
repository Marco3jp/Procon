#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  ll Q,H,S,D,N;
  scanf("%lld%lld%lld%lld%lld",&Q,&H,&S,&D,&N);
  if(Q*4<S){
    S=Q*4;
  }
  if(H*2<S){
    S=H*2;
  }
  if(S*2<D){
    D=S*2;
  }
  if(N%2==0){
    printf("%lld\n",D*(N/2));
  }else{
    printf("%lld\n",(D*((N-1)/2))+S);
  }
  return 0;
}


/*
==変数==
Q,H,S,D - 0.25,0.5,1,2Lの値段
N - ほしい量
cheaper - 1Lの最安価

==アルゴリズム==
1.受け取り
3.1Lの最安価調査
2.例外処理(2L以下である場合)
4.2L購入と1L購入*2比較
5.あとは買い物、出力
*/
