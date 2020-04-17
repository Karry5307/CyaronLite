#ifndef PROBTABLE_H
#define PROBTABLE_H
#include "basic.h"
namespace Random{
	typedef int ll;
	using namespace std;
	const ll MAXN=5e5+51;
	template<class T>
	struct ProbTable{
		ll tot;
		double prob[MAXN];
		double prefix[MAXN];
		T choice[MAXN];
		map<double,ll>mp;
		ProbTable()
		{
			tot=0,memset(prefix,0,sizeof(prefix));
			memset(prob,0,sizeof(prob)),memset(choice,0,sizeof(choice));
		}
		inline void clear()
		{
			tot=0,memset(prefix,0,sizeof(prefix));
			memset(prob,0,sizeof(prob)),memset(choice,0,sizeof(choice));
		}
		inline void op()
		{
			for(register int i=1;i<=tot;i++)
			{
				cout<<choice[i]<<" "<<prob[i]<<endl;
			}
		}
		inline void insert(T ch,double pr)
		{
			choice[++tot]=ch,prefix[tot]=prefix[tot-1]+(prob[tot]=pr);
			mp[prefix[tot]]=tot;
		}
		inline T generate()
		{
			double totProb=prefix[tot],r=1.0*randInt(0,(ll)prefix[tot]*1e6)/1e6;
			cout<<(*mp.lower_bound(r)).second<<endl; 
			return choice[(*mp.lower_bound(r)).second];
		}
	};
	/*
	template<class T>
	inline ProbTable<T> uniformDist(T l,T r,ll div)
	{
		static ProbTable<T>p;
		double prob=1.0/div;
		p.clear();
		for(register T i=l;i<=r;i+=(r-l)/(div-1))
		{
			p.insert(i,prob);
		}
		return p;
	}
	*/
}
#endif
