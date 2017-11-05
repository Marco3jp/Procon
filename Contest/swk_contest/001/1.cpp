#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> v(3);
  for (size_t i = 0; i < 3; i++) {
    std::cin >> v[i];
  }
  sort(all(v));
  std::cout << v[1] << '\n';
  return 0;
}
