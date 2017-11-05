#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void kisuu(ll);
void gusuu(ll);

int main(int argc, char const *argv[]) {
  bool flag=0;ll temp=0;
  scanf("%lld",&temp);
  flag=temp%2==0; //偶数なら1,奇数なら0;
  if(flag){
    gusuu(temp);
  }else{
    kisuu(temp);
  }
  return 0;
}

void kisuu(ll leng){
  stack<ll> A;
  queue<ll> B;
  ll temp=0;
  for (ll i = 1; i <= leng; i++) {
    if(i%2!=0){
      scanf("%d",&temp);
      A.push(temp);
    }else{
      scanf("%d",&temp);
      B.push(temp);
    }
  }
  printf("%lld",A.top());
  A.pop();
  while (!A.empty()) {
    printf(" %lld",A.top());
    A.pop();
  }
  while (!B.empty()) {
    printf(" %lld",B.front());
    B.pop();
  }
  printf("\n");
}

void gusuu(ll leng){
  queue<ll> A;stack<ll> B;ll temp=0;
  for (size_t i = 1; i <= leng; i++) {
    if(i%2!=0){
      scanf("%d",&temp);
      A.push(temp);
    }else{
      scanf("%d",&temp);
      B.push(temp);
    }
  }
  printf("%lld",B.top());
  B.pop();
  while (!B.empty()) {
    printf(" %lld",B.top());
    B.pop();
  }
  while (!A.empty()) {
    printf(" %lld",A.front());
    A.pop();
  }
  printf("\n");
}
