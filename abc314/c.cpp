#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
void debug(vector<int> &vec){
  for(int i=0;i<(int)vec.size();i++){
    fprintf(stderr,"%d,",vec[i]);
  }
  fprintf(stderr,"\n");
}
#endif
int main(void){
	int N,M;
	cin >> N >> M;
	string S;
	cin >> S;
	map<int,vector<int>> mp;
	for(int i=0;i<N;i++){
		int c;
		cin >> c;
		c -= 1;
		mp[c].push_back(i);
	}
	//
	vector<int> vec(N);
	for(int i=0;i<N;i++){
		vec[i] = i;
	}
	//
	string ans(N,' ');
	for(int c=0;c<M;c++){
		vector<int> v = mp[c];
		int k = (int)v.size();
		for(int j=0;j<k;j++){
			int from = v[j];
			int to   = v[(j+1)%k];
			ans[to] = S[from];
		}
	}
	cout << ans << endl;
  return 0;
}
