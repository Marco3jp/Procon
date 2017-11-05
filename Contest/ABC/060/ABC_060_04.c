#include <stdio.h>

int main(int argc, char const *argv[]) {
  int N=0,W=0,i,j,tmp=0,geto=0;
  scanf("%d %d",&N,&W);
  int w[N],v[N],top[N];float ave[N];
  for (i = 0; i < N; i++) {
    scanf("%d %d",&w[i],&v[i]);
  }
  for (i = 0; i < N; i++) {
    ave[i] = v[i] / w[i];
  }

  for (i=0; i<N; i++) {
    for (j=i+1; j<N; j++) {
      if (ave[i] > ave[j]) {
        tmp =  ave[i];
        ave[i] = ave[j];
        ave[j] = tmp;
        top[i] = i;
      }
    }
  }

  for (i = 0; i < N; i++) {
    if(w[top[i]]<W){
      geto = v[top[i]]; W -= w[top[i]];
    }
  }
  printf("%d",geto);
  return 0;
}
