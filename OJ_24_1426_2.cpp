#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,a,b,c;
	while(cin>>n)
	{
	double c=(pow(5,0.5)-1)/2.0;
	int a=1;
	for(a=1;a<5000;a++)
	{
		if((double)a/(n+a)>c) break;
	}
	printf("%d/%d\n",a-1,n+a-1);
	}
	return 0;
}
