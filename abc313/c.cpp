#include <bits/stdc++.h>
using namespace std;
using ll =  long long;
int main(void){
  ll N;
  cin >> N;
  ll sum = 0;
  vector<ll> A(N);
  for(auto &itr : A){
    cin >> itr;
    sum += itr;
  }
  sort(A.begin(), A.end());
  ll q = sum / N ;
  ll r = sum % N ;
  vector<ll> B(N,q);
  fill(B.begin() + ( N - r ), B.end(), q + 1 );
  ll S = 0;
  for(int i=0;i<N;i++){
    S += abs(A[i] - B[i]);
  }
  cout << S / 2 << endl;
  return 0;
}
