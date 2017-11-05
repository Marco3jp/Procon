#include <stdio.h>

int main(int argc, char const *argv[]) {
  char a[10]={},b[10]={},c[10]={};
  int an,bn;
  scanf("%s %s %s",a,b,c);
  for (an = 0;a[an] != '\0';an++);
  for (bn = 0;b[bn] != '\0';bn++);

  if(a[an]==b[0] && b[bn]==c[0]){
    printf("YES");
  }else{
    printf("NO");
  }
  return 0;
}
