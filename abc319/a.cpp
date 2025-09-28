#include <bits/stdc++.h>
using namespace std;
const vector<vector<string>> vec = {
  {"tourist","3858"},
  {"ksun48","3679"},
  {"Benq","3658"},
  {"Um_nik","3648"},
  {"apiad","3638"},
  {"Stonefeang","3630"},
  {"ecnerwala","3613"},
  {"mnbvmar","3555"},
  {"newbiedmy","3516"},
  {"semiexp","3481"},
};
int main(void){
  string S;
  cin >> S;
  string ans = "";
  for(auto itr:vec){
    if ( itr[0]==S ) {
      ans = itr[1];
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
