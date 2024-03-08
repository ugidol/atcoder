#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  char c = '0' + N ;
  vector<char> vec;
  for(int i=1;i<=N;i++){
    vec.push_back(c);
  }
  for(auto itr:vec){
    cout << itr ;
  }
  cout << endl;
  return 0;
}
