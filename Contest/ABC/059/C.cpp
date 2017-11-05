#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

void operation_test(bool &Next_plus,ll &sum,ll Next_number,ll &operation);

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<ll> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  ll operation_one=0;
  ll operation_two=0;
  ll sum=0;

  bool Next_plus=false;
  for (size_t i = 0; i < N; i++) {
    operation_test(Next_plus,sum,A[i],operation_one);
    printf("%d %lld\n",i,sum);
  }
  Next_plus=true;
  sum=0;
  printf("ここから第二ステージ\n");
  for (size_t i = 0; i < N; i++) {
    operation_test(Next_plus,sum,A[i],operation_two);
    printf("%d %lld\n",i,sum);
  }

  if(operation_one>operation_two){
    printf("%lld\n",operation_two);
  }else{
    printf("%lld\n",operation_one);
  }

  return 0;
}

void operation_test(bool &Next_plus,ll &sum,ll Next_number,ll &operation){
  if(Next_plus){
    if(sum+Next_number>0){
      Next_plus=false;
      sum+=Next_number;
    }else{
      Next_plus=false;
      operation+=abs((1-sum)-Next_number);
      printf("%d\n",1-sum);
      sum=1;
    }
  }else{
    if(sum+Next_number<0){
      Next_plus=true;
      sum+=Next_number;
    }else{
      Next_plus=true;
      operation+=abs((-1-sum)-Next_number);
      printf("%d\n",-1-sum);
      sum=-1;
    }
  }
}

/*アルゴリズム
1.入力受付
2.初手負になるパターンで試行(あくまで符号が変わるまでを足し引きしたりして計算するだけなのでO(N*1)なはず)
3.次に初手正になるパターンで試行(同上のアルゴリズムで、O(N*1)になるはず)
4.それぞれのoperationを比較し、少ない方を出力するO(N*1+N*1)なのでおそらく計算時間は1000msすらいかない

Memo
bool Next_plusあたり作って、次の符号がtrue or falseで判定させれば楽かな
そうすれば初手負でも正でも同じ関数内でoperationの計算出来るのでは
重要なのは、"次の符号"、"ここまでの合計"、"次の数字"で、返り値をoperationとして+=させる感じ。
うち次の符号とここまでの数字は参照渡しにして操作する

*/
