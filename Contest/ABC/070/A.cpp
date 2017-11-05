#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string N;
  string turnN;
  std::cin >> N;
  int leng=N.size();
  for (size_t i = leng-1,j=0; j<leng ; --i,++j) {
    turnN.push_back(N[i]);
  }
  if(turnN==N){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
