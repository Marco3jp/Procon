#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;
long long dp[100][100][5000];

int main(int argc, char const *argv[]) {
  int N,A;
  dp[0][0][0]=1;
  scanf("%d%d",&N,&A);
  std::vector<ll> X(N);
  for (int i = 0; i < N; i++) {
    std::cin >> X[i];
  }

  //以上入力と初期化等//
  //以下随時コメント//

  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      for (int k = 0; k < 5000; k++) {
        if(dp[i][j][k]==0){
          continue; //なければ計算する必要ないので
        }
        dp[i+1][j+1][k+X[i]]+=dp[i][j][k]; //0のところから始めているので一枚(iのカード)ずつ増やす試行
        dp[i+1][j][k]+=dp[i][j][k]; //一番追える場所を増やしても同じ値になるよう選ぶことは可能なので
      }
    }
  }


  ll ans=0;
  for (int i = 1; i <= N; i++) {
    ans+=dp[N][i][i*A];
  }
  printf("%lld\n",ans);
  return 0;
}

//dp[j][k][s]=X[0]...X[j]からk個選んで合計をsにするような選び方の総数//
