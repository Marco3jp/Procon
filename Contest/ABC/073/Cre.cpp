#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

bool not_same(int same_counter){
  if(same_counter%2==0){
    return false;
  }else{
    return true;
  }
}

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  if(N==1){
    printf("1\n");
    return 0;
  }
  std::vector<ll> A(N);
  for (size_t i = 0; i < N; i++) {
    std::cin >> A[i];
  }
  sort(all(A));
  int same_counter=1,counter=0;
  for (size_t i = 1; i < N; i++) {
    if(A[i-1]!=A[i]){
      if(not_same(same_counter)){
        ++counter;
      }
      same_counter=1;
    }else{
      ++same_counter;
    }
  }

  if(A[N-2]==A[N-1]){
    if(not_same(same_counter)){
      ++counter;
    }
  }

  printf("%d\n",counter);
  return 0;
}


/*
メモに数字を入れる


*/
