#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;
  double ex=0;
  scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
  x2-=x1;y2-=y1;
  x3-=x1;y3-=y1;
  ex=abs(x2*y3-x3*y2)/2;
  ex = ex * 10;          /*処理を行う桁を10-1 の位にする*/
  ex = (double)(int)(ex + 0.5);      /*四捨五入の場合*/
  ex = ex / 10;

  printf("%.2lf\n",ex);
return 0;
}
