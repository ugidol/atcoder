#include <bits/stdc++.h>
using namespace std;

int main(void){
  map<string,int> mp; 
  mp.insert(make_pair("H",0));
  mp.insert(make_pair("2B",0));
  mp.insert(make_pair("3B",0));
  mp.insert(make_pair("HR",0));
  for(int i=0;i<4;i++){
    string s;
    cin >> s ;
    mp.at(s) += 1;
  }
  if ( mp.at("H") == 1 && 
    mp.at("2B") == 1 && 
    mp.at("3B") == 1 && 
    mp.at("HR") == 1 
    ){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }
  return 0;
}
