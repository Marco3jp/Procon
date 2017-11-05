#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<ll> C(N);
  std::vector<int> counter(N);
  for (int i = 0; i < N; i++) {
    std::cin >> C[i];
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if(C[i]%C[j]==0 && i!=j){
        ++counter[i];
      }
    }
  }
  /*
  for (int i = 0; i < N; i++) {
    printf("counter[%d] - %d\n",i,counter[i]);
  }
  */
  double ans=0;
  for (int i = 0; i < N; i++) {
    if(counter[i]%2==0){
      //printf("今の値%d\n",counter[i]);
      double temp1=counter[i]+2;double temp2=counter[i]*2+2;
      //std::cout << (double)temp1/(double)temp2;
      //printf("=%d/%d\n",temp1,temp2);
      ans+=temp1/temp2;
      //printf("%f\n",ans);
    }else{
      ans+=0.5; //1/2
      //printf("%f\n",ans);
    }
  }
  printf("%f\n",ans);
  return 0;
}
