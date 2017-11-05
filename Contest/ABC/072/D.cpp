#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void swap(int &a,int &b){
  int temp=b;
  b=a;
  a=temp;
}

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<int> P(N);
  std::vector<bool> same(N,false);
  for (size_t i = 0; i < N; i++) {
    std::cin >> P[i];
    if(P[i]==i+1){
      same[i]=true;
    }
  }
  int counter=0;
  for (size_t i = 0; i < N; i++) {
    if(same[i]==true){
      ++counter;
      if(same[i+1]==true && i!=N-1){
        swap(P[i],P[i+1]);
        same[i]=false;
        same[i+1]=false;
      }else if(i!=0){
        swap(P[i],P[i-1]);
        same[i]=false;
      }else{
        swap(P[i],P[i+1]);
        same[i]=false;
      }
    }
  }
  printf("%d\n",counter);
  return 0;
}
