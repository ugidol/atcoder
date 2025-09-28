#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long int n;
  cin >> n;
  string ans = "Yes";
  if ( n >= 2 && n <= 4 ) {
    ans = "No";
  }
  cout << ans << endl;
  return 0;
}
