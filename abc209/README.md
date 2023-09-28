## D - Collision
https://atcoder.jp/contests/abc209/tasks/abc209_d

* DFS/BFS
* クエリの都度、探索をすると間に合わない
  * DFS/BFS=`( 10^5 + (10^5-1) ) ` * クエリの数=`10^5` で `10^10` くらいになるので...
* ノード間の距離が奇数="Road",偶数="Town"になるので、 各ノードの開始ノードからの距離を持たせて、それで判定するようにした
  * 街がN個、道路がN-1本、全ての街がつながっていることから、木(tree)になるのと、最短経路で移動することから、↑でいけると思った（これに気がつくのに２日くらいかかった）

[解説1](https://atcoder.jp/contests/abc209/editorial/2229)

* `木の二部グラフ性`っていうのがあるらしい...

[解説2](https://yunix-kyopro.hatenablog.com/entry/2021/07/11/020240?_ga=2.121161536.9506465.1625937519-1301098457.1625937519)

[解説3](https://blog.hamayanhamayan.com/entry/2021/07/11/154020)

* `LCA(Lowest Common Ancestor)`ってのがあるらしい...
