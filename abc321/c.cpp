#include <bits/stdc++.h>
using namespace std;
int main(void){
  int K;
  cin >> K;
  vector<long long> vec;
  vector<vector<vector<long long>>> dp(11,vector<vector<long long>>(10));
  for(int i=0;i<10;i++){
    dp[1][i].push_back(i);
    vec.push_back(i);
  }
  for(int i=2;i<=10;i++){
    for(int j=1;j<=9;j++){
      for(auto itr:dp[i][j-1]){
        long long v = itr + pow(10,i-1);
        dp[i][j].push_back( v );
        vec.push_back(v);
      }
      for(auto itr:dp[i-1][j-1]){
        long long v = j * pow(10,i-1)+itr ;
        dp[i][j].push_back( v );
        vec.push_back(v);
      }
    }
  }
  cout << vec[K] << endl;
  return 0;
}
