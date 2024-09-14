#include <iostream>
#include <vector>
#include <sstream>
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
	for(int i=0;i<(int)vec.size();i++){
		ss << format("%d,",vec[i]);
	}
	cerr << ss.str() << endl;
}
#endif

int main(void){
	int N;
	cin >> N;
	vector<vector<int>> A(N,vector<int>(N));
	for(int col=0;col<N;col++){
		for(int row=0;row<=col;row++){
			cin >> A[col][row] ;
			A[col][row] -= 1; // 0-based にする
			A[row][col] = A[col][row]; // 対称行列の値
		}
	}
#ifdef DEBUG
	for(int i=0;i<N;i++){
		debug(A[i]);
	}
#endif
	// solve problem
	int current=0;
	for(int next=0;next<N;next++){
		current = A[current][next] ;
	}
	cout << (current+1) << endl;
	return 0;
}
