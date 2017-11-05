#include <stdio.h>

int main(int argc, char const *argv[]) {
  char s[100000]={};
  double length=0,count=0;
  scanf("%s",s);
  for (size_t i = 0; s[i]!='\0'; i++) {
    length++; //建物の階数
  }

  for (size_t i = 0; i < length; i++) { //出発
    for (size_t j = 0; j < length; j++) { //目的
      if(i>j){
        if(s[i]=='D')count++;else count=count+2;
      }else if (i<j) {
        if(s[i]=='D')count=count+2;else count++;
      }
    }
  }
  printf("%.0lf\n",count);

  return 0;
}
