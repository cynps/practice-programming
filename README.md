# practice-programming

## C++/G++ on Windows 11

コンパイラのダウンロード
* https://sourceforge.net/projects/mingw-w64/files/mingw-w64/
* 環境に合ったものを取得する。
* 例えば、Windows11 64bit では、「 x86_64-posix-sjlj 」リンクを選択

参考
* https://qiita.com/kzrashi/items/4e0ab5949b69d4b333dd
* https://joho.g-edu.uec.ac.jp/joho/gcc_win/
* https://www.mingw-w64.org/downloads/

check
```
PS C:\dev\repo\practice-programming> g++ --version
g++.exe (x86_64-posix-sjlj-rev0, Built by MinGW-W64 project) 8.1.0
Copyright (C) 2018 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```

コンパイルと実行のテスト
```g++
PS C:\dev\repo\practice-programming\atcoder\_practice-contest> g++ .\a.cpp
PS C:\dev\repo\practice-programming\atcoder\_practice-contest> .\a.exe
72
128 256
myonmyon
456 myonmyon
```
```gcc
PS C:\dev\repo\practice-programming\atcoder\_practice-contest> gcc .\a.cpp -lstdc++ -o v
PS C:\dev\repo\practice-programming\atcoder\_practice-contest> ls v*


    ディレクトリ: C:\dev\repo\practice-programming\atcoder\_practice-contest


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
-a----        2023/02/14      2:20          62143 v.exe
```

## C++/G++ on Ubuntu

check (preinstalled)
```
$ g++ --version
g++ (Ubuntu 9.4.0-1ubuntu1~20.04.1) 9.4.0
Copyright (C) 2019 Free Software Foundation, Inc.
This is free software; see the source for copying conditions.  There is NO
warranty; not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
```
