#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
    int N;
    scanf("%d",&N);
    std::vector<int> A(N);
    for (size_t i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int minan=1;
    for (size_t i = 0; i < N; i++) {
        if(A[i]%2==0){
            minan*=2;
        }else{
            minan*=1;
        }
    }
    int ans=pow(3,N);
    printf("%d\n",ans-minan);
  return 0;
}
