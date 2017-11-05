#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x=0,a=0,b=0,t=0;
  scanf("%d%d%d",&x,&a,&b);
  t=a-b;
  if (t>=0) {
    printf("delicious\n");
  }else if(-t>=x){
    printf("safe\n");
  }else{
    printf("dangerous\n");
  }
  return 0;
}
