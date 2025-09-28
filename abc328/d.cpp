
#include <bits/stdc++.h>
using namespace std;
bool chk(deque<char> &deq){
  if ( deq.size() < 3 ) {
    return false;
  }
  string s = "   ";
  auto itr = deq.crbegin();
  for(int i=0;i<3;i++){
    char c = *itr;
    s[2-i] = c;
    itr++;
  }
  if ( s == "ABC" ) {
    return true;
  }
  else {
    return false;
  }
}
int main(void){
  string S;
  cin >> S;
  deque<char> deq;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    deq.push_back(c);
    if ( c == 'C' ) {
      bool b = chk(deq);
      if ( b ) {
        for(int i=0;i<3;i++){
          deq.pop_back();
        }
      }
    }
  }
  string ans = "";
  while( ! deq.empty()){
    ans.push_back(deq.front());
    deq.pop_front();
  }
  cout << ans << endl;
  return 0;
}
