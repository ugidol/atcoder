## D - Triangles

https://atcoder.jp/contests/abc143/tasks/abc143_d

* `N <= 2*10^3` なので,全探索(n C 3)では間に合わない
* n C 2 にして、残りの１つを2分探索
  * ` a - b < c && c < a + b ` を探す

* `fprintf(stderr,"",,,)`を使ってたのでLTE
* `lower_bound()`の前の`sort`を`#ifdef` で囲ってしまったので誤動作
* *より大きい* : `upper_bound`
* *より小さい* : `lower_bound`してからイテレータを１つ戻す

* [解説1](https://atcoder.jp/contests/abc143/editorial/652)
  * 定数倍でもTLEにならない、とのこと
* [解説2](https://blog.hamayanhamayan.com/entry/2019/10/19/224640_2)
  * distanceではなく累積和を使うとのこと
