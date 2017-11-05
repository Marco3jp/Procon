#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  ll X,T;
  scanf("%lld%lld",&X,&T);
  if(X<=T){
    printf("0\n");
  }else{
    printf("%lld\n",X-T);
  }
  return 0;
}
