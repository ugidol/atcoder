#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<int,int> mp;
  for(int i=0;i<N;i++){
    int P;
    cin >> P;
    mp[P] = i;
  }
  int Q;
  cin >> Q;
  struct C{
    int A;
    int B;
  } ;
  vector<C> vec(Q);
  for(int i=0;i<Q;i++){
    cin >> vec[i].A >> vec[i].B ;
  }
  //
  for(int i=0;i<Q;i++){
    int ans = vec[i].A;
    if ( mp[ vec[i].A ] > mp[ vec[i].B ] ) {
      ans = vec[i].B;
    }
    cout << ans << endl;
  }
  return 0;
}
