#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<pair<string,int>> vec(N);
  int tmp = 1e9+1;
  int idx = 0;
  for(int i=0;i<N;i++){
    string s;
    cin >> s;
    int a;
    cin >> a;
    pair<string,int> p = make_pair(s,a);
    vec[i] = p;
    if ( a < tmp ) {
      tmp = a;
      idx = i;
    }
  }
  for(int i=0;i<N;i++){
    cout << vec[(idx+i)%N].first << endl;
  }
  return 0;
}
