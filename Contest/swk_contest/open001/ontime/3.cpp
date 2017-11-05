#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int H,M;
  double nagai=0,mizikai=0;
  scanf("%d%d",&H,&M);
  if(H>12){
    H-=12;
  }
  nagai+=H*30;
  mizikai+=M*6;
  nagai+=0.5*M;
  if(nagai>mizikai){
    if(nagai-mizikai>180){
      printf("%f\n",360-(nagai-mizikai));
    }else{
      printf("%f\n",nagai-mizikai);
    }
  }else{
    if(mizikai-nagai>180){
      printf("%f\n",360-(mizikai-nagai));
    }else{
      printf("%f\n",mizikai-nagai);
    }
  }
  return 0;
}
