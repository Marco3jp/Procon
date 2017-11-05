#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int AS,AE,BS,BE;
  bool saki; //Aが先？
  scanf("%d%d%d%d",&AS,&AE,&BS,&BE);
  if(AS<BS){
    saki=true;
    if(AE<BS){
      printf("0\n");
      return 0;
    }
  }else{
    saki=false;
    if(BE<AS){
      printf("0\n");
      return 0;
    }
  }
  //以上入力と例外処理

  if(saki){
    if(AE>BE){
      printf("%d\n",BE-BS);
    }else{
      printf("%d\n",AE-BS);
    }
  }else{
    if(BE>AE){
      printf("%d\n",AE-AS);
    }else{
      printf("%d\n",BE-AS);
    }
  }
  return 0;
}
