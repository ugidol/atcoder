#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  vector<string> vec = { "ACE",
  "BDF",
  "CEG",
  "DFA",
  "EGB",
  "FAC",
  "GBD"};
  string ans = "No";
  if ( find(vec.begin(), vec.end(), S) != vec.end() ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
