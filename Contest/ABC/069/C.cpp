#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  ll N,counter=0,ni=0;
  scanf("%lld",&N);
  std::vector<ll> A(N);
  for (ll i = 0; i < N; i++) {
    std::cin >> A[i];
    if(A[i]%4==0){
      ++counter;
    }else if(A[i]==2){
      ++ni;
    }
  }
  //以上入力と4の倍数、2の検出終了
  if(ni%2==0){
    N-=ni/2;
  }else{
    N+=(ni-1)/2;
  }
  //以上2を二つまとめて長さから引くやつ
  if(N%2==0){
    if(N/2<=counter){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }else{
    if((N-1)/2<=counter){
      printf("Yes\n");
    }else{
      printf("No\n");
    }
  }
  return 0;
}
