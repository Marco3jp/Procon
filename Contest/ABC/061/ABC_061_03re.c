#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n=0,k=0;
  scanf("%d %d",&n,&k);
  int retu[k];

  for (size_t i = 0; i < k; i++) {
    retu[i]=100000;
  }

  for (size_t i = 0; i < n; i++) {
    int a=0,b=0;
    scanf("%d %d",&a,&b);

    if(a<retu[k-1]){
      for (size_t j = 0; j < k; j++) {
        if(retu[j]>=a){
          for (size_t z = j; z < (k-b); z++) {
            retu[z+b]=retu[z];
          }
          for (size_t te = j; te < b; te++) {
            retu[te]=a;
          }
          break;
        }
      }
    }

  }

  printf("%d\n",retu[k-1]);
  return 0;
}
