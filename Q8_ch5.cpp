#include<iostream>
using namespace std;
int rec (int n,int m)
{
	while (m!=0)
	{
		return  n+rec(n,m-1);
	}
	return 0;
}
int main()
{
	cout << rec (5,10);
}
