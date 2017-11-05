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

  for (size_t i = 0; i < n; i++) {
    if(v[i]==1){
      printf("%d\n",i+1);
      break;
    }
  }
  return 0;
}
