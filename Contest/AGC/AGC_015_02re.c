#include <stdio.h>

int main(int argc, char const *argv[]) {
  char s[100000]={};
  int length=0;
  int count=0;
  scanf("%s",s);
  for (size_t i = 0; s[i]!='\0'; i++) {
    length++; //建物の階数
  }
  printf("%d %d\n",length,count);

  for (size_t i = 0; i < length; i++) { //出発
    if (s[i]=='U') {
      count=count+(length-i)+((i-1)*2);
    }else{
      count=count+(i-1)+((length-i)*2);
    }
    printf("%d\n",count);
  }
  printf("%d\n",count);

  return 0;
}
