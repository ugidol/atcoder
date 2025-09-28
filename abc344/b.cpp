#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N = 0;
  vector<int> A(100);
  for(int i=0;i<100;i++){
    int a;
    cin >> a;
    A[i] = a;
    if ( a == 0 ) {
      N = i;
      break;
    }
  }
  vector<int> ans;
  for(int i=0;i<=N;i++){
    ans.push_back(A[N-i]);
  }
  for(auto itr:ans){
    cout << itr << endl;
  }
  return 0;
}
