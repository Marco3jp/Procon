#include <stdio.h>

int main(int argc, char const *argv[]) {
  double rate=0.0;
  int n=0,k=0,R[100]={},temp=0;
  scanf("%d %d",&n,&k);
  for (size_t i = 0; i < n; i++) {
    scanf("%d",&R[i]);
  }

  for(size_t t=0; t<n; t++){
    for(size_t j=n-1; j>t; j--){
      if(R[j] > R[j-1]){
        temp = R[j];
        R[j] = R[j-1];
        R[j-1] = temp;
      }
    }
  }

  for (size_t i = k; i > 0; i--) {
    rate = (rate + R[i-1]) / 2;
  }
  printf("%lf\n",rate);
  return 0;
}
