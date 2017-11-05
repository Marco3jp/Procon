#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,S,T,counter=0;
  scanf("%d%d%d",&N,&S,&T);
  if(S>T){
    printf("-1\n");
    return 0;
  }

  while (1) {
    if(T==S){
      printf("%d\n",counter);
      break;
    }else if(T==1){
      printf("-1\n");
      break;
    }
    if(T%2==1){
      --T;
    }
    T/=2;
    ++counter;
  }
  return 0;
}
