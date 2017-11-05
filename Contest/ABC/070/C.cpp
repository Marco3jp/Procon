#include <bits/stdc++.h>
#define ll unsigned long long
#define all(a) (a).begin(),(a).end()

using namespace std;
ll gcd(ll,ll);

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<ll> v(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> v[i];
  }
  sort(all(v));
  reverse(all(v));

  ll lcm=v[0];
  for (size_t i = 1; i < N; i++) {
    ll temp=gcd(lcm,v[i]);
    lcm=(lcm*v[i])/temp;
    printf("%lld %lld\n",temp,lcm);
  }

  printf("%llu\n",lcm);
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
