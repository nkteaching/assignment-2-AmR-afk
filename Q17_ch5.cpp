#include<iostream>
using namespace std;

bool check (string s,char a,int i)
{
	while(i!=s.length()-1)
	{
		if (s[i]==a)
		{
			return true;
		}
		else return check(s,a,i+1);
	}
	return false;
}
int occurence (string s,char a,int i)
{
	while (i!=s.length())
	{
		if (s[i]==a)
		{
			return occurence(s,a,i+1)+1;
		}
		else return occurence(s,a,i+1)+0;
	}
	return 0;
}
void remove(string s,char a,int i,int j)
{
	while (i!=s.length())
	{
		
		if (s[i]!=a)
		{
			s[j]=s[i];
			return remove (s,a,i+1,j+1);
		}	
		
	    else {
		return remove(s,a,i+1,j);
	}
}
		cout << endl;
		for (i=0;i<j;i++)
		{
			cout << s[i];
		}
}

int main ()
{
	string s="Ammar ahmed";
	cout << "Given String is : "<< s << endl;
	char ch;
	cout << "Enter any character\n";
	cin >> ch;
	
	if (check (s,ch,0) == 1)
	{
		cout << ch << " is present in String\n";
	}
	else cout << ch << " is not present in String\n";
	
	cout << "Occurence of character "<<ch <<" in string is "<<occurence(s,ch,0);
	
	remove (s,ch,0,0);	
	
}
