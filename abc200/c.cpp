#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> vec(200);
  long ans = 0;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    ans += vec[a%200];
    vec[a%200] += 1;
  }
  cout << ans << endl;
  return 0;
}
