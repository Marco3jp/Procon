#include <bits/stdc++.h>
#define ll long long
#define all(a) (a).begin(),(a).end()

using namespace std;
bool cant_cut_sentence(std::vector<int> s_num,int A);
void huriwake_oyakata(std::vector<int> &s_num,int A);

int main(int argc, char const *argv[]) {
  int A;
  string S;
  std::cin >> A >> S;
  std::vector<int> s_num(S.size());
  for (size_t i = 0; i < S.size(); i++) {
    s_num[i]=S[i]-96;
    printf("%c-%d\n",s_num[i]+96,s_num[i]);
  }

  while (1) {
    if(cant_cut_sentence(s_num,A)){
      break;
    }
    huriwake_oyakata(s_num,A);
  }

  for (size_t i = 0; i < s_num.size(); i++) {
    printf("%c",s_num[i]+96);
  }
  printf("\n");
  for (size_t i = 0; i < s_num.size(); i++) {
    printf("%d_",s_num[i]+96);
  }
  printf("\n");
  return 0;
}


bool cant_cut_sentence(std::vector<int> s_num,int A){
  ll last_num=pow(A,s_num.size())*s_num[s_num.size()-1];
  ll all_blank=0;
  for (size_t i = 0; i < s_num.size()-1; i++) {
    all_blank+=pow(A,i)*(26-s_num[i]);
  }
  if(all_blank>=last_num){
    return false;
  }else{
    return true;
  }
}

void huriwake_oyakata(std::vector<int> &s_num,int A){
  ll last_num=pow(A,s_num.size())*s_num[s_num.size()-1];
  ll this_blank;
  for (size_t i = 0; i < s_num.size()-1; ++i) {
    this_blank=pow(A,i)*(26-s_num[i]);
    if(last_num>=this_blank){
      last_num-=this_blank;
      s_num[i]+=this_blank/pow(A,i);
    }else if(ceil(last_num/pow(A,i))-(double)last_num/pow(A,i)==0){
      s_num[i]+=last_num/pow(A,i);
      last_num=0;
    }
    if(last_num==0){
      s_num.pop_back();
      break;
    }
  }
}
