#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string S;
  string test="YAKI";
  std::cin >> S;
  if(S.size()<4){
    printf("No\n");
    return 0;
  }
  for (size_t i = 0; i < 4; i++) {
    if(S[i]!=test[i]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
