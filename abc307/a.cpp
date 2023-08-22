#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<7*N;i++){
    int a;
    cin >> a;
    A[i/7] += a;
  }
  for(auto itr : A ) {
    cout << itr << ' ' ;
  }
  cout << endl;
  return 0;
}
