#include<iostream>
using namespace std;
int main()
{
	long long int n;
	while(cin >> n)
	{
		if(n >= 10000 && n<= 99999)
			cout << 22113 << endl;
		else
			cout << "wrong" << endl;
	}
	return 0;
}
