#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,M,K;
  ll calc;
  scanf("%d%d%d",&N,&M,&K);
  if(K>N*M){
    printf("No\n");
    return 0;
  }else if(K%N==0 || K%M==0){
    printf("Yes\n");
    return 0;
  }
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      calc=M*i+N*j-(i*j*2);
      if(calc==K){
        printf("Yes\n");
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}
