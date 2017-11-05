#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  if(A!=B && B==C){
    printf("%d\n",A);
  }else if(B!=C && C==A){
    printf("%d\n",B);
  }else if(C!=A && A==B){
    printf("%d\n",C);
  }
  return 0;
}
