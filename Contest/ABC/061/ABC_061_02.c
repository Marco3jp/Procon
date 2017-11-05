#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n=0,m=0,city[51]={0},t1=0,t2=0;
  scanf("%d %d",&n,&m);
  for (size_t i = 0; i < m; i++) {
    scanf("%d %d",&t1,&t2);
    city[t1]++;city[t2]++;
  }
  for (size_t i = 1; i < n; i++) {
    printf("%d\n",city[i]);
  }
  return 0;
}
