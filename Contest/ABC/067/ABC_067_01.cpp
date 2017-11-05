#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int a,b;
  scanf("%d%d",&a,&b);
  if((a+b)%3==0 || a%3==0 || b%3==0){
    printf("Possible\n");
  }else{
    printf("Impossible\n");
  }
  return 0;
}
