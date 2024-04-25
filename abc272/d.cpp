#include <bits/stdc++.h>
using namespace std;

struct Point {
  int x,y;
  Point():x(0),y(0){};
  Point(int a, int b){
    x = a;
    y = b;
  }
  Point(const Point& p){
    x = p.x;
    y = p.y;
  }
  Point& operator=(const Point& r){
    x = r.x;
    y = r.y;
    return *this;
  };
  Point& operator+=(const Point& r){
    x += r.x;
    y += r.y;
    return *this;
  };
};

std::ostream& operator<<(std::ostream& os, const Point& p){
  os << '{' << p.x << ',' << p.y << '}' ;
  return os;
}
bool operator <  (const Point& l, const Point& r){ return ( l.x < r.x ) && ( l.y < r.y ) ; } ;
bool operator >  (const Point& l, const Point& r){ return ( l.x > r.x ) && ( l.y > r.y ) ; } ;
bool operator <= (const Point& l, const Point& r){ return ( l.x <= r.x ) && ( l.y <= r.y ) ; } ;
bool operator >= (const Point& l, const Point& r){ return ( l.x >= r.x ) && ( l.y >= r.y ) ; } ;
bool operator == (const Point &l, const Point& r){ return ( l.x == r.x && l.y == r.y ) ; }
bool operator != (const Point &l, const Point& r){ return ( ! ( l == r ) ) ; }
Point operator+(const Point& l, const Point& r) { 
  Point ret(l);
  ret += r;
  return ret;
};

int main(void){
	int N;
	cin >> N;
	vector<vector<int>> visited(N,vector<int>(N,-1));
	int M;
	cin >> M;
	vector<Point> vec;
	for(int i=0;i*i<=M;i++){
		for(int j=0;j*j<=M;j++){
			if ( (i*i)+(j*j)==M ) {
				vec.push_back({i,j});
				vec.push_back({-i,j});
				vec.push_back({i,-j});
				vec.push_back({-i,-j});
			}
		}
	}
#ifdef DEBUG
	for(auto itr:vec){
		cout << itr << endl;
	}
#endif
	function<void(void)> bfs = [&](void){
		queue<Point> que ;
		visited[0][0] = 0;
		que.push({0,0});
		while( ! que.empty() ) {
			Point p = que.front();que.pop();
			for(auto v:vec){
				Point pp = p + v;
				if ( ! ( pp >= Point(0,0) && pp < Point(N,N) ) ) {
					continue;
				}
				if ( visited[pp.x][pp.y] != -1 ) {
					continue;
				}
				visited[pp.x][pp.y] = visited[p.x][p.y] + 1;
				que.push(pp);
			}
		}
	};
	bfs();
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			fprintf(stdout,"%d ",visited[i][j]);
		}
		fprintf(stdout,"\n");
	}
  return 0;
}

