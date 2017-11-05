#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<int> mozi(26,0);
  string S;
  std::cin >> S;
  for (size_t i = 0; i < S.size(); i++) {
    ++mozi[S[i]-97];
  }
  for (size_t i = 0; i < 26; i++) {
    if(mozi[i]%2!=0){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
