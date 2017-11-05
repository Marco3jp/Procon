#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string S;
  int counter=0;
  std::cin >> S;
  for (size_t i = 0; i < 6; i++) {
    if(S[i]=='1'){
      ++counter;
    }
  }
  std::cout << counter << '\n';
  return 0;
}
