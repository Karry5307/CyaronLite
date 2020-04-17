#ifndef PERMUTATION_H
#define PERMUTATION_H
#include<bits/stdc++.h>
#include "basic.h"
namespace Random{
	const ll MAXN=5e5+51;
	struct Permutation{
		ll sz;
		ll num[MAXN];
		Permutation(ll sz=0)
		{
			memset(num,0,sizeof(num));
		}
		inline ll& operator [](const ll &x)
		{
			return num[x];
		}
		inline const ll& operator [](const ll &x)const
		{
			return num[x];
		}
		inline void generate(ll sz)
		{
			this->sz=sz;
			for(register int i=1;i<=sz;i++)
			{
				num[i]=i;
			}
			shuffle(num,1,sz);
		}
		inline void op()
		{
			for(register int i=1;i<=sz;i++)
			{
				printf("%d ",num[i]);
			}
			puts("");
		}
	};
	inline Permutation operator *(Permutation &x,Permutation &y)
	{
		Permutation res;
		res.sz=x.sz;
		for(register int i=1;i<=x.sz;i++)
		{
			res[i]=y[x[i]];
		}
		return res;
	}
}
#endif 
