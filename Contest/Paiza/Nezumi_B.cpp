#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void Millionaire_operation(bool &Now_Home);
void Way_operation(bool HomeStatus,int &way);
void Move_position(int &n_y,int &n_x,int way);
bool Ending(int H,int W,int n_x,int n_y);

int main(int argc, char const *argv[]) {
  int H,W,n_y,n_x,way=0;
  char temp;
  scanf("%d%d%d%d",&H,&W,&n_y,&n_x); //Millionaire[n_y][n_x]となる
  --n_y;--n_x;
  bool Millionaire[H][W];
  for (size_t i = 0; i < H; i++) {
    for (size_t j = 0; j < W; j++) {
      std::cin >> temp;
      if(temp=='.'){
        Millionaire[i][j]=false;
      }else if(temp=='*'){
        Millionaire[i][j]=true;
      }
    }
  }

  //以上入力
  while (1) {
    Millionaire_operation(Millionaire[n_y][n_x]);
    Way_operation(Millionaire[n_y][n_x],way);
    Move_position(n_y,n_x,way);
    if(Ending(H,W,n_x,n_y)){
      break;
    }
  }

  //以下出力
  for (size_t i = 0; i < H; i++) {
    for (size_t j = 0; j < W; j++) {
      if(Millionaire[i][j]==true){
        printf("*");
      }else{
        printf(".");
      }
    }
    printf("\n");
  }

  return 0;
}

void Millionaire_operation(bool &Now_Home){
  if(Now_Home){
    Now_Home=false;
  }else{
    Now_Home=true;
  }
}

void Way_operation(bool HomeStatus,int &way){
  if(HomeStatus){
    if(way==3){
      way=0;
    }else{
      ++way;
    }
  }else{
    if(way==0){
      way=3;
    }else{
      --way;
    }
  }
}

void Move_position(int &n_y,int &n_x,int way){
  if(way==0){
    --n_y;
  }else if(way==1){
    ++n_x;
  }else if(way==2){
    ++n_y;
  }else if(way==3){
    --n_x;
  }
}

bool Ending(int H,int W,int n_x,int n_y){
  if(n_y>=H || n_x>=W || n_y<0 || n_x<0){
    return true;
  }else{
    return false;
  }
}

/*
アルゴリズム
１．入力受付
  特にこの時、各番地をbool型で"Millionaire"として用意し、端から二値化する。
２．シミュレート
  今の家がfalseかtrueという情報をMillionaireの操作関数に渡して操作させる
  回転については、今の向いている方向をint型のWayで記録する(操作する関数も別途作成)
  ちなみに最初の向きは北側なので、北から東、南、西の順に0,1,2,3ということにします。(それぞれy-1,x+1,y+1,x-1という操作になる)
  操作さえ完璧に書けば完全に自動で終わるので、終了判定を間違えないように気をつける
３．


必要そうな操作関数
Main - それぞれの操作関数に適切なフラグを与える
Millionaireの操作関数(true or falseという感じ、参照渡し)
Wayの操作関数(回転するというやつ、向きを変えるだけ、参照渡し)
n_xとn_yの操作関数(移動するというやつ、移動するだけ、参照渡し)
end判定関数(引数は普通でいい)
*/
