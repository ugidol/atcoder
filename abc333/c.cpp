#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  set<long> st;
  queue<string> q;
  q.push("3");
  while( ! q.empty() ) {
    string s = q.front();q.pop();
    long v = stol(s);
    st.insert(v);
    for(int i=1;i<=int(s[0]-'0');i++){
      string ss = ( to_string(i) + s );
      if ( ss.size() <= 12 ) {
        q.push(ss);
      }
    }
  }
  //
  vector<long> vec(st.begin(), st.end());
  sort(vec.begin(),vec.end());
  cout << vec[N-1] << endl;
  return 0;
}
