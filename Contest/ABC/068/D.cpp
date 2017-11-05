#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n=50;
  ll K=0;
  scanf("%lld",&K);
  int amari=K%50;
  ll wari=K/50;
  /*
  for (size_t i = 0; i < n; ++i) {
    a[i]+=wari;
  }
  */

  printf("%d\n",n);
  for (ll i=wari,j=1 ; j<=n ; i++,j++) {
    if(j<=n-amari){
      printf("%lld ",i);
    }else{
      printf("%lld ",i+1);
    }

  }

  return 0;
}

//50で割って結果を全体に足す
//あまりはfor文でちゃんとシミュレーションする
//もしあまりがないならシミュレーションスキップして結果でOK
