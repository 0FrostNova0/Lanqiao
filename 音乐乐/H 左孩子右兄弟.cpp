/*
�ύʱ��	02-09 21:51:14
������	��ȷ
�÷�	100
CPUʹ��	93ms
�ڴ�ʹ��	6.171MB
*/ 
#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>vec[100010];
int dfs(int fa)
{
	int maxn=0;
	for(int i=0;i<vec[fa].size();i++)
	{
		maxn=max(maxn,dfs(vec[fa][i]));
	}
	return vec[fa].size()+maxn;
}
int main()
{
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		int fa;
		cin>>fa;
		vec[fa].push_back(i);
	}
	cout<<dfs(1);
	return 0;
}
