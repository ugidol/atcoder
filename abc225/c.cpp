#include <bits/stdc++.h>
using namespace std;

int main(void){
  int n, m ;
  cin >> n >> m ;
  string ans = "Yes";
  vector<vector<int>> rows(n);
  for(int i=0;i<n;i++){
    vector<int> cols(m);
    for(int j=0;j<m;j++){
      cin >> cols[j] ;
    }
    for(int j=0;j<m;j++){
      if ( cols[j] % 7 == 0 && j != ( m - 1 ) ) {
        ans = "No";
        goto end_loop;
      }
    }
    for(int j=1;j<m;j++){
      if ( ( cols[j-1] + 1 ) != cols[j] ) {
        ans = "No";
        goto end_loop;
      }
    }
    rows[i] = cols;
  }
  for(int i=1;i<n;i++){
    if ( ( rows[i-1][0] + 7 ) != rows[i][0] ) {
      ans = "No";
      goto end_loop;
    }
  }
end_loop:
  cout << ans << endl;
}
