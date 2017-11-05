#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> v={1,2,3,4,5,6};
  ll N;int t,temp;
  scanf("%d",&N);
  N=N%30;
  for (size_t i = 0; i < N; i++) {
    t=i%5;
    temp=v[t];
    v[t]=v[t+1];
    v[t+1]=temp;
  }
  for (size_t i = 0; i < 6; i++) {
    printf("%d",v[i]);
  }
  return 0;
}
