#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,Q,a,b,sum=0;
  scanf("%d%d",&N,&Q);
  std::vector<int> counter(N,0);
  for (size_t i = 0; i < Q; i++) {
    scanf("%d%d",&a,&b);
    ++counter[a-1];
    if(b!=N){
      --counter[b];  
    }
  }

  for (size_t i = 0; i < N; i++) {
    sum+=counter[i];
    if (sum%2==0) {
      printf("0");
    }else{
      printf("1");
    }
  }
  printf("\n");
  return 0;
}
