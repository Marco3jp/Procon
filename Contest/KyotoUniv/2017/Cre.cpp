#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int A;
  string S;
  std::cin >> A >> S;
  std::vector<int> s_num(S.size());
  for (size_t i = 0; i < S.size(); i++) {
    s_num[i]=S[i]-96;
    printf("%c-%d\n",s_num[i]+96,s_num[i]);
  }

  while (1) {
    //処理するよ～(o・∇・o)
  }

  for (size_t i = 0; i < s_num.size(); i++) {
    printf("%c",s_num[i]+96);
  }
  printf("\n");
  for (size_t i = 0; i < s_num.size(); i++) {
    printf("%d_",s_num[i]+96);
  }
  printf("\n");
  return 0;
}
