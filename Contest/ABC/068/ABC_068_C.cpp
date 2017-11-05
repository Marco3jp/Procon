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
  std::vector<int> bmemo;
  for (int i = 0; i < m; i++) {
    std::cin >> a[i];
    std::cin >> b[i];
    if(a[i]==1){
      amemo.push_back(b[i]);
    }
    if(b[i]==n){
      bmemo.push_back(a[i]);
    }
  }
  //以上入力と行き先リスト//

  int asize=amemo.size();
  sort(all(bmemo));
  for (int i = 0; i < asize; i++) {
    if(binary_search(bmemo.begin(),bmemo.end(),amemo[i])){
      printf("POSSIBLE\n");
      return 0;
    }
  }
  printf("IMPOSSIBLE\n");
  return 0;
}
