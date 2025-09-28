#include <bits/stdc++.h>
using namespace std;


#ifdef DEBUG
template <typename ... Args>
std::string format(const std::string& fmt, Args ... args){
	size_t len = std::snprintf(nullptr,0,fmt.c_str(), args ... );
	std::vector<char> buff(len+1);
	std::snprintf(&buff[0], len+1, fmt.c_str(), args ... );
	return std::string(&buff[0], &buff[0]+len);
}
void debug(vector<int> &vec){
	std::stringstream ss;
	for(auto &v:vec){
		ss << format("%4ld,",v);
	}
	cerr << ss.str() << endl;
}
#endif


int main(void){
	int N,M;
	cin >> N >> M;
	vector<vector<int>> K(M,vector<int>());
	for(int i=0;i<M;i++){
		int k;
		cin >> k;
		K[i].resize(k);
		for(int j=0;j<k;j++){
			cin >> K[i][j] ;
		}
	}
	map<int,int> mp;
	for(int i=0;i<N;i++){
		int b;
		cin >> b;
		mp[b] = i+1;
#ifdef DEBUG
		fprintf(stderr,"[%d]=%d\n",b, i+1);
#endif
	}
	//
	vector<int> vec;
	for(int i=0;i<M;i++){
		int c = 0;
		for(int k=0;k<K[i].size();k++){
			c = std::max(c,mp[ K[i][k] ]);
		}
#ifdef DEBUG
		fprintf(stderr,"%d,%d\n",i,c);
#endif
		vec.push_back(c);
	}
	sort(vec.begin(), vec.end());
	for(int i=1;i<=N;i++){
		auto pos = upper_bound(vec.begin(), vec.end(),i);
		int ans = distance(vec.begin(), pos);
		cout << ans << endl;
	}
	return 0;
}
