# abc321

## B - Cutoff

https://atcoder.jp/contests/abc321/tasks/abc321_b

* Nラウンド目に取るスコアを`0`から`100`までシミュレーション 
* 最高スコアと最低スコアは、`sort()`して最初と最後の要素を`erase()`  
* `==` を `>=` にしたら、ACになりました。 

## C - 321-like Searcher

https://atcoder.jp/contests/abc321/tasks/abc321_c

* DP?
* もっとスマートな解き方があるきがする


## D - Set Menu

https://atcoder.jp/contests/abc321/tasks/abc321_d

* 全探索だと間に合わない( N=`2*10^5`, M=`2*10^5`, なので、NM=`4*10^10`)
* 二分探索
* 累積和
* 累積和の配列は数え上げる要素数＋１のほうがよさげ
* Aに対しての二分探索は行わないので、Aのソートは不要だった

[解説](https://atcoder.jp/contests/abc321/editorial/7266);
