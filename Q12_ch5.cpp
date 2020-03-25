#include <iostream>
using namespace std;
void cube (int n)
{
	if (n>0)
	{	cube (n-1);
		cout << n*n*n <<endl;
	}
}
int main ()
{
	cube (5);
}
