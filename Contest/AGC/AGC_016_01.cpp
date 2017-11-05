#include <stdio.h>
#include <string.h>
#include <algorithm>
#include <vector>

int huku(char*,int);

int main(int argc, char const *argv[]) {
  char s[101]={};
  bool flag=0;
  int size=0,answer=0;
  scanf("%s",s);
  size=strlen(s);
  flag=huku(s,size);
  if(flag==0){
    if(size%2==0){
      printf("%d\n",size/2);
    }else{
      printf("%d\n",(size-1)/2);
    }
  }else{
    printf("%d\n",flag);
  }
  return 0;
}


int huku(char s[],int size){
  std::vector<int> memo(size);
  int current=0,answer=0;
  for (size_t i = 0; i < size; i++) {
    for (size_t j = i+1; j < size; j++) {
      current=i;
      if(s[i]==s[j]){
        if(memo[i]<(j-current+1)){
          memo[i]=j-current+1;
        }
        current=j;
      }
    }
    if(memo[i]<(size-current+1)){
      memo[i]=size-current+1;
    }
  }
  std::sort(memo.begin(),memo.end());
  answer=memo[0];
  return answer;
}
