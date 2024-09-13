#include <bits/stdc++.h>
using namespace std;
int main(void){
	int A,B;
	cin >> A >> B ;
	if ( A > B ) {
		swap(A,B);
	}
	int x = ( B - A ) ;
	set<int> st ;
	st.insert( A - x ) ;
	if ( x % 2 == 0 ) {
		st.insert( A + ( x / 2 ) );
	}
	st.insert( B + x ) ;
#ifdef DEBUG
	for(auto itr:st){
		cout << itr << endl;
	}
#endif
	cout << st.size() << endl;
  return 0;
}
