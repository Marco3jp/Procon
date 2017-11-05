#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  while (1) {
    int n,temp,kohosha=0;
    scanf("%d",&n);
    if(n==0){
      return 0;
    }
    vector<char> c(n);
    vector<int> counter(25);
    for (int i = 0; i < n; i++) {
      scanf("%c",&c[i]);
    }
    for (int i = 0; i < n; i++) {
      if(counter[c[i]-65]==0){
        ++kohosha;
      }
      ++counter[c[i]-65];
      temp=(int)n/kohosha;
      if(temp<counter[c[i]-65]){
        printf("%c %d\n",c[i],i+1);
        break;
      }
    }
    //printf("TIE\n");
  }
  return 0;
}

//N人目がいるとわかった段階でn/Nが当選ラインになる
//そいつがにゅーかまーなのか調べたら？
