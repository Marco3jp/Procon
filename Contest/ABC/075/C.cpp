#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void dfs(){

}

int main(int argc, char const *argv[]) {
  int N,M;
  scanf("%d%d",&N,&M);
  bool line[N][N],end[N][N];
  std::vector<int> low(N,-1);
  std::vector<int> pre(N,-1);
  int counter=0;
  int a,b;
  for (size_t i = 0; i < M; i++) {
    scanf("%d%d",&a,&b);
    line[a][b]=true;
  }

  //stack<int> nextbox;


  return 0;
}
