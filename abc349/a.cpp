#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int ans = 0;
  for(int i=0;i<N-1;i++){
    int a;
    cin >> a;
    ans -= a;
  }
  cout << ans << endl;


  return 0;
}
