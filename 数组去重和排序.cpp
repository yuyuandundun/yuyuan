#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,i,j,t,count=0;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int m=unique(a,a+n)-a;
	cout<<m;
	for(i=0;i<m;i++)
	{
		cout<<a[i];
	}
	return 0;
	
	
	
} 
