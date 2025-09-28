#include <bits/stdc++.h>
using namespace std;

int main(){
  int len , commands ;
  cin >> len >> commands ;
  set<int> st ;
  st.insert(0);
  st.insert(len);
  for(int i=0;i<commands;i++){
    int c, x;
    cin >> c >> x ;
    switch(c){
      /*
       * CUT
       */
      case 1:
        {
          st.insert(x);
        }
        break;
      /*
       * SHOW
       */
      case 2:
        {
          auto bnd = st.lower_bound(x);
          cout << *bnd - *prev(bnd) << endl;
        }
        break;
    }
  }
  return 0;
}
