#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n;
  cin >> n;
  map<int,int> mp;
  for(int i=0;i<n;i++){
    int a;
    cin >> a;
    mp[a] += 1;
  }
  //
  string ans = "Yes";
  for(auto it : mp ) {
    if ( it.second > 1 ) {
      ans = "No";
      break;
    }
  }
  cout << ans << endl; 
  return 0;
}
