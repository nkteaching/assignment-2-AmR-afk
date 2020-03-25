#include<iostream>

using namespace std;
double rec (int n)
{
	if (n==1 || n==0)
	{
		return rec(n-1)+n;
	}
	else if (n<0)
	{
		return 0;
	}
	else {
	
	while (n>1)
	{
		if(n%2==1)
		{
			return (rec(n-1))-(1.0/n);
		}
		else
		{
			return (rec(n-1))+(1.0/n);
		}
	}	
	}
	
	}
int main()
{
	cout << rec (2);
}
