//ans:2430
#include<bits/stdc++.h>
using namespace std;
#define inf 2021041820210418
vector<long long>vec;

int main()
{
	for(int i=1;i<=sqrt(inf);i++)
	{
		if(inf%i==0)
		{
			vec.push_back(i);
			vec.push_back(inf/i);//��������������Լ������vector�����У��õ�һ������������������Լ���ļ��� 
		}
	}
	int cap=vec.size();
	cout<<cap<<endl;
	int cnt=0;
	for(int i=0;i<cap;i++)
		for(int j=0;j<cap;j++)//ö�ټ������������ĳ˻� 
			if(inf%(vec[i]*vec[j])==0) cnt++;//���������������������˻������������������ĳ˻�����������һ 
	cout<<cnt;
	return 0;
}
