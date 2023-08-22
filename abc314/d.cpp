#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  //
  string S;
  cin >> S;
  //
  int Q;
  cin >> Q ;
  //
  string T(S);
  vector<int> org(N);
  int lower = 0;
  int upper = 0;
  for(int i=0;i<Q;i++){
    int t,x;
    char c;
    cin >> t >> x >> c;
    switch(t){
      case 1:
        S[x-1] = c;
        org[x-1] = i+1;
        break;
      case 2:
        lower = i+1;
        break;
      case 3:
        upper = i+1;
        break;
    }
  }
  for(int i=0;i<N;i++){
    if ( lower > upper && lower > org[i] ) {
      T[i] = tolower(S[i]);
    }
    else if ( upper > lower && upper > org[i] ) {
      T[i] = toupper(S[i]);
    }
    else {
      T[i] = S[i];
    }
  }
  cout << T << endl;
  return 0;
}

