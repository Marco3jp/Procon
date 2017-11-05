#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n,s=2;
  scanf("%d",&n);
  while (1) {
    if(s>n){
      printf("%d\n",s/2);
      break;
    }else{
      s*=2;
    }
  }
  return 0;
}
