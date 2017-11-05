#include <stdio.h>

int main(int argc, char const *argv[]) {
  int length=0,key=0,j=0,i=0,t=0;
  int A[101]={};
  scanf("%d",&length);

  for (i = 0; i < length; i++) {
    scanf("%d",&A[i]);
  }
  for (i = 0; i < length-1; i++) {
    printf("%d ",A[i]);
  }
  printf("%d\n",A[t]);


  for (i = 1; i < length; i++) {
    key = A[i];
    j = i - 1;
    while (j >= 0 && A[j]>key) {
      A[j+1] = A[j];
      j--;
    }
    A[j+1] = key;

    for (t = 0; t < length-1; t++) {
      printf("%d ",A[t]);
    }

    printf("%d\n",A[t]);
  }
  return 0;
}
