#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

ll sum(int a){
  ll temp=(ll)(a-1)*a/2;
  return temp;
}

int main(int argc, char const *argv[]) {
  string A;
  std::cin >> A;
  std::vector<int> counter(26,0);
  int leng=A.size();
  for (size_t i = 0; i < leng; i++) {
    ++counter[A[i]-97];
  }
  ll tt=sum(leng);
  for (size_t i = 0; i < 26; i++) {
    if(counter[i]==0){
      continue;
    }else{
      tt-=sum(counter[i]);
    }
  }

  printf("%lld\n",tt+1);
  return 0;
}

/*
全体的に-65して、Aが0、aが32になるはず。
それをvectorに入れて、その文字が何個あるのかカウントさせる
加えて文字列の総数数えたら、あとはll sum()とかに投げて、その文字や文字列における総数をn*(n-1)/2の公式で計算させて返させて、
なんとなく最後に集計すればOK
*/
