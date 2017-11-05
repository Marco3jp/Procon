#include <stdio.h>

void muri();

int main(int argc, char const *argv[]) {
  int n=0,j=0;//loop回数//
  scanf("%d",&n);
  int a[n]={};//要素//

  for (size_t i = 1; i <= n; i++) {
    scanf("%d",&a[i]); //添字はボタン番号と同じ
  }

  for (size_t i = 1; i <= n; i++) {
    if(a[i]==2){
      j++;//メモには2行きの添字(ボタン番号)が入ってる//
    }
  }
  if(j==0){
    muri();//ひとつも2行きがないので落ち//
    return 0;
  }

  int temp=a[1];
  for (size_t i = 0; i < 100000000; i++) {
    if(temp==2){
      printf("%d\n",i+1);
      return 0;
    }
    temp=a[temp];
  }

  muri();
  return 0;
}


void muri(){
  printf("-1\n");
}
