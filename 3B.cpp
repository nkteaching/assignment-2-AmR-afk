#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
}; 
class LL{
 
 int n;
	public :
		node *head=NULL;
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
	  int isEmpty()
	  {
	  	return head ? 0:1 ;
	  }
	  int peek ()
	  {
	  	if (head!=NULL)
	  	{
	  		return head->data;
		  }
	  }
		void display (node *temp){
			while (temp!=NULL)
			{
				cout <<"\t\t\t"<< temp->data << " " <<endl;
				temp=temp->next;
				}
				}
		void transfer (LL &s1,LL &s2,int count)
		{	int var1=count,var2;
		node *p =head;
			while(var1!=0)
			{
				var2=var1-1;
				while(var2!=0)
				{
					p=p->next;
					var2--;
				}
				s2.push(p->data);
				var1--;
				p=head;
			}
						
}
};
int main (){
	int a,i,n,count=0;	
	cout << "How many elements do you want to push ?\n";
	cin >> n;
	LL stack1(n);
	LL stack2(n);
	cout << "Push Elements on Stack 1\n";
	for (i=0;i<n;i++)
		{
			cout << "Enter Value\n";
			cin >> a;
			stack1.push(a);
			count++;
		}
		cout << "Stack1\n";
		stack1.display(stack1.head);
		stack1.transfer(stack1,stack2,count);
		cout << "Stack2\n";
		stack2.display(stack2.head);
}
