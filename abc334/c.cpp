#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,K;
  cin >> N >> K;
  vector<int> A(N,2);
  for(int i=0;i<K;i++){
    int a;
    cin >> a;
    a--;
    A[a] -= 1;
  }
  vector<int> B;
  for(int i=0;i<(int)A.size();i++){
    for(int j=0;j<A[i];j++){
      B.push_back(i);
    }
  }
  int ans = 0;
  if ( K % 2 == 0 ) {
    for(int i=0;i<(int)B.size()/2;i++){
      ans += B[i*2+1] - B[i*2+0];
    }
  }
  else {
    ans = INT_MAX;
    int mx = 0;
    for(int i=0;i<=(int)B.size()/2;i++){
      mx += B[i*2+2] - B[i*2+1] ;
    }
    for(int i=1;i<=(int)B.size()/2;i++){
      mx -= B[i*2] - B[i*2-1] ;
      mx += B[i*2-1] - B[i*2-2];
      ans = min(ans,mx);
    }
  }
  cout << ans << endl;
  return 0;
}
