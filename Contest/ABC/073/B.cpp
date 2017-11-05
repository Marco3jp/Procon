#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int sum=0,temp1,temp2,N;
  scanf("%d",&N);
  for (size_t i = 0; i < N; i++) {
    scanf("%d%d",&temp1,&temp2);
    sum+=(temp2-temp1)+1;
  }
  printf("%d\n",sum);
  return 0;
}
