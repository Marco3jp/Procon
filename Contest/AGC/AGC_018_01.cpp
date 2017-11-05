#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

bool hantei(int,int);


int main(int argc, char const *argv[]) {
  ll N,K,start=0,end;
  scanf("%lld%lld",&N,&K);
  std::vector<ll> A(N);
  for (int i = 0; i < N; i++) {
    scanf("%lld",&A[i]);
  }
  std::vector<int> aruyo(K);
  end=N;
  //ここまで入力//

  if(*max_element(all(A))<K){
    printf("IMPOSSIBLE\n");
    return 0;
  }

  bool gu=true;

  if(K%2==1){
    for (size_t i = 0; i < N; i++) {
      if(A[i]%2){
        gu=false;
        break;
      }
    }
    if(gu){
      printf("IMPOSSIBLE\n");
      return 0;
    }
  }


  for (size_t i = 0; i < N; i++) {
    bool shoki=hantei(K,A[i]);
    aruyo[A[i]]=-1;
    if(shoki==true){
      return 0;
    }
  }

  while(1){
    for (size_t i = 0; i < N; i++) {
      for (size_t j = start; j < end; j++) {
        ll temp=abs(A[i]-A[j]); // 絶対値 //
        int counter=0;
        if(aruyo[temp]==-1){
          counter=1;
          break;
        }

        if(counter==0){
          A.push_back(temp);
          aruyo[temp]=-1;
          bool flag=hantei(K,temp);
          if(flag==true){
            return 0;
          }
        }
      }
    }
    int zouka=A.size()-end;
    if(zouka==0){
      printf("IMPOSSIBLE\n");
      break;
    }
    start=end+1;
    end=zouka+end;
  }
  return 0;
}


bool hantei(int K,int newno){
  if(K==newno){
    printf("POSSIBLE\n");
    return true;
  }else{
    return false;
  }
}


/*
一周目は0からKまで
二週目はK+1から一周目に追加された部分の最後まで
三週目は二週目の最後+1から～～～って具合にして
もしその一周で数字が一つも増えなければ終わり(=Impossible)
その間、数字が追加されるごとにKの判定(まずイニシャルでも判定する)を行って存在すれば終わり(=Possible)
*/

/*変数一覧
  K - 目標の数字
  N - 与えられる数字の数
  A[] - 与えられる数字
  start - その一周の開始数字
  end - その一周の終わり数字
  newno - push_backされようとしている数字
*/
