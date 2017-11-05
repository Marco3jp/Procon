#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;

int main(int argc, char const *argv[]) {
  string O,E;
  std::cin >> O >> E;
  if(O.size()>E.size()){
    for (size_t i = 0; i < E.size(); i++) {
      printf("%c%c",O[i],E[i]);
    }
    printf("%c\n",O[O.size()-1]);
  }else{
    for (size_t i = 0; i < E.size(); i++) {
      printf("%c%c",O[i],E[i]);
    }
    printf("\n");
  }
  return 0;
}
