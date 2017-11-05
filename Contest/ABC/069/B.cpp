#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string S;
  std::cin >> S;
  int leng=S.size();
  std::cout << S[0] << leng-2 << S[leng-1] << '\n';
  return 0;
}
