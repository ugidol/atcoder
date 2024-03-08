#include <bits/stdc++.h>
using namespace std;
int main(void){
  char S1,S2,T1,T2;
  cin >> S1 >> S2 >> T1 >> T2;
  int a = min(abs(S1-S2),5-abs(S1-S2));
  int b = min(abs(T1-T2),5-abs(T1-T2));
  string ans = "No";
  if ( a == b ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
