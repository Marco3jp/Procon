#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  std::vector<bool> v(1000);
  double root=sqrt(999);
  for (size_t i = 0; i < 1000; i++) {
    v[i]=true;
  }
  for (size_t i = 2; i < 1000; i++) {
    if(v[i]==false){
      continue;
    }else if(i>root){
      break;
    }
    for (size_t j = i+1; j < 1000; j++) {
      if(v[j]==false){
        continue;
      }else if(j%i==0){
        v[j]=false;
      }
    }
  }
  std::vector<int> sosu;
  for (size_t i = 2; i < 1000; i++) {
    if(v[i]==true){
      sosu.push_back(i);
    }
  }
  for (size_t i = 0; i < sosu.size(); i++) {
    printf("%d ",sosu[i]);
    if(i%10==0 && i!=0){
      printf("\n");
    }
  }

  return 0;
}

/*
エラトステネスの篩の実装はbool型のvectorを使って、trueは素数、falseは合成数とする。
その後は配列の添字から素数リストを獲ればいい

その後の確率的素数判定法はエラトステネスの篩を実装した後に考えよう
いやまあ例のフェルマーテストを実装するだけなのでそんなに難しくはない
*/
