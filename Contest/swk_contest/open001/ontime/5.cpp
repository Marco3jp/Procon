#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  int sum=0;
  scanf("%d",&N);
  std::vector<int> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
    sum+=A[i];
  }
  double ave=(double)sum/N;
  int point=0;
  int averag=round(ave);
  for (size_t i = 0; i < N; i++) {
    point+=pow(A[i]-averag,2);
  }
  printf("%d\n",point);
  return 0;
}
