#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  string ans ;
  stack<int> stk;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == ')' && ! stk.empty() ) {
      int pos = stk.top();
      stk.pop();

      ans.resize(pos);

    }
    else {
      ans += c ;
      if ( c == '(' ) {
        stk.push(ans.size()-1);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
