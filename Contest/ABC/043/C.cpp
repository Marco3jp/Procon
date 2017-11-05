
#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  double temp=0;
  scanf("%d",&N);
  std::vector<int> v(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> v[i];
    temp+=v[i];
  }
  temp=temp/N;
  int calc=(int)round(temp);
  ll cost=0;
  for (size_t i = 0; i < N; i++) {
    cost+=pow(v[i]-calc,2);
  }
  printf("%lld\n",cost);

  return 0;
}
