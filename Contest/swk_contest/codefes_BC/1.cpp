#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
    string S,ans;
    std::cin >> S;
    for (size_t i = 0; i < S.size()-8; i++) {
        ans.push_back(S[i]);
    }
    std::cout << ans << '\n';
  return 0;
}
