#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x=0,y=0,t=0;
  scanf("%d %d",&x,&y);
  if(y>x){
    t=x;x=y;y=t;//スワップ,常にxが大きい
  }
  while (x!=0) {
    x=x%y;
    if(x>0){
      t=x;x=y;y=t;//スワップ,常にxが大きい
    }
  }
  printf("%d\n",y);
  return 0;
}
