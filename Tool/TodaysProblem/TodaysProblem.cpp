#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

bool input(std::vector<int> &A,std::vector<int> &B,std::vector<int> &C,std::vector<int> &D,int &lastestabc);
void modeone(std::vector<int>,int,char);
void modetwo();
void modethree();
int random_number(int lastestabc,int &onepoints);

int main(int argc, char const *argv[]) {
  std::vector<int> A,B,C,D;
  int lastestabc=0;
  if(!input(A,B,C,D,lastestabc)){
    printf("ファイルの読み込みに失敗しました。\n");
    return 0;
  }
  printf("モードを選びなさい！\n1-美少女が今日の一問を選ぶわよ！ 2-解いた問題を登録よ！(未実装) 3-解いた問題を確認よ！ : ");
  int flag;
  scanf("%d",&flag);
  if(flag==1){
    char difficulty;
    printf("難易度を選びなさい！ABC基準でA~D以外選んだら許さないわよ！ : ");
    scanf("%*c%c",&difficulty);
    if(difficulty=='A' || difficulty=='a'){
      modeone(A,lastestabc,difficulty);
    }else if(difficulty=='B' || difficulty=='b'){
      modeone(B,lastestabc,difficulty);
    }else if(difficulty=='C' || difficulty=='c'){
      modeone(C,lastestabc,difficulty);
    }else if(difficulty=='D' || difficulty=='d'){
      modeone(D,lastestabc,difficulty);
    }else{
      printf("だ！か！ら！A~D以外選んだら許さないって言ったじゃない！！\nそんなことしてたらICPCのメンバーと仲違い起こしてギスギスしたまま本番になっちゃうわよ！！\nもう一度起動して、やり直してくださいね。");
      return 0;
    }
  }else if(flag==2){
    modetwo();
  }else if(flag==3){
    modethree();
  }else if(flag==4){
    printf("と、特別なテスト用モードなんだからね……っ！\n");
    int onepoints=(unsigned)time(NULL);
    for (size_t i = 0; i < 30; i++) {
      std::cout << random_number(lastestabc,onepoints) << '\n';
    }
  }else{
    printf("範囲外のアクセスをしてきたですって？し、仕方ないわね。せぐふぉを返すのも無粋な感じだし……\n――ぜひとも私を強い競プロerに導きなさい！(こうしてTHE PROCONM@STERは始まったのだった……)\n");
  }
  printf("より良い競プロライフを送れることを願っているわ。\n");
  return 0;
}

void modeone(std::vector<int> difficulty,int lastestabc,char dif){
  int problem;
  int onepoints=(unsigned)time(NULL);
  while(1){
    problem=random_number(lastestabc,onepoints);
    int leng=difficulty.size();
    bool flag=true;
    for (int i = 0; i < leng; i++) {
      //printf("difficulty[%d]%d\n",i,difficulty[i]);
      if(problem+1==difficulty[i]){
        flag=false;
      }
    }
    if(flag){
      break;
    }
  }
  printf("それじゃあ今日の問題は、ABC%dの%c問題に決定ね。\n",problem,dif);
}

void modetwo(){
  printf("未実装って書いてあるのに読めないの！？\nそういう人には『技術は人類を救う　24時間マラソンコンテスト』を走ってもらうわよ！");
 //未実装だよ～(o・∇・o)
}

void modethree(){
  printf("未整備よ。ごめんなさいね\n");
}

bool input(std::vector<int> &A,std::vector<int> &B,std::vector<int> &C,std::vector<int> &D,int &lastestabc){
  std::ifstream ifs("AC.txt");
  std::string readac;
  int counter=0;
  if (ifs.fail()){
    return false;
  }
  while (std::getline(ifs,readac)){
    if(readac=="-1"){
      ++counter;
      continue;
    }
    if(counter==0){
      lastestabc=atoi(readac.c_str());
    }else if(counter==1){
      A.push_back(atoi(readac.c_str()));
    }else if(counter==2){
      B.push_back(atoi(readac.c_str()));
    }else if(counter==3){
      C.push_back(atoi(readac.c_str()));
    }else if(counter==4){
      D.push_back(atoi(readac.c_str()));
    }
  }
  return true;
}

//今は以下がおかしいので要修正//
int random_number(int lastestabc,int &onepoints){
  srand(onepoints);
  onepoints=rand();
  return onepoints%lastestabc+1;
}

/*
===関数一覧===
main - モードの呼び出しと変数の定義がメイン
modeone - ランダムで問題を選んでくれる部分(もし解いた問題ならランダムもう一度みたいなアルゴリズム)
modetwo - ACの追加をする部分(細かな流れは後述)
modethree - AC一覧表示。
input - ac.dataから読み込んでVectorに入れる部分。参照渡しを使って返り値はエラー判定のみ。
random_number - 乱数を返す関数。なお0は必要が無いので、+1して使う前提として最新ABCよりも-1された回数が最大値になるようにする。

===メモ===
おそらくmodetwoの実装にはファイルストリームクラスを理解しないといけなくて、結構難しそう(自分があまりクラスを理解できていないところもある)なので、一旦その機能は放置する。
一応modeoneさえ実装できてしまえばおおよそ最低限の利用価値は生まれるし、ぶっちゃけてしまえばデータへの追加くらい自分でできるでしょというところでもあるので迷いどころではある。

*/
