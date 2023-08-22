#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  int left = -1 ;
  int right = N ;
  for(int i=0;i<20&&(right-left)>0;i++){
    int mid = left + ( right - left ) / 2 ;
    cout << '?' << ' ' << ( mid + 1 ) << endl;
    //
    char c;
    cin >> c ;
    if ( c == '0' ) {
      left = mid ;
    }
    else {
      right = mid;
    }
  }
  cout << '!' << ' ' << ( left + 1 ) << endl;
  return 0;
}
