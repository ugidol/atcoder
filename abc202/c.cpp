#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  map<int,vector<int>> B;
  for(int i=0;i<N;i++){
    int b;
    cin >> b;
    B[b].push_back(i+1);
  }
  map<int,int> C;
  for(int i=0;i<N;i++){
    int c;
    cin >> c;
    C[c] += 1;
  }
  map<int,long> cache;
  for(int i=0;i<N;i++){
    for(auto itr : B[i+1]){
      cache[i+1] += C[itr];
    }
  }
  //
  long long ans = 0;
  for(int i=0;i<N;i++){
    int a = A[i];
    ans += cache[a];
  }
  cout << ans << endl;
  return 0;
}
