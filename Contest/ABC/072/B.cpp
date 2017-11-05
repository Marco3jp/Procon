#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string S;
  std::cin >> S;
  for (size_t i = 0; i < S.size(); i++) {
    if(i%2==0){
      printf("%c",S[i]);
    }
  }
  return 0;
}
