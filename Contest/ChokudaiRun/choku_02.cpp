#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n,temp,s=0;
  scanf("%d",&n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> temp;
    s+=temp;
  }
  printf("%d\n",s);
  return 0;
}
