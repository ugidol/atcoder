#include <bits/stdc++.h>
using namespace std;
int main(void){
  string s;
  cin >> s ;
  set<string> st;
  for(size_t i=0;i<=s.size()-1;i++){
    const char* buff = s.c_str();
    char a[1001];
    memset(a,0x00,sizeof(a));
    memcpy(a                ,buff + i, s.size() - i );
    memcpy(a + s.size() - i ,buff    , i            );
    string s2(a,s.size());
    st.insert(s2);
  }
  //
  auto it = st.begin();
  cout << *it << endl;
  it = st.end();
  it--;
  cout << *it << endl;
  return 0;
}
