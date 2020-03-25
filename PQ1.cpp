#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
}; 
class LL{
 
	public :
	node *head=NULL;
		LL(){
		}
		void push (char a)
		{
			node *temp=new node;

				temp->data=a;
			    temp->next=head;
			    head=temp;
}
      char pop (){
      	node *p;
      	if (head==NULL)
      	{
      		cout << "\t\t\tStack Is Empty\n";
		  }
		else {
			p=head;
			head=head->next;
			char z=p->data;
			delete (p);
			return z;
		}
	  }
	  char peek ()
	  {
	  	if (head)
	  	{
	  		return head->data;
		  }
		  else {
		  	return ' ';
		  }
	  }
	  bool isEmpty()
	  {
	  	return head ? 0:1;
	  }

		void display (struct node *temp){
			while (temp!=NULL)
			{
				cout <<"\t\t\t"<< temp->data << " " <<endl;
				temp=temp->next;
				
			}
			
		}
		void operator == (LL &objs2)
		{
			int count1=0,count2=0;
			while (!(this->isEmpty()) && !objs2.isEmpty())
			{
				count1++;
				if (this->peek()==objs2.peek())
				{
					this->pop();
					objs2.pop();
					count2++;
				}
			}
			if (count1!=count2){
				 cout << "Not Palidnrome\n";}
			else cout << "Palindrome\n";
			}
		
};
int main (){
	int a,n;
	LL s1;
	LL s2;
	string s;
	cout << "Enter any string\n";
	cin >> s;
	for (int i=0;i<s.length();i++)
	{
		s1.push(s[i]);
	}
	for (int i=0;i<s.length();i++)
	{
		s2.push(s1.pop());
	}
	for (int i=0;i<s.length();i++)
	{
		s1.push(s[i]);
	}

	s1 == s2;
	
	
}
