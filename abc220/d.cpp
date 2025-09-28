#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n;
  cin >> n;
  vector<int> vec(n+1);
  for(int i=0;i<n;i++){
    cin >> vec[i];
  }
  int ary[n+1][10];
  memset(ary,0x00,sizeof(ary));
  ary[0][vec[0]] = 1;
  for(int i=1;i<n;i++){
    for(int j=0;j<10;j++){
      int f = ( j + vec[i] ) % 10 ;
      int g = ( j * vec[i] ) % 10 ;
      ary[i][f] += ary[i-1][j];
      ary[i][f] = ary[i][f] % 998244353 ;
      ary[i][g] += ary[i-1][j];
      ary[i][g] = ary[i][g] % 998244353 ;
    }
    //
#ifdef DEBUG
    for(int j=0;j<10;j++){
      printf("%d,",ary[i][j]);
    }
    printf("\n");
#endif
  }
  //
  for(int j=0;j<10;j++){
    cout << ary[n-1][j] << endl;
  }
  return 0;
}
