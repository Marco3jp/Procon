#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
    int N,M;
    bool flag=true;
    scanf("%d",&N);
    std::vector<ll> D(N);
    for (int i = 0; i < N; i++) {
        std::cin >> D[i];
    }
    scanf("%d",&M);
    std::vector<ll> T(M);
    for (int i = 0; i < M; i++) {
        std::cin >> T[i];
    }
    if(N<M){
        printf("NO\n");
        return 0;
    }
    for (int i = 0; i < M; i++) {
        flag=true;
        for (int j = 0; j < N; j++) {
            if(T[i]==D[j]){
                D.erase(D.begin()+j);
                flag=false;
                break;
            }
        }
        if(flag){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
  return 0;
}
