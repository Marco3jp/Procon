#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a,b,c;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  if((a%2==0 && b%2==0 && c%2== 1) || (a%2==1 && b%2==0 && c%2== 0)){
    printf("NO");
  }else{
    printf("YES");
  }
  return 0;
}
