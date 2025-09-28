#include <bits/stdc++.h>
using namespace std;

int main(void){
  vector<string> vec(3);
  for(int i=0;i<3;i++){
    cin >> vec[i] ;
  }
  string t ;
  cin >> t ;
  for(auto c : t ) {
    cout << vec[ (c - '0')-1 ] ;
  }
  cout << endl ;
  return 0;
}

void func(void){
  int v = stoi("10");
  long v = stol("10");
  long long v = stoll("10");
}
