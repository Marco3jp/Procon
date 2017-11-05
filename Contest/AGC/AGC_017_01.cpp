#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()
ll counter=0;
ll T;
void nmadetansaku(int n,int* A,int,int);
void hantei(int);
using namespace std;

int main(int argc, char const *argv[]) {
  int n=0,p=0,temp=0;
  int A[51];
  scanf("%d%d",&n,&p);
  for (size_t i = 0; i < n; i++) {
    scanf("%d",&temp);
    if(temp%2==0){
      A[i]=2;
    }else{
      A[i]=1;
    }
  }
  //入力完了、偶数が2、奇数が1で入れてある
  nmadetansaku(n,A,0,p);

  return 0;
}

void nmadetansaku(int n,int* A,int deep,int p){
    for (size_t i = 0; i < deep; i++) {
      T+=A[i];
    }
    hantei(p);
    if(deep!=n){
      deep++;
      nmadetansaku()
    }
}

void hantei(int p){
  if(p==0){
    if(T%2==0){
      counter++;
    }
  }else{
    if(T%2==1){
      counter++;
    }
  }
}
