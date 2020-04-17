#ifndef BASIC_H
#define BASIC_H
#include<bits/stdc++.h>
namespace Random{
	typedef int ll;
	typedef unsigned int ul;
	typedef long long int li;
	typedef unsigned long long int ull;
	using namespace std;
	struct RandomEngine{
		inline ul get()
		{
			static mt19937 mt(time(0));
			return mt();
		}
	};
	inline ll randInt(ll r)
	{
		static RandomEngine rnd;
		return rnd.get()%r;
	}
	inline ll randInt(ll l,ll r)
	{
		static RandomEngine rnd;
		return l+rnd.get()%(r-l+1);
	}
	inline li randLL(li r)
	{
		static RandomEngine rnd;
		return (ull)rnd.get()*rnd.get()%r;
	}
	inline li randLL(li l,li r)
	{
		static RandomEngine rnd;
		return l+(ull)rnd.get()*rnd.get()%(r-l+1);
	}
	template<class T>
	inline void fillArray(T *arr,ll indl,ll indr,T (*rndf)(ll),T r)
	{
		for(register int i=indl;i<=indr;i++)
		{
			arr[i]=rndf(r);
		}
	}
	template<class T>
	inline void fillArray(T *arr,ll indl,ll indr,T (*rndf)(ll,ll),T l,T r)
	{
		for(register int i=indl;i<=indr;i++)
		{
			arr[i]=rndf(l,r);
		}
	}
	template<class T>
	inline void shuffle(T *arr,ll l,ll r)
	{
		ll ind;
		for(register int i=l;i<=r;i++)
		{
			ind=randInt(i,r),swap(arr[i],arr[ind]);
		}
	}
}
#endif
