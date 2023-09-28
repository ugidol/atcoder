#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<vector<int>> matrix(N,vector<int>(26,0));
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    for(auto c:s){
      matrix[i][c-'a'] += 1;
    }
  }
  vector<int> vec(26,0);
  for(char c='a';c<='z';c++){
    int num = INT_MAX;
    for(int i=0;i<N;i++){
      num = min(num, matrix[i][c-'a']);
    }
    vec[c-'a'] = num;
  }
  string ans ;
  for(char c='a';c<='z';c++){
    int num = vec[c-'a'];
    for(int i=0;i<num;i++){
      ans.push_back(c);
    }
  }
  cout << ans << endl;
  return 0;
}
