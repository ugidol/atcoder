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
void debug(vector<vector<long>> &vec){
	for(int i=0;i<(int)vec.size();i++){
		std::stringstream ss;
		for(int j=0;j<(int)vec[i].size();j++){
			ss << format("%ld,",vec[i][j]);
		}
		cerr << ss.str() << endl;
	}
}
#endif

pair<int,int> read(){
		int a,b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		if ( a > b ) {
			swap(a,b);
		}
		return make_pair(a,b);
}
int main(void){
	int N;
	cin >> N;
	int G;
	cin >> G;
	vector<vector<bool>> g1(N,vector<bool>(N));
	for(int i=0;i<G;i++){
		pair<int,int> p = read();
		int a = p.first;
		int b = p.second;
		g1[a][b] = true;
		g1[b][a] = g1[a][b];
	}
	int H;
	cin >> H;
	vector<vector<bool>> g2(N,vector<bool>(N));
	for(int i=0;i<H;i++){
		pair<int,int> p = read();
		int a = p.first;
		int b = p.second;
		g2[a][b] = true;
		g2[b][a] = g2[a][b];
	}
	vector<vector<int>> A(N,vector<int>(N));
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			int a;
			cin >> a;
			A[i][j] = a;
			A[j][i] = A[i][j];
		}
	}
	function<long(vector<int>&)> f = [&](vector<int>& vec){
		long v = 0;
		for(int i=0;i<N-1;i++){
			for(int j=i+1;j<N;j++){
				int a = vec[i];
				int b = vec[j];
				if ( g1[i][j] != g2[a][b] ) {
					v += A[a][b];
				}
			}
		}
		return v;
	};
	vector<int> vec(N);
	for(int i=0;i<N;i++){
		vec[i] = i;
	}
	long ans = LONG_MAX;
	do {
		long tmp = f(vec);
#ifdef DEBUG
		fprintf(stderr,"tmp=%ld\n",tmp);
#endif
		ans = min(ans,tmp);
	}while(next_permutation(vec.begin(), vec.end()));
	cout << ans << endl;

	return 0;
}
