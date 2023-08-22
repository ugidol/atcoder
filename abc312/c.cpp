#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M ;
  
  int lim = 0;

  multiset<int> A;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    A.insert(a);
    lim = max(lim,a);
  }

  multiset<int> B;
  for(int i=0;i<M;i++){
    int b;
    cin >> b ;
    B.insert(b);
    lim = max(lim,b);
  }

  int left = 1;
  int right = lim+1;
  int ans = right;
  while(abs(left-right)>1){
#ifdef DEBUG
    fprintf(stderr,"l=[%d],r=[%d]\n",left,right);
#endif
    int mid = ( left + right ) / 2 ;
    int a = distance(A.begin(),A.upper_bound(mid)) ;
    int b = distance(B.lower_bound(mid), B.end());
    if ( a < b ) {
      left = mid ;
    }
    else {
      right = mid ;
      ans = min(ans,mid);
    }
  }
  cout << ans << endl;
  return 0;
}
