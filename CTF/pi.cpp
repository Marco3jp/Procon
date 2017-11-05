#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;
ll i;

int main(int argc, char const *argv[]) {
  std::vector<char> v;
  char temp;
  int counter=0;
  while (cin>>temp) {
    v.push_back(temp);
  }
  ll leng=v.size();

  for (i = 0 ; i < leng; i++) {
    if(v[i]=='1' || v[i]=='2' || v[i]=='3' || v[i]=='5' || v[i]=='7'){
      ++counter;
      //printf("%d\n",counter);
      if(counter==10){
        break;
      }
    }else{
      counter=0;
    }
  }
  //printf("%d\n",counter);

  if(counter==10){
    for (size_t j = i-9; j <= i; j++) {
      printf("%c",v[j]);
    }
    printf("\n");
  }else{
    printf("連続した10個の素数は発見できませんでした\n");
  }

  return 0;
}

/*
fileより数列を受け取ってvectorに格納→Unix環境でcatコマンドからstdstreamに流して受け取る感じにする
0,1,2,3,5,7でカウントをインクリメント
それ以外ならカウントをリセット
という具合でカウンターが10になればその文字列を出力(その段階から10個前の添字から出力でいい)

問題はfileより数列を受け取るところ
scanfでもいいかと思ったけど100万桁をcmdに投げる気にはなれないので、やっぱり何らかの形でファイルから受け取らせないと

こいつは確かに連続した素数を判定する。しかし、問題で聴いているのはそういうことじゃないんだ。ということで、次にpi_re.cppでも作ってコーディングすることにするので頑張ろう。
とはいえ実装が比較的難しい内容で、確率的素数判定法を実装してその10桁の整数が素数であるか判定することになる。大まかにいえば、
１．三桁くらいまでの素数をリスト化(エラトステネスの篩を実装してもいい)
２．それで一旦割ってみる(割り切れたらもちろん次の数字に飛ばす)
３．それで割り切れない場合は確率的素数判定法を実装して判定する

なぜこのアルゴリズムにするのかというと、まずハイブリッド実装にすることで比較的速度を上げたいというのが大きい。
更に言うと、確率的素数判定法を導入しても問題がないから。もしフラグじゃなければもう一度実行してみればいい。
*/
