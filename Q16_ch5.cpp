#include<iostream>
using namespace std;
bool rec (string a,int i,int j)
{
	for (int k=0;k<a.length();k++)
	{
		if (a[k]>=65 && a[k] <=90)
		a[k]+=32;
	}
while (i <= j) { 

  
        if (!(a[i] >= 97 && a[i] <= 122)) 
           return rec(a,i+1,j);
   
        else if (!(a[j] >= 97 && a[j] <= 122)) 
            return rec(a,i,j-1); 
   
        else if (a[i] == a[j]) 
            return rec(a,i+1,j-1);    
   
        else
            return false; 
    } 
    return true; 
}
int main (){
	string s;
	cout << "Enter String\n";
	cin >> s;
	int n=rec(s,0,s.length());
	if (n==1){
		cout << "Palindrome\n";
	}
	else cout <<"Not Palindrome\n";
}
