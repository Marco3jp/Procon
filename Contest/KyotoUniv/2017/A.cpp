#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,K,tani=0,counter=0;
  scanf("%d%d",&N,&K);
  std::vector<int> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  sort(all(A),std::greater<int>());
  for (size_t i = 0; i < N; i++) {
    tani+=A[i];
    ++counter;
    if(tani>=K){
      printf("%d\n",counter);
      return 0;
    }
  }
  printf("-1\n");
  return 0;
}
