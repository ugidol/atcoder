#include <bits/stdc++.h>
using namespace std;
int main(void){
  map<char,int> mp;
  mp['A'] =  0;
  mp['B'] =  3;
  mp['C'] =  4;
  mp['D'] =  8;
  mp['E'] =  9;
  mp['F'] = 14;
  mp['G'] = 23;
  char p,q;
  cin >> p >> q ;
  int ans = abs(mp[p]-mp[q]);
  cout << ans << endl;
  return 0;
}
