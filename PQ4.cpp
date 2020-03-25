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
		void push (int a)
		{
			node *temp=new node;
			if(temp==NULL)
			{
				cout << "Stack Overflow\n";
			}
			else {
				temp->data=a;
			    temp->next=head;
			    head=temp;
			}
				
      }
      int pop (){
      	node *p;
      	if (head==NULL)
      	{
      		cout << "\t\t\tStack Is Empty\n";
      		return 0;
		  }
		else {
			p=head;
			int z=p->data;
			head=head->next;
			delete p;
			return z;
		}
	  }
	  bool isEmpty(){
	  	return head ? 0:1;
	  }
	  int top()
	  {
	  	if (head!=NULL)
	  	return head->data;
	  }
		void display (struct node *temp){
			while (temp!=NULL)
			{
				cout <<"\t\t\t"<< temp->data << " " <<endl;
				temp=temp->next;
				}
				}
		void change (LL &s1,LL &s2)
		{
			while (!s1.isEmpty())
			{
				s2.push(s1.top());
				s1.pop();
			}
					}
		void add (LL &s1,LL &s2,LL &s3){
			int carry=0,sum=0;
			int x,y;
			while (!(s2.isEmpty()) || !(s3.isEmpty()))
			{
				if (carry == 1)
				{
					x=s2.pop();
					y=s3.pop();
					sum = x+y+carry;
				}
				else {
					x=s2.pop();
					y=s3.pop();
					sum=x+y;
				}
				if (sum >=10)
				{
					s1.push(sum%10);
					carry=sum/10;
				}
				else {
					s1.push(sum);
					carry=0;
				}
			}
		}			
				
};
int main (){
	int a=0,n;
	LL stack1;
	LL stack2;
	LL stack3;	
	cout << "Enter First Number ?\n";
	cin >> n;
	while (n!=0)
		{
			int c=n%10;
			stack1.push(c);
			n=n/10;
		}
		cout << "Stack1\n";
		stack1.display(stack1.head);
		cout <<"\nStack2\n";
		stack2.change(stack1,stack2);
		stack2.display(stack2.head);
	cout << "Enter Second Number ?\n";
	cin >> n;
	while (n!=0)
		{
			int c=n%10;
			stack1.push(c);
			n=n/10;
	}
		cout << "\nStack1\n";
		stack1.display(stack1.head);
		stack3.change(stack1,stack3);
		cout << "\nStack3\n";
		stack3.display(stack3.head);
		stack1.display(stack1.head);
		stack1.add(stack1,stack2,stack3);
		cout << "Sum is \n";
		stack1.display(stack1.head);
}
