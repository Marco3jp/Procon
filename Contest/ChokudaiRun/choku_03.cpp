#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  scanf("%d",&n);
  std::vector<int> v(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> v[i];
  }
for (size_t i = 0; i < n-1; i++) {
  std::cout << v[i] << ',';
}
std::cout << v[n-1] << '\n';
return 0;
}
