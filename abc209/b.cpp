#include <bits/stdc++.h>
using namespace std ;

int main(void){
  int n ;
  cin >> n ;
  int x ;
  cin >> x ;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
  }
  for(int i=0;i<n;i++){
    x -=  ( vec[i] - ( i % 2 )  ) ;
  }
  string ans = "Yes";
  if ( x < 0 ) {
    ans = "No";
  }
  cout << ans << endl; 
  return 0;
}
