#include<iostream>
using namespace std;
int main()
{
	int apple[10];
	for(int i=0;i<10;i++)
	{
		cin>>apple[i];
	}
	int hight,sum;
	int len=30,count=0;
	cin>>hight;
	sum=len+hight;
	for(int i=0;i<10;i++)
	{
		if(apple[i]<=sum)
	{
		count++;
	}
	}
	cout<<count;
	return 0;	
}
