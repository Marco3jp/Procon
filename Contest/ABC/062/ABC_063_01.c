#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a=0,b=0;
  scanf("%d %d",&a,&b);
  if (a+b>=10) {
    printf("error\n");
  }else{
    printf("%d\n",a+b);
  }
  return 0;
}
