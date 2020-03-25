#include<iostream>
using namespace std;
void Ques5a (int n,int a)
{
	while(n!=0)
	{
		if (a%2==0)
		return Ques5a(n-1,a+1);
		else {
			cout << a << " ";
			return Ques5a (n-1,a+1) ;
		}
	}
}
void Ques5b (int n,int a)
{
	while(n!=0)
	{
		if (a%2==0)
		{
			cout << n << " ";
			return Ques5b(n-1,a+1);
		}
		else {
			return Ques5b (n-1,a+1) ;
		}
	}
}
int main ()
{
	Ques5a (10,1);
	cout << endl;
	Ques5b(10,1);
}
