#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a=0;
  scanf("%d",&a);
  if(a<100){
    printf("00\n");
  }else if(a>=100 && 5000>=a){
    printf("%02d\n",a/100);
  }else if(a>=6000 && 30000>=a){
    printf("%02d\n",(a/1000)+50);
  }else if(a>=35000 && 70000>=a){
    printf("%02d\n",((a/1000)-30)/5+80);
  }else if(a>70000){
    printf("89\n");
  }
  return 0;
}
