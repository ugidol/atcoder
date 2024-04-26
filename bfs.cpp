	function<void(void)> bfs = [&](void){
		queue<T> que ;
		visited[0] = true;
		que.push(0);
		while( ! que.empty() ) {
			T v = que.front();que.pop();
			for(auto vv:vec){
				if ( visited[vv] ){
					continue;
				}
				visited[vv] = true;
				que.push(vv);
			}
		}
	};

