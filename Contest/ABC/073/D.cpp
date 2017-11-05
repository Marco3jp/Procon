#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;



void dfs(){
  stack<int> S;
  do_end[v]=true;
  S.push(v);
  while(!S.empty()){
    v=S.top();
    S.pop();
    //ここの処理がわかんねえ
    for (i:connection[v]) {
      if(!do_end[i]){
        dfs();
      }
    }
  }

}

int main(int argc, char const *argv[]) {
  int N;
  return 0;
}

/*
N - 個の街
M - 本の道
Leng[X][X] - XとXは距離C
R - 個の街を回る
r[R] - 訪れる街

制約
回る街の数は8以下
道の数は最大200*199/2=19900
*/
