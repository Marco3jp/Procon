#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char const *argv[]) {
  int n=0,memo=0,x=399,count=0,temp=0;
  std::cin >> n;
  std::vector<int> rate(n);
  for (int i = 0; i <= n-1; i++) {
    std::cin >> rate[i];
  }
  std::sort(rate.begin(),rate.end());
  for (int i = 0; i < n; i++) {
    if(rate[i]<memo){
      continue;
    }
    for(size_t j = i; rate[j]>=x;) {
      memo=x;
      x+=400;
    }
    if(rate[i]>=3200){
      temp=n-i;
      break;
    }
    if (rate[i]<x) {
      count++;
      memo=x;
      x+=400;
    }
  }

  if(count!=0){
    if((count+temp)<=8){
      std::cout << count << " " << count+temp <<'\n';
    }else{
      std::cout << count << " 8" << '\n';
    }
  }else{
    if(temp>=8){
      std::cout << "0" << " 8" <<'\n';
    }else{
      std::cout << "0" << " " << temp << '\n';
    }
  }

  return 0;
}
