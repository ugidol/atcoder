#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M ;
  vector<string> vec;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    vec.push_back(s);
  }
  //
  map<string,int> mp;
  for(int i=0;i<M;i++){
    string s;
    cin >> s ;
    mp[s] = 1;
  }
  //
  for(int i=0;i<N;i++){
    string &s = vec[i];
    if ( mp[s] > 0 ) {
      cout << "Yes" << endl;
    }
    else {
      cout << "No" << endl;
    }
  }
  //
  return 0;
}
