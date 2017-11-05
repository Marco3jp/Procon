#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int H,W;
  scanf("%d%d",&H,&W);
  bool S[H+2][W+2];
  for (int i = 0; i < H+2; i++) {
    for (int j = 0; j < W+2; j++) {
      S[i][j]=false;
    }
  }
  string temp;
  for (int i = 1; i <= H; i++) {
    std::cin >> temp;
    for (int j = 1; j <= W; j++) {
      if(temp[j-1]=='#'){
        S[i][j]=true;
      }else{
        S[i][j]=false;
      }
    }
  }

  int ans[H+2][W+2],bomb;
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if(S[i][j]==true){
        ans[i][j]=-1;
      }else{
        bomb=0;
        for (int k = i; k < i+3; k++) {
          for (int z = j; z < j+3; z++) {
            if(S[k-1][z-1]==true){
              ++bomb;
            }
          }
        }
        ans[i][j]=bomb;
      }
    }
  }
  for (int i = 1; i <= H; i++) {
    for (int j = 1; j <= W; j++) {
      if(ans[i][j]==-1){
        printf("#");
      }else{
        printf("%d",ans[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}
