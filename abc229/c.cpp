#include <bits/stdc++.h>
using namespace std;

typedef struct _mydata {
  unsigned long long int a;
  unsigned long long int b;
} mydata ;

int main(void){
  int n,w;
  cin >> n >> w ;
  vector<mydata> vec(n);
  for(int i=0;i<n;i++){
    mydata obj;
    cin >> obj.a >> obj.b ;
    vec[i] = obj;
  }
  //
  unsigned long long int value = 0 ;
  unsigned long long int weight = w ;
  sort(vec.begin(), vec.end(), [](const mydata &left, const mydata &right){return left.a > right.a;});
  for(int i=0;i<n;i++){
    if ( weight >= vec[i].b ) {
      weight -= vec[i].b ;
      value += ( vec[i].a * vec[i].b );
      continue;
    }
    else if ( weight > 0 ) {
      value += ( vec[i].a * weight ) ;
      weight -= weight ;
      continue;
    }
    else {
      break;
    }
  }
  //
  cout << value << endl;
  return 0;
}
