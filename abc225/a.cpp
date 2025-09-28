#include <bits/stdc++.h>
using namespace std ;

int main(void){
  string s ;
  cin >> s;
  sort(s.begin(), s.end());
  set<string> st;
  for(int i=0;i<3;i++){
    char a = s[i];
    s.erase( s.begin() + i ) ;
    for(int j=0;j<2;j++){
      char b = s[j];
      s.erase( s.begin() + j );
      for(int k=0;k<1;k++){
        char c = s[k];
        char ary[3];
        ary[0] = a ; ary[1] = b; ary[2] = c ;
        string str(ary);
        st.insert(str);
      }
      s.insert(j, 1, b);
    }
    s.insert(i, 1, a);
  }
  cout << st.size() << endl;
  return 0;
}
