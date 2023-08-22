#include <bits/stdc++.h>
using namespace std;
int main(void){
  int M;
  cin >> M;
  vector<int> D;
  vector<int> D2;
  int sum = 0;
  for(int i=0;i<M;i++){
    int d;
    cin >> d;
    sum += d;
    for(int j=0;j<d;j++){
      D.push_back(i+1);
      D2.push_back(j+1);
    }
  }
  int mid = sum / 2 ;
  cout << D[mid] << ' ' << D2[mid] << endl;
  return 0;
}
