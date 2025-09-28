
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> D(N);
  int ans = 0;
  for(int i=0;i<N;i++){
    int d;
    cin >> d;
    for(int j=1;j<=d;j++){
      string s = to_string(i+1) + to_string(j);
      set<char> st;
      for(char c:s){
        st.insert(c);
      }
      if ( st.size() == 1 ) {
        ans += 1;
      }
    }
  }
  cout << ans << endl;
  return 0;
}
