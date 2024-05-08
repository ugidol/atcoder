#include <bits/stdc++.h>
using namespace std;
#ifdef DEBUG
void debug(map<int,vector<int>> &mp){
	for(auto itr:mp){
		int i = itr.first;
		vector<int> &vec = itr.second;
		fprintf(stderr,"%d=",i);
		for(auto v:vec){
			fprintf(stderr,"%d,",v);
		}
		fprintf(stderr,"\n");
  }
}
#endif
int main(void){
	int N;
	cin >> N;
	vector<vector<char>> g(N,vector<char>(N,' '));
	map<int,vector<int>> rows;
	map<int,vector<int>> cols;
	for(int i=0;i<N;i++){
		for(int j=0;j<N;++j){
			char c;
			cin >> c;
			g[i][j] = c;
			if ( c == 'o' ) {
				rows[i].push_back(j);
				cols[j].push_back(i);
			}
		}
	}
#ifdef DEBUG
	debug(rows);
	debug(cols);
#endif
	//
	long ans = 0;
	for(int i=0;i<N;++i){
		for(int j=0;j<N;++j){
			char c = g[i][j];
			if ( c != 'o' ) {
				continue;
			}
			ans += (rows[i].size() -1 ) * (cols[j].size() - 1 ) ;

			// log(N)=10なので、
			// 4回二分探索をすると40なので、
			// N=2*10^3のときに160,000,000 > 10^8 なので、
			// TLEになる...
			/*
			auto cl = lower_bound(rows[i].begin(),rows[i].end(),j);
			auto cu = upper_bound(rows[i].begin(),rows[i].end(),j);
			auto rl = lower_bound(cols[j].begin(),cols[j].end(),i);
			auto ru = upper_bound(cols[j].begin(),cols[j].end(),i);

			array<int,4> ary;
			ary[0] = distance(rows[i].begin(),cl) * distance(cols[j].begin(),rl);
			ary[1] = distance(rows[i].begin(),cl) * distance(ru,cols[j].end());
			ary[2] = distance(cu,rows[i].end()) * distance(cols[j].begin(),rl);
			ary[3] = distance(cu,rows[i].end()) * distance(ru,cols[j].end());
#ifdef DEBUG
			fprintf(stderr,"{%d,%d}={%d,%d,%d,%d}\n",i,j,ary[0],ary[1],ary[2],ary[3]);
#endif
			for(auto a:ary){
				ans += a;
			}
			*/
		}
	}
	cout << ans << endl;
  return 0;
}
