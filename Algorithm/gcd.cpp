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
