#include <bits/stdc++.h>
using namespace std;
typedef struct _mydata {
  int a;
  int b;
} mydata ;
int main(void){
  int n ;
  cin >> n;
  map<int,int> mp ;
  for(int i=0;i<(n-1);i++){
    int a, b;
    cin >> a >> b ;
    mp[a] += 1 ;
    mp[b] += 1 ;
  }
  string ans = "No";
  for(const auto& [key,value]: mp){
    if ( ( n - 1 ) == value ) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
