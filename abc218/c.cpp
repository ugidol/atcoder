#include <bits/stdc++.h>
using namespace std;

typedef struct _mydata {
  int n;
  char m[200][200];
} mydata ;

void dump(mydata &data){
  int n = data.n;
  for(int i=0;i<n;i++){
    string s(data.m[i],n);
    cout << i << ":" << s << endl;
  }
  return ;
}

int count_all(mydata &data){
  int cnt = 0;
  int n = data.n ;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if ( data.m[i][j] == '#' ) {
        cnt += 1;
      }
    }
  }
  return cnt ;
}

int count_row(mydata &data, int row){
  int cnt = 0;
  int n = data.n ;
  for(int j=0;j<n;j++){
    if ( data.m[row][j] == '#' ) {
      cnt += 1 ;
    }
  }
  return cnt ;
}
int count_col(mydata &data, int col){
  int cnt = 0;
  int n = data.n;
  for(int i=0;i<n;i++){
    if ( data.m[i][col] == '#' ) {
      cnt += 1 ;
    }
  }
  return cnt ;
}

void copy_row(mydata &dest, int destrow, mydata &src, int srcrow){
  int n = src.n;
  for(int j=0;j<n;j++){
    dest.m[destrow][j] = src.m[srcrow][j];
  }
  return ;
}

void to_top(mydata &data){
  int n = data.n;
  mydata tmp;
  tmp.n = n;
  memset(tmp.m,'.',sizeof(tmp.m));
  bool first = true ;
  int idx = 0;
  for(int i=0;i<n;i++){
    int cnt = count_row(data,i);
    if ( cnt != 0 || first == false ) {
      first = false;
      copy_row(tmp,idx++, data, i);
    }
  }
  //
  memcpy(&data, &tmp, sizeof(mydata));
  return ;
}

void copy_col(mydata &dest, int destcol, mydata &src, int srccol){
  int n = src.n;
  for(int i=0;i<n;i++){
    dest.m[i][destcol] = src.m[i][srccol];
  }
  return ;
}

void to_left(mydata &data){
  int n = data.n;
  mydata tmp;
  tmp.n = n;
  memset(tmp.m,'.',sizeof(tmp.m));
  bool first = true ;
  int idx = 0;
  for(int j=0;j<n;j++){
    int cnt = count_col(data,j);
    if ( cnt != 0 || first == false ) {
      first = false;
      copy_col(tmp,idx++, data, j);
    }
  }
  //
  memcpy(&data, &tmp, sizeof(mydata));
  return ;
}

void rotate(mydata &data){
  int n = data.n;
  mydata tmp;
  tmp.n = n;
  memset(tmp.m,'.',sizeof(tmp.m));
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      tmp.m[j][ ( tmp.n - 1 - i ) ] = data.m[i][j];
    }
  }
  //
  memcpy(&data, &tmp, sizeof(mydata));
  return ;
}

string compare(mydata &a, mydata &b){
  bool ans = true;
  int n = a.n ;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if ( a.m[i][j] != b.m[i][j]){
        ans = false;
        break;
      }
    }
  }
  if ( ans ) {
    return "Yes";
  }
  else {
    return "No";
  }
}

int main(void){
  int n ;
  cin >> n ;
  mydata s ;
  s.n = n ;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> s.m[i][j];
    }
  }
  mydata t;
  t.n = n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      cin >> t.m[i][j];
    }
  }
  //
  to_top(t);
  to_left(t);
  string ans = "No";
  for(int i=0;i<4;i++){
    to_top(s);
    to_left(s);
    //
    ans = compare(s, t);
    if ( ans == "Yes" ) {
      break;
    }
    rotate(s);
  }
  cout << ans << endl;
  return 0;
}
