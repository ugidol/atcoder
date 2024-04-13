#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<char,set<int>> mp;
  for(int i=0;i<(int)S.size();i++){
    char upper = toupper(S[i]);
    mp[upper].insert(i);
  }
  vector<char> T(3);
  cin >> T[0] >> T[1] >> T[2] ;
  string ans = "No";
  if ( mp[ T[0] ].size() == 0 ) {
    cout << ans << endl;
    return 0;
  }
  else {
    int idx1 = *mp[ T[0] ].begin();
    if ( mp[ T[1] ].size() == 0 ) {
      cout << ans << endl;
      return 0;
    }
    else {
      auto idx2 = mp[ T[1] ].upper_bound(idx1);
      if( idx2 == mp[ T[1] ].end() ) {
        cout << ans << endl;
        return 0;
      }
      else {
        if ( T[2] == 'X' ) {
          cout << "Yes" << endl;
          return 0;
        }
        else {
          if ( mp[ T[2] ].size() == 0 ) {
            cout << ans << endl;
            return 0;
          }
          else {
            auto idx3 = mp[ T[2] ].upper_bound(*idx2);
            if ( idx3 == mp[ T[2] ].end() ) {
              cout << ans << endl;
              return 0;
            }
            else {
              cout << "Yes" << endl;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}
