#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,Q,a,b;
  scanf("%d%d",&N,&Q);
  std::vector<int> koma(N,0);
  for (size_t i = 0; i < Q; i++) {
    scanf("%d%d",&a,&b);
    ++koma[a-1];
    if(b!=N){
      --koma[b];
    }
  }
  int sum=0;
  for (size_t i = 0; i < N ; i++) {
    sum+=koma[i];
    if(sum%2==0){
      printf("0");
    }else{
      printf("1");
    }
  }
  printf("\n");
  return 0;
}
