#include <bits/stdc++.h>
using namespace std;

int main(void){
	int N;
	cin >> N;
	vector<int> pigeon(N+1,0);
	iota(pigeon.begin(),  pigeon.end(),0);
	vector<int> nest(N+1,0);
	iota(nest.begin(), nest.end(),0);

	function<int(int)> f = [&](int v){
		int idx = v;
		while(nest[idx]!=v){
			idx = nest[idx];
		}
		return idx;
	};
	vector<int> ans;
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		int op;
		cin >> op;
		switch(op){
			case 1:
				{
					int a,b;
					cin >> a >> b;
					int bb = f(b);
					pigeon[a] = bb;
				}
				break;
			case 2:
				{
					int a,b;
					cin >> a >> b;
					int aa = f(a);
					int bb = f(b);
					swap(nest[aa],nest[bb]);
				}
				break;
			case 3:
				{
					int a;
					cin >> a;
					ans.push_back(nest[ pigeon[a] ]);
				}
				break;
		}
	}
	for(auto itr:ans){
		cout << itr << endl;
	}
	return 0;
}
