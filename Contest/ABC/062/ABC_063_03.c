#include <stdio.h>

void sort(int*,int);
int point(int*,int,int);

int main(int argc, char const *argv[]) {
  int length=0,t=0,tt=0; //tは出力判定、ttは10倍数以外があるか判定
  scanf("%d",&length);
  int s[length];
  for (size_t i = 0; i < length; i++) {
    scanf("%d\n",&s[i]);
    if(s[i]%10!=0){
      tt=-1;
    }
  }

  if(tt==0){
    printf("0");
    return 0;
  }

  sort(s,length);
  for (size_t i = 0; i < length; i++) {
    t=point(s,length,i);
    if (t==-1) {
      return 0;
    }
  }
  return 0;
}

void sort(int *s,int length){
  int temp=0;
  for (size_t i = 0; i < length; i++) {
    for (size_t j = length-1; j > i; j--) {
      if (s[j] < s[j-1]) {
        temp=s[j];
        s[j]=s[j-1];
        s[j-1]=temp;
      }
    }
  }
}

int point(int *s,int length,int count){
  int sum=0;
  for (size_t i = count; i < length; i++) {
    sum+=s[i];
  }

  if(count>=2){
    for (size_t i = 0; i < count-1; i++) {
      sum+=s[i];
    }
  }

  if(sum%10!=0){
    printf("%d\n",sum);
    return -1;
  }
  return 0;
}
