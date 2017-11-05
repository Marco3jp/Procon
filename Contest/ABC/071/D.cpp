#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;ll sum=0;
  scanf("%d\n",&N);
  std::vector<char> S(N);
  std::vector<bool> Y; //Xなら0,Yなら1//
  for (size_t i = 0; i < N; i++) {
    scanf("%c\n",&S[i]);
  }
  for (size_t i = 0; i < N; i++) {
    if(S[i]==S[i+1]){
      Y.push_back(true);
      ++i;
    }else{
      Y.push_back(false);
    }
  }
  int leng=Y.size();

  if(Y[0]){
    sum=6;
  }else{
    sum=3;
  }
  for (size_t i = 1; i < leng; i++) {
    if(Y[i-1]==false){
      sum*=2;
    }else if(Y[i-1]==true && Y[i]==true){
      sum*=3;
    }
  }
  printf("%lld\n",(ll)sum%1000000007);
  return 0;
}
