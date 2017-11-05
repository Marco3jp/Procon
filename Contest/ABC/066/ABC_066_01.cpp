#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> a(3);
  scanf("%d%d%d",&a[0],&a[1],&a[2]);
  sort(all(a));
  printf("%d\n",a[0]+a[1]);
  return 0;
}
