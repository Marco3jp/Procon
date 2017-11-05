#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  int N;
  scanf("%d",&N);
  int maxID,maxPoint,tempID,tempPoint;
  scanf("%d%d",&maxID,&maxPoint);
  for (size_t i = 1; i < N; i++) {
    scanf("%d%d",&tempID,&tempPoint);
    if(maxID<tempID){
      maxID=tempID;
      maxPoint=tempPoint;
    }
  }
  printf("%d\n",maxID+maxPoint);
  return 0;
}
