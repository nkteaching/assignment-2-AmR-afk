#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
}*head=NULL; 
class LL{
 
 int n;
	public :
		LL(int n){
			this->n=n;
		}
		void push (int a)
		{
			node *temp=new node;

				temp->data=a;
			    temp->next=head;
			    head=temp;
      }
      int pop (){
      	node *p;
      	if (head==NULL)
      	{
      		cout << "\t\t\tStack Is Empty\n";
		  }
		else {
			p=head;
			head=head->next;
			int z=p->data;
			return z;
			delete (p);
			
		} 
	  }
		void display (struct node *temp){
			while (temp!=NULL)
			{
				cout <<"\t\t\t"<< temp->data << " " <<endl;
				temp=temp->next;
				}
				}
		void reverse (LL &obj10)
		{
			int c[n];
			for (int i=0;i<n;i++)
			{
				c[i]=pop();
				}
			for(int i=0;i<n;i++)
			{
				obj10.push(c[i]);
				}	
				}		
};
int main (){
	int a,i,n;	
	cout << "How many elements do you want to push ?\n";
	cin >> n;
	LL stack1(n);
	LL stack2(n);
	LL stack3(n);
	cout << "Push Elements on Stack 1\n";
	for (i=0;i<n;i++)
		{
			cout << "Enter Value\n";
			cin >> a;
			stack1.push(a);
		}
		cout << "Stack1 \n";
		stack1.display(head);
		stack1.reverse(stack2);
		cout <<"\nStack2\n";	
		stack2.display(head);
		stack2.reverse(stack3);
		cout <<"\nStack3\n";	
		stack3.display(head);
}
