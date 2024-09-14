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
	string s;
  for(int i=0;i<(int)vec.size();i++){
		s += format("%d,",vec[i]);
  }
	cerr << s << endl;
}
#endif

int main(void){
	int N;
	cin >> N;
	vector<vector<int>> A(N,vector<int>(N));
	for(int i=0;i<N;i++){
		for(int j=0;j<=i;j++){
			cin >> A[i][j] ;
			A[j][i] = A[i][j];
		}
	}
#ifdef DEBUG
	for(int i=0;i<N;i++){
		debug(A[i]);
	}
#endif
	int i=0;
	for(int j=0;j<N;j++){
		i = A[i][j] - 1 ;
	}
	cout << (i+1) << endl;
	return 0;
}
