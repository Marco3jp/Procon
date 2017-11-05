#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, char const *argv[]) {
  int x=0,t=0;
  std::cin >> x;
  std::vector<int> v(x);
  for (size_t i = 0; i < x; i++) {
    std::cin >> v[i];
    //std::cout << v[i] << '\n';
  }
  std::sort(v.begin(),v.end());
  t=v[x-1]-v[0];
  std::cout << t << '\n';

  return 0;
}
