#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N,M,tempA,tempB;
  scanf("%d%d",&N,&M);
  bool friends[N][N];
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      friends[i][j]=false;
    }
  }
  for (size_t i = 0; i < M; i++) {
    scanf("%d%d",&tempA,&tempB);
    friends[tempA][tempB]=true;
  }
  for (size_t i = 0; i < N; i++) {
    int ans=0;
    for (size_t j = 0; j < N; j++) {
      if(friends[i][j]==true || friends[j][i]==true){
        for (size_t k = 0; k < N; k++) {
          if(friends[j][k]==true || friends[k][j]==true){
            ++ans;
          }
        }
      }
    }
    printf("%d\n",ans);
  }
  return 0;
}
