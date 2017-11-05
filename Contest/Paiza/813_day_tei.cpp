#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  std::vector<ll> x(N),y(N);
  bool soe[N];
  for (size_t i = 0; i < N; i++) {
    soe[i]=true;
  }

  std::vector<ll> out;
  for (int i = 0; i < N; i++) {
    std::cin >> x[i] >> y[i];
  }
  ll currentx=0,currenty=0,minsoe;
  double minlen=10000000000;
  for (int i = 0; i < N; i++) {
    if(soe[i]==false && i!=N-1){
      continue;
    }else if(soe[i]==false && i==N-1){
      out.push_back(minsoe);
      soe[minsoe]=false;
      currentx=x[minsoe];
      currenty=y[minsoe];
      if(out.size()!=N){
        i=0;
        minlen=10000000000;
      }else{
        break;
      }
    }

    double templen = sqrt(pow(currentx-x[i]),2)+pow((currenty-y[i]),2));
    if (templen<minlen) {
      minlen=templen;
      minsoe=i;
    }

    if(i==N-1){
      out.push_back(minsoe);
      soe[minsoe]=false;
      currentx=x[minsoe];
      currenty=y[minsoe];
      if(out.size()!=N){
        i=0;
        minlen=10000000000;
      }else{
        break;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    printf("%lld %lld\n",x[out[i]],y[out[i]]);
  }

  return 0;
}
