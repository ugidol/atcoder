#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  set<string> st;
  for(int i=0;i<(int)S.size();i++){
    for(int j=i;j<(int)S.size();j++){
      string s;
      for(int k=i;k<=j;k++){
        s.push_back(S[k]);
      }
      st.insert(s);
    }
  }
  cout << st.size() << endl;
  return 0;
}
