#include<iostream>
#include<sstream>
using namespace std;

string rec (int n)
{
	if (n<1000)
	{
		stringstream ss;  
  		ss<<n;  
  		string s;  
  		ss>>s;
		return s;
	}
	else {
		int c;
		c=n%1000;
		stringstream ss;
  		ss<<c;
  		string s;
  		ss>>s;
  		return rec(n/1000)+","+s ;
	}
}
int main ()
{
	string c=rec (123456789);
	cout << c;
}
