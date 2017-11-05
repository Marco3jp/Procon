#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void new_wariate(std::vector<int> &counter,std::vector<int> &soe_translator,char temp);
bool new_desuka(std::vector<int> &soe_translator,char c);
int wat_need_four(int x,int y);
void odd_xy(int &x,int &y,bool &need_one,int &need_two);


int main(int argc, char const *argv[]) {
  int need_two=0,need_four=0;
  bool need_one=false;
  std::vector<int> counter;
  std::vector<int> soe_translator('z',-1);
  std::vector<int> soe_counter;
  int x,y;
  scanf("%d%d\n",&x,&y);
  string temp;
  for (size_t i = 0; i < y; i++) {
    std::cin >> temp;
    for (size_t i = 0; i < x; i++) {
      if(new_desuka(soe_translator,temp[i])){
        new_wariate(counter,soe_translator,temp[i]);
      }
      ++counter[soe_translator[temp[i]]];
    }
  }
  odd_xy(x,y,need_one,need_two);
  need_four=wat_need_four(x,y);
  //多分ここまでで必要数のチェックは完了。ここから
  sort(all(counter));
  int i=0;
  while (1) {
    if(counter[i]>=4){
      counter[i]-=4;
      --need_four;

    }else if(counter[i]>=2){

    }

    if(need_four==0 && need_two==0 && need_one==false){
      printf("Yes\n");
      break;
    }
  }

  return 0;
}


//これおかしい。soe_translatorに代入するからvoidでいいのでは
void new_wariate(std::vector<int> &counter,std::vector<int> &soe_translator,char temp){
  counter.push_back(0);
  soe_translator[temp]=counter.size()-1;
}

bool new_desuka(std::vector<int> &soe_translator,char c){
  if(soe_translator[c]==-1){
    return true;
  }
  return false;
}

int wat_need_four(int x,int y){
  return x*y/4;
}

void odd_xy(int &x,int &y,bool &need_one,int &need_two){
  bool x_odd=false,y_odd=false;
  if(x%2==1){
    x-=1;
    x_odd=true;
  }
  if(y%2==1){
    y-=1;
    y_odd=true;
  }
  if(x_odd && y_odd){
    need_one=true;
    need_two=x/2+y/2;
  }else if(x_odd){
    need_two=y/2;
  }else if(y_odd){
    need_two=x/2;
  }
}

/*
アルゴリズムさん
0.xとyをにゅーろく
1.メモに記載の通りそれぞれの文字を数え上げます(文字列そのものは記録しなくて良い)
2.奇数の行・列を確認し、need_fourとneed_twoとneed_one(これはboolでよい)に計算で当てていく
3.数え上げから奇数のものが1以上でないか確認。もちろんneed_oneがfalseなら0でなければならない。
4.あとは大きいのから順にneed_fourから消化していく感じ。減らしていくから結局forで下まで見る感じになるけどまあ仕方がない。

気をつけるのは下まで見に行く間に捕まえて、forをリセットするときの添字リセだなあという感じ。
もしかすると全部のneedを消化してbreakすればいいと思ってwhileで回してもいいのではという感じがあるので検証したければして。バグにならなければなんでもいい。

メモ
soe_translator[(英字)]にそれぞれの文字の添字を入れる(使われる文字がわからないので、問題に応じて適切に配列を使いたいので)
つまり、aという文字のカウンターがわからないので、counter[soe_translator[a]]とするみたいな感じにします。
変数を変換器にするというアレ

新しい文字が来た場合はnew_wariate()を呼び出すとsoe_counterさんを見て次の添字を教えてくれます。
もちろんその中でsoe_counterを加算するので次読んだ場合はアレってやつ。
新しい文字かの判定はsoe_translator[英字]が-1になっているか。
soe_translatorは英字の終端まで取っても問題ないので、vectorで定義したときの初期化で-1を入れることにしましょう。

*/
