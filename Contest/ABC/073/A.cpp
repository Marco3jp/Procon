#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string N;
  std::cin >> N;
  for (size_t i = 0; i < 2; i++) {
    if(N[i]=='9'){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}
