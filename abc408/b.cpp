#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	set<int> A;
	for(int i=0;i<N;i++){
		int a;
		cin >> a;
		A.insert(a);
	}
	cout << A.size() << endl;
	for(auto itr : A){
		cout << itr << ' ';
	}
	cout << endl;
	return 0;
}
