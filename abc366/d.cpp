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
void debug(vector<vector<vector<int>>> &v){
	int N = v.size();
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			std::stringstream ss;
			for(int z=0;z<N;z++){
				ss << format("%02d,",v[x][y][z]);
			}
			cerr << ss.str() << endl;
		}
	}
}
#endif
int main(void){
	int N;
	cin >> N;
	vector<vector<vector<int>>> A(N,vector<vector<int>>(N,vector<int>(N)));
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			for(int z=0;z<N;z++){
				cin >> A[x][y][z];
			}
		}
	}
#ifdef DEBUG
	debug(A);
#endif
	vector<vector<vector<int>>> sum(N+1,vector<vector<int>>(N+1,vector<int>(N+1)));
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			for(int z=0;z<N;z++){
				sum[x+1][y+1][z+1] = sum[x+1][y+1][z] + A[x][y][z];
			}
		}
	}
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			for(int z=0;z<N;z++){
				sum[x+1][y+1][z+1] += sum[x+1][y][z+1] ;
			}
		}
	}
	for(int x=0;x<N;x++){
		for(int y=0;y<N;y++){
			for(int z=0;z<N;z++){
				sum[x+1][y+1][z+1] += sum[x][y+1][z+1] ;
			}
		}
	}
#ifdef DEBUG
	debug(sum);
#endif
	function<int(int,int,int,int,int,int)> f1 = [&](int lx, int rx, int ly, int ry, int lz, int rz){
		lx--,rx--,ly--,ry--,lz--,rz--;
		int ret = 0;
		for(int x=lx;x<=rx;++x){
			for(int y=ly;y<=ry;++y){
				for(int z=lz;z<=rz;++z){
					ret += A[x][y][z];
				}
			}
		}
		return ret;
	};
	//
	function<int(int,int,int,int,int,int)> f2 = [&](int lx, int rx, int ly, int ry, int lz, int rz){
		int ret = 0;
		ret = sum[rx][ry][rz] - sum[rx][ry][lz-1] - sum[rx][ly-1][rz] + sum[rx][ly-1][lz-1];
		ret -= sum[lx-1][ry][rz] - sum[lx-1][ry][lz-1] - sum[lx-1][ly-1][rz] + sum[lx-1][ly-1][lz-1];
		return ret;
	};
	int Q;
	cin >> Q;
	for(int i=0;i<Q;i++){
		int lx,rx,ly,ry,lz,rz;
		cin >> lx >> rx >> ly >> ry >> lz >> rz ;
#ifdef DEBUG
		int ans1 = f1(lx,rx,ly,ry,lz,rz);
#endif
		int ans = f2(lx,rx,ly,ry,lz,rz);
		cout << ans << endl;
	}
  return 0;
}
