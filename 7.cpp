#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
} ;
class LL{
	
	public :
		node *head=NULL,*tail=NULL;
		LL(){
		}
		void push (int a)
		{
			node *temp=new node;
			if (temp==NULL)
			{
				cout << "Queue is Full\n";
			}
			else {
				temp->data=a;
			    temp->next=NULL;
			    if (head==NULL)
			    {
			    	head=tail=temp;
				}
				else {
					tail->next=temp;
					tail=temp;
				}
	}
      }
      int pop (){
      	node *p;
      	if (head==NULL)
      	{
      		cout << "\t\t\tQueue Is Empty\n";
		  }
		else {
			p=head;
			head=head->next;
			int z=p->data;
			delete (p);
			return z;
		} 
	  }
	  int peek ()
	  {
	  	if (head)
	  	{
	  		return head->data;
		  }
		  else {
		  	return -1;
		  }
	  }
	  int isEmpty()
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
		void StkQue(LL &Q1,LL &Q2,int n){
			while (!Q1.isEmpty())
			{
				Q2.push(Q1.pop());
			}
			Q1.push(n);
			while(!Q2.isEmpty())
			{
				Q1.push(Q2.pop());
			}
		}	
};
int main (){
	int a,n;
	LL q1;
	LL q2;
	cout << "How many numbers to be pushed ?\n";
	cin >> n;
	cout << "Enter numbers\n";
	for (int i=0;i<n;i++)
	{
		cin >> a;
		q1.push(a);
	}
	cout << "Current Queue\n";
	q1.display(q1.head);
	cout << "To be like stack it should push the number top of the list\n";
	cout << "Enter a number to be pushed\n";
	cin >> n;
	q2.StkQue(q1,q2,n);
	cout <<"Queue Now\n";
	q2.display(q1.head);
	
}
