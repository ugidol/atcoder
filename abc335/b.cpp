#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  for(int i=0;i<=N;i++){
    for(int j=0;j<=N;j++){
      for(int k=0;k<=N;k++){
        if ( i + j + k <= N ) {
          string s = to_string(i) + " " + to_string(j) + " " + to_string(k) ;
          cout << s << endl;
        }
      }
    }
  }
  return 0;
}
