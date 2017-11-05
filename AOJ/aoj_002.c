#include <stdio.h>

int main(int argc, char const *argv[]) {
  int t=0,count=0;
  scanf("%d",&t);
  int n[t];
  for (size_t i = 0; i < t; i++) {
    scanf("%d",&n[i]);
    if(n[i]==2){
      count++;
      continue;
    }
    for (size_t j = 3; j <= n[i]/j; j+=2) {
      if (n[i]%j==0){
        break;
      }
      count++;
    }
  }

  printf("%d\n",count);
  return 0;
}
