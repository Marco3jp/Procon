#include <stdio.h>

int main(int argc, char const *argv[]) {
  double n=0,a=0,b=0,out=0,root=0;
  scanf("%lf %lf %lf",&n,&a,&b);
  if(a>b){
    root=1;
  }else if (n==1 && a!=b) {
    root=1;
  }else if (n==1 && a==b) {
    root=1;out=1;
  }
  if (root!=1) {
    out =(b-a)*(n-2)+1;
  }
  printf("%.0lf\n",out);

  return 0;
}

//解けませんでした。最後の二つのテストケース突破の条件はなんだろう？
