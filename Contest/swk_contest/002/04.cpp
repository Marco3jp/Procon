#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> V(26,0);
  string W;
  std::cin >> W;
  for (size_t i = 0; i < W.size(); i++) {
    ++V[W[i]-97];
  }
  for (size_t i = 0; i < 26; i++) {
    if(V[i]%2==1){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
