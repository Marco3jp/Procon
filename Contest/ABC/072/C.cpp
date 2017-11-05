#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d\n",&N);
  std::vector<int> A(N);
  std::vector<int> ans(100000,0);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
    ++ans[A[i]];
    if(A[i]!=0){
      ++ans[A[i]-1];
    }
    if(ans[A[i]]!=99999){
      ++ans[A[i]+1];
    }
  }
  int max=ans[0];
  for (size_t i = 1; i < 100000; i++) {
    if(max<ans[i]){
      max=ans[i];
    }
  }
  printf("%d\n",max);
  return 0;
}
