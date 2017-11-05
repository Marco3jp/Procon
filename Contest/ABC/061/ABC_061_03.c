#include <stdio.h>
#include <stdlib.h>

int* bubbleSort(int* N, int len);


int main(int argc, char const *argv[]) {
  int n=0,k=0,*retu,t=0;
  scanf("%d %d",&n,&k);
  retu = (int *)malloc(sizeof(int) * 100);
  for (size_t i = 0; i < n; i++) {
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    for (size_t n = 0; n < b; n++) {
      retu[t]=a;t++;
      if(t%100==0 || t!=0){
        retu = (int*)realloc(retu,sizeof(int)*10000);
      }
    }
  }
  bubbleSort(retu,t);
  printf("%d\n",retu[k-1]);
  return 0;
}

  int* bubbleSort(int* N, int len){
  int z,j,temp;
  for(z=0; z<len; z++){
    for(j=len-1; j>z; j--){
      if(N[j] < N[j-1]){
        temp = N[j];
        N[j] = N[j-1];
        N[j-1] = temp;
      }
    }
  }
  return N;
}
