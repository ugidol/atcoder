#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> vec(N+1);
  int v = 0;
  for(int i=1;i<=N;i++){
    int a;
    cin >> a;
    if ( a == -1 ) {
      v = i;
    }
    else {
      vec[a] = i;
    }
  }
  do {
    cout << v << ' ';
    v = vec[v];
  }while(v!=0);
  cout << endl;
  return 0;
}
