#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int A,B,C;
  scanf("%d%d%d",&A,&B,&C);
  for (size_t i = 1; i <= 100; i++) {
    if((A*i)%B==C){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}

/*
Aの倍数をN個選ぶ、総和をBで割ってCになる
可能かどうか
つまりAN%B=Cになるのか。
*/
