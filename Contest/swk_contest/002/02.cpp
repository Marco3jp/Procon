#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
string A,B,C;
  std::cin >> A>>B>>C;
  if(A[A.size()-1]==B[0] && B[B.size()-1]==C[0]){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
  return 0;
}
