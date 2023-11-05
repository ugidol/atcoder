#include <bits/stdc++.h>
using namespace std;
vector<long long> vec = {
 1
,4
,27
,256
,3125
,46656
,823543
,16777216
,387420489
,10000000000
,285311670611
,8916100448256
,302875106592253
,11112006825558016
,437893890380859375};
int main(void){
  long long B;
  cin >> B;
  long long ans = -1;
  for(int i=0;i<(int)vec.size();i++){
    if ( B == vec[i] ) {
      ans = i+1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
