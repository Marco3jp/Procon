#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int n,m;
  //bool oneflag=false,nflag=false;
  scanf("%d%d",&n,&m);
  std::vector<int> a(m);
  std::vector<int> b(m);
  std::vector<int> amemo;
  for (int i = 0; i < m; i++) {
    std::cin >> a[i];
    std::cin >> b[i];
  }
  //以上入力

  for (int i = 0; i < m; i++) {
    if(a[i]==1){
      amemo.push_back(b[i]);
    }
  }
  //以上　1の島からの行き先の島をまとめ//
  int asize=amemo.size();
  for (int i = 0; i < asize; i++) {
    for (size_t j = 0; j < m; j++) {
      if(a[j]==amemo[i]){
        if(b[j]==n){
          printf("POSSIBLE\n");
          return 0;
        }
      }
    }
  }

  printf("IMPOSSIBLE\n");
  return 0;
}
