#ifndef FILE_H
#define FILE_H
#include<bits/stdc++.h>
namespace Random{
	using namespace std;
	typedef int ll;
	inline void openFile(string prefix,ll data,ll type)
	{
		string in=prefix+to_string(data)+".in";
		string out=prefix+to_string(data)+".out";
		if(type==0||type==2)
		{
			freopen(in.c_str(),"r",stdin);
		}
		if(type==1||type==2)
		{
			freopen(out.c_str(),"w",stdout);
		}
	}
	inline void openConsole()
	{
		freopen("CON.in","r",stdin);
		freopen("CON.out","w",stdout);
	}
}
#endif
