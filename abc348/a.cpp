#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<char> ans(N,'o');
  for(int i=0;i<N;i++){
    if ((i+1)%3==0){
      ans[i] = 'x';
    }
  }
  for(auto itr:ans){
    cout << itr;
  }
  cout << endl;

  return 0;
}
