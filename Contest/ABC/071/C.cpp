#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d\n",&N);
  std::vector<ll> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  sort(all(A),std::greater<int>());
  ll temp=A[0];
  ll first=0,second=0;
  for (size_t i = 1; i < N; i++) {
    if(temp==A[i]){
      if(first==0){
        first=temp;
      }else{
        second=temp;
        break;
      }
      i++;
      temp=A[i];
    }else{
      temp=A[i];
    }
  }
  printf("%lld\n",first*second);
  return 0;
}

/* 変数一覧
N - Number of elements
A(N) - All elements(rod's length)



アルゴリズム
1.受け取り
2.ソート(大きいものから順に)
3.上から順にバーって重複をチェック
4.重複が二組出来れば完成
5.掛け算して出力

*/
