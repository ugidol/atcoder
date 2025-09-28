#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n, m;
  cin >> n >> m;
  if ( m >= n ) {
    cout << "No" << endl;
    return 0;
  }
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b ;
    pair<int,int> p = make_pair(a,b);
  }
  //
  cout << "Yes" << endl;
  return 0;
}
