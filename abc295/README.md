# D - Three Days Ago
https://atcoder.jp/contests/abc295/tasks/abc295_d

時間はかかったけど、自力でACできた  
1回目は、累積和かと思って実装したが、TLEとなった( ` 5 * 10^5 ^ 2 ` になるので)
2回目は、出現回数を偶奇で管理し、同じ偶奇のパターンの組み合わせが何通りできるかを計算するようにしたが、WAとなった（後で改めて見直したところ、`long long`にすべきところを`int`にしていたのが原因だった）  
（あと、`XOR`ではなく`OR`を使ってしまったために入力例すらWAになるのもあった）
３回目は、出現回数の偶奇が今迄で何回出現したかを管理しておき、その個数を計算するようにしたら、ACになった  
多分、組み合わせの数を数えるという意味では２回目と３回目の考え方は同じなんだと思う...

[解説](https://atcoder.jp/contests/abc295/editorial/6034)
* 偶奇をビット演算ではなくて`%2`で計算していた。
* 組み合わせの数を` n * (n-1) / 2 `で計算するのは２回目の実装と同じ。

[ユーザ解説](https://atcoder.jp/contests/abc295/editorial/6059)
* `Zobrist Hash`を使う方法、とのこと。


