### 前言

~~根据 Karry5307 的出题和造数据生活经历~~，他创造了一个 C++11 版的方便好用而且有足够多的功能的数据生成工具/cy

### 使用方法

由于使用 mt19937 脱离 RAND_MAX 的限制，需要在 C++11 下运行。

下一弹更新：图和树

basic.h

```cpp
randInt(r) // 生成 0~r-1 的 int（生成多项式系数的时候会很方便）
randInt(l,r) // 生成 l~r 的 int
randLL(r) // 生成 0~r-1 的 long long
randLL(l,r)// 生成 l~r 的 long long
fillArray(arr,indl,indr,f,r) // 将 arr[indl] 到 arr[indr] 中每个数用 f(r) 填充（生成序列的时候会很方便）
fillArray(arr,indl,indr,f,l,r) // 将 arr[indl] 到 arr[indr] 中每个数用 f(l,r) 填充（生成序列的时候会很方便）
shuffle(arr,l,r) // 将 arr[l] 到 arr[r] 中的元素随机打乱
```

permutation.h

```cpp
/*
可以用 Permutation 这个对象来生成置换和排列，支持置换的乘法
*/
generate(sz) // 生成一个长度为 sz 的排列 / 置换
```

probtable.h

```cpp
/*
可以用 ProbTable 自定义一个分布列
*/
insert(ch,pr) // 插入一个 ch，选到它的概率为 pr
generate() // 按照分布列随机选出一个元素
```

file.h

```cpp
openFile(prefix,data,type) // 重定向到 "prefix+data" 的文件，type=0 表示只重定向输入，type=1 表示只重定向输出，type=2 表示都重定向
openConsole() // 重定向到控制台
```
