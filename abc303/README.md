## D - Shift vs. CapsLock
https://atcoder.jp/contests/abc303/tasks/abc303_d

* DはDPのD
* 遷移のパターンが多かったので嵌った
  * `a/A`のみ ( `X` )
  * `Shift+A`+`CapsLock`
  * `CapsLock`+`a/A` ( `Z+X` )
  * `a/A`+`CapsLock`
  * `CapsLock`+`Shift+A` ( `Z+Y` )
  * `Shift+A`のみ ( `Y` )
  * `CapsLock`+`a/A`+`CapsLock`

[解説](https://atcoder.jp/contests/abc303/editorial/6442)

* 遷移として考えるべきは４種類、とのこと...
  * `a/A`のみ ( `X` )
  * `Shift+A`のみ ( `Y` )
  * `CapsLock`+`a/A` ( `Z+X` )
  * `CapsLock`+`Shift+A` ( `Z+Y` )
