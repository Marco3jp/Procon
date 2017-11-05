#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,counter=0,ni=0,normal=0;
  scanf("%d",&N);
  unsigned int A;
  for (int i = 0; i < N; i++) {
    scanf("%d",&A);
    if(A%4==0){
      ++counter;
    }else if(A%2==0){
      ++ni;
    }else{
      ++normal;
    }
  }
  //以上入力と4の倍数、2の検出終了
  if((ni==0 && counter+1>=normal) || (ni>0 && counter>=normal)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}
