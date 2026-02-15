*This project has been created as part of the 42 curriculum by <yikeda>.*

## Description

This project is to create your own C library by reimplementing a large number of general-purpose functions included in the standard library of the C language.

## Library details

The created library contains the following functions.

### Libc functions

* ft\_isalpha ... 引数がアルファベットであるか判定する。

* ft\_isdigit ... 引数が数字であるか判定する。

* ft\_isalnum ... 引数がアルファベットまたは数字であるか判定する。

* ft\_isascii ... 引数がASCII文字であるか判定する。

* ft\_isprint ... 引数が表示可能な文字であるか判定する。

* ft\_strlen ... 文字列の長さを計算する。

* ft\_memset ... メモリの指定範囲を特定のバイト値で埋める。

* ft\_bzero ... メモリの指定範囲をゼロで埋める。

* ft\_memcpy ... メモリ領域を別の領域へコピーする。領域の重なりは考慮しない。

* ft\_memmove ... メモリ領域を別の領域へコピーする。領域が重なっている場合でも安全にコピーする。

* ft\_strlcpy ... サイズを指定して文字列を安全にコピーする。

* ft\_strlcat ... サイズを指定して文字列を安全に連結する。

* ft\_toupper ... 小文字を大文字に変換する。

* ft\_tolower ... 大文字を小文字に変換する。

* ft\_strchr ... 文字列内を先頭から検索し、特定の文字が最初に現れる位置のポインタを返す。

* ft\_strrchr ... 文字列内を末尾から検索し、特定の文字が最初に現れる位置のポインタを返す。

* ft\_strncmp ... サイズを指定して2つの文字列を比較する。

* ft\_memchr ... メモリ領域から特定のバイト値を検索する。

* ft\_memcmp ... 2つのメモリ領域をバイト単位で比較する。

* ft\_strnstr ... 文字列の中から、指定された文字列を検索する。

* ft\_atoi ... 文字列を整数型に変換する。

* ft\_calloc ... 指定したサイズのメモリを確保し、すべてゼロで初期化する。

* ft\_strdup ... 新しくメモリを確保して文字列を複製する。

### Additional functions

* ft\_substr ... 文字列の指定した位置から、指定した長さの文字列を新たに生成する。指定した長さは最大文字数。

* ft\_strjoin ... 2つの文字列を連結した文字列を新たに生成する。

* ft\_strtrim ... 文字列から、指定した文字列を取り除いた文字列を新たに生成する。

* ft\_split ... 指定した区切り文字で文字列を分割し、文字列の配列を生成する。

* ft\_itoa ... 整数を文字列に変換する。

* ft\_strmapi ... 文字列の各文字に対し、インデックスと文字を渡して関数を適用し、新たな文字列を生成する。

* ft\_striteri ... 文字列の各文字に対し、インデックスとアドレスを渡して関数を直接適用する。

* ft\_putchar\_fd ... 指定したfdに文字を出力する。

* ft\_putstr\_fd ... 指定したfdに文字列を出力する。

* ft\_putendl\_fd ... 指定したfdに文字列を出力し、改行を加える。

* ft\_putnbr\_fd ... 指定したfdに整数を出力する。

### Linked list

* ft\_lstnew ... 新しいリストを作成する。

* ft\_lstadd\_front ... リストの先頭に新しい要素を追加する。

* ft\_lstsize ... リストの要素数を数える。

* ft\_lstlast ... リストの最後の要素を返す。

* ft\_lstadd\_back ... リストの末尾に新しい要素を追加する。

* ft\_lstdelone ... 指定したリストの要素を解放し、リスト自体もメモリから解放する。

* ft\_lstclear ... 指定したリスト以降のすべての要素を削除し、メモリを解放する。

* ft\_lstiter ... リストのすべての要素に対し、順に関数を適用する。

* ft\_lstmap ... リストのすべての要素に関数を適用し、新たなリストを生成する。

## Instructions

### Compilation

You can use the following commands and generate 'libft.a'.

* 'make':Compile the functions and generate 'libft.a'.

* 'make clean':Delete the object file.

* 'make fclean':Delete the object file and and the generated library.

* 'make re':Redo the full build.

### Usage

If you use this library in another project, include 'libft.h' in the source code and link 'libft.a' during compilation.

## Resources

Some AI was used to deepen my understanding of functions.
