#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  while (1) {
    int chars=0;int tanku[5]={5,7,5,7,7};int block=0;//blockはtankuの添字、更新はvを連ねてlengがtankuと同じになった場合
    int leng=0,istart=1;
    scanf("%d",&chars);
    if(chars==0){
      return 0;
    }
    std::vector<string> v(chars);
    for (size_t i = 0; i < chars; i++) {
      std::cin >> v[i];
    }

    //ここまで定義と入力
    //ここから処理

    for (size_t i = 0; block<=4; i++) {
      leng+=v[i].size();
      if (leng>tanku[block]) {
        block=0;leng=0;
        i=istart-1;istart++;
      }else if(leng==tanku[block]){
        block++;leng=0;
      }
    }
    printf("%d\n",istart);
  }
  return 0;
}
