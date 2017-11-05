#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  ll N;
  scanf("%lld",&N);
  std::vector<ll> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  bool flag=false;//trueならループ抜け、もしひとつでもまだ割れるならfalseに変えて継続
  while(1){
    if(flag){
      break;
    }
    flag=true;
    for (size_t i = 0; i < N; i++) {
      if(A[i]%2==0){
        A[i]/=2;
        flag=false;
      }
    }
  }
  sort(all(A));
  int memo=A[0],counter=1;
  for (size_t i = 1; i < N; i++) {
    if(A[i]!=memo){
      ++counter;
      memo=A[i];
    }
  }
  printf("%d\n",counter);
  return 0;
}

/*
すべての数をとにかく2で除算する(最大でも29回)→O(10^6*29)=O(29^7)
次にソートO(10^6*log2(10^6))=O(2^7)、ここまででO(31^7)くらい
あとはforとメモ化で重複を読み飛ばしながらカウントO(10^6+α)
よっておそらくO(3.2^8)がトータルのオーダー時間なので、ギリギリ間に合うんじゃないかなという予想
*/
