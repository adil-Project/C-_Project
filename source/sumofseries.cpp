#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int i,n;
	float v;
	n=1000;
	v=0;
	for (i=0;i<n;i++)
	{
		v=v+pow(0.2,i);
	}
	
	cout<<"value is:"<<v<<endl;
	return 0;
	
}
