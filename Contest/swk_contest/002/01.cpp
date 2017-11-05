#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int A;
  scanf("%d",&A);
  if(A%2==0){
    A/=2;
    printf("%d\n",A*A);
  }else{
    A=(A-1)/2;
    printf("%d\n",A*A+1);
  }
  return 0;
}
