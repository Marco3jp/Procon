#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,min=INT_MAX;
  scanf("%d",&N);
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      if(i*j>N){
        break;
      }
      if(min>abs(i-j)+(N-i*j)){
        min=abs(i-j)+(N-i*j);
      }
    }
  }
  printf("%d\n",min);
  return 0;
}
