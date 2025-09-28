#include <bits/stdc++.h>
using namespace std;

int main(){
  int n ;
  cin >> n ;
  vector<int> array(n) ;
  for(int i=1;i<=n;i++){
    int value ;
    cin >> value ;
    array[value-1] = i ;
  }
  for(const auto&e : array ){
    cout << e << ' ' ;
  }
  cout << endl;
  
  return 0;
}
