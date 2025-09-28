#include <bits/stdc++.h>
using namespace std;

bool func(const pair<string,int> &left, const pair<string,int> &right){
  return ( left.second > right.second );
}

int main(void){
  int n ;
  cin >> n;
  vector<pair<string,int>> vec(n);
  for(int i=0;i<n;i++){
    string s;
    int t;
    cin >> s >> t;
    pair<string,int> p = make_pair(s,t);
    vec[i] = p;
  }
  sort(vec.begin(), vec.end(), func );
  string ans = vec[1].first;
  cout << ans << endl;
  return 0;
}
