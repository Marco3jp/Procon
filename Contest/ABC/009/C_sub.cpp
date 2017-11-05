#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<ll> C(N);
  std::vector<int> counter(N);
  for (int i = 0; i < N; i++) {
    std::cin >> C[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if(C[i]%C[j]==0 && i!=j){
        ++counter[i];
      }
    }
  }
  double ans=0;
  for (int i = 0; i < N; i++) {
    if(counter[i]%2==0){
      double temp1=counter[i]+2;double temp2=counter[i]*2+2;
      ans+=temp1/temp2;
    }else{
      ans+=0.5; //1/2
    }
  }
  printf("%f\n",ans);
  return 0;
}
