#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,M;
  scanf("%d%d",&N,&M);
  if(N>12){
    N-=12;
  }
  double ndo=(30*N)+(double)(0.5*M);
  double mdo=(6*M);
  if(ndo>mdo){
    if(ndo-mdo>180){
      printf("%f\n",360-(ndo-mdo));
    }else{
      printf("%f\n",ndo-mdo);
    }
  }else if(mdo>ndo){
    if(mdo-ndo>180){
      printf("%f\n",360-(mdo-ndo));
    }else{
      printf("%f\n",mdo-ndo);
    }
  }else{
    printf("0\n");
  }
  return 0;
}
