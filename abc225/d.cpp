#include <bits/stdc++.h>
using namespace std;

typedef struct _train {
  int number ;
  struct _train *prev ;
  struct _train *next ;
} train ;

void func(train &tr){
  train *ptr = &tr;
  while ( ptr->prev != NULL ) {
    ptr = ptr->prev ;
  }
  //
  vector<int> vec(0) ;
  while ( ptr != NULL ) {
    vec.push_back(ptr->number);
    ptr = ptr->next ;
  }
  cout << vec.size() << " ";
  for(size_t i=0;i<vec.size();i++){
    cout << vec[i] << " " ;
  }
  cout << endl;
}

int main(void){
  int n , q ;
  cin >> n >> q ;
  vector<train> vec(n+1);
  for(int i=0;i<n;i++){
    train tr = {0, 0, 0};
    tr.number = i + 1 ;
    vec[i+1] = tr;
  }
  for(int i=0;i<q;i++){
    int type ;
    cin >> type ;
    switch(type){
      case 1:
      {
        int x, y;
        cin >> x >> y ;
        vec[x].next = &vec[y];
        vec[y].prev = &vec[x];
      }
      break;
      case 2:
      {
        int x, y;
        cin >> x >> y ;
        vec[x].next = NULL;
        vec[y].prev = NULL ;
      }
      break;
      case 3:
      {
        int x;
        cin >> x ;
        func(vec[x]);
      }
      break;
    }
  }
  return 0;
}
