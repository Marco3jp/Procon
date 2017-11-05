#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<bool> v(5,true);
  int temp=0;
  for (size_t i = 0; i < 4; i++) {
    scanf("%d",&temp);
    v[temp-1]=false;
  }
  for (size_t i = 0; i < 5; i++) {
    if(v[i]){
      printf("%d\n",i+1);
    }
  }
  return 0;
}
