## D - Shift vs. CapsLock
https://atcoder.jp/contests/abc303/tasks/abc303_d

* DはDPのD
* 遷移のパターンが多かったので嵌った
  * `a/A`のみ
  * `Shift+A`+`CapsLock`
  * `CapsLock`+`a/A`
  * `a/A`+`CapsLock`
  * `CapsLock`+`Shift+A`
  * `Shift+A`のみ
  * `CapsLock`+`a/A`+`CapsLock` ← これなかなか気がつかなかったけど、考慮不要かも？

[解説](https://atcoder.jp/contests/abc303/editorial/6442)

* 遷移として考えるべきは４種類、とのこと...
