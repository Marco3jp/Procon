#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<int> A(N);
  int sum=0;
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
    sum+=A[i];
  }
  double ave=(double)sum/N;
  int aveSei=round(ave);
  int cost=0;
  for (size_t i = 0; i < N; i++) {
    cost+=pow(aveSei-A[i],2);
  }
  printf("%d\n",cost);
  return 0;
}
