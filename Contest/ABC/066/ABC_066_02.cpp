#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string S;int leng=0,ans=2;
  std::cin >> S;
  leng=S.size();
  while (S.substr(0,(leng-ans)/2)!=S.substr((leng-ans)/2,(leng-ans)/2)){
    ans+=2;
  }
  printf("%d\n",leng-ans);
  return 0;
}
