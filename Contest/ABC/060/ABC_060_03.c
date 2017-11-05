#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N=0,T=0,z=0,i,x=0;
  scanf("%d %d",&N,&T);
  int t[N];
  for (i = 0; i < N; i++) {
    scanf("%d",&t[i]);
  }

  for (i = 0; i < N; i++) {
    if (z > t[i]) {
      x += (T - (z - t[i])) ; z = t[i] + T;
    }else{
      x += T ; z = t[i] + T;
    }
  }

  printf("%d",x);
  return 0;
}
