#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
    int N,M;
    scanf("%d",&N);
    std::vector<ll> D(N);
    for (size_t i = 0; i < N; i++) {
        std::cin >> D[i];
    }
    scanf("%d",&M);
    if(N<M){
        printf("No0\n");
        return 0;
    }
    std::vector<ll> T(M);
    for (size_t i = 0; i < M; i++) {
        std::cin >> T[i];
    }
    sort(all(D));
    for (size_t i = 0; i < M; i++) {
        if(!binary_search(all(D),T[i])){
            printf("No1\n");
            return 0;
        }else{

        }
    }
    printf("Yes\n");
  return 0;
}
