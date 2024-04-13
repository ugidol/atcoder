#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  map<char,int> mp;
  for(char c:S){
    mp[c] += 1;
  }
  vector<int> vec(101);
  for(auto itr:mp){
    int num = itr.second;
    vec[num] += 1;
  }
  bool good = true;
  for(int i=0;i<=100;i++){
    if ( vec[i] != 0 && vec[i] != 2 ) {
      good = false;
      break;
    }
  }
  if ( good ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
