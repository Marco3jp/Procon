#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

ll gcd(ll,ll);

using namespace std;

int main(int argc, char const *argv[]) {
  ll N,K;
  scanf("%lld%lld",&N,&K);
  std::vector<ll> A(N);
  for (size_t i = 0; i < N; i++) {
    scanf("%lld",&A[i]);
  }
  bool flag=true;
  if(K%2==1){
    for (size_t i = 0; i < N; i++) {
      if(A[i]%2==1){
        flag=false;
        break;
      }
    }
    if(flag){
      printf("IMPOSSIBLE\n");
      return 0;
    }
  }

  ll temp=A[0];
  for (size_t i = 1; i < N; i++) {
    temp=gcd(A[i],temp);
  }

  if(K%temp==0 && K<=*max_element(all(A))){
    printf("POSSIBLE\n");
  }else{
    printf("IMPOSSIBLE\n");
  }
  return 0;
}

ll gcd(ll a,ll b){
  if(a<b){
    ll tmp=a;
    a=b;
    b=tmp;
  }

  ll r=a%b;
  while(r!=0){
    a=b;
    b=r;
    r=a%b;
  }
  return b;
}
