#include <bits/stdc++.h>
using namespace std;
int main(void){
	int N;
	cin >> N;
	vector<string> vec(N);
	for(int i=0;i<N;i++){
		string s;
		cin >> s;
		vec[i] = s;
	}
	sort(vec.begin(), vec.end(), [](const string left, const string right){
				return left.size() < right.size();
			});
	for(auto itr:vec){
		cout << itr;
	}
	cout << endl;
	return 0;
}
