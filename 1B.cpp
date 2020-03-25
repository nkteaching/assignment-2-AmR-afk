#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
} *front=NULL,*rear=NULL,*head=NULL;
class LL{
	
	public :
		LL(){
		}
		void push_q (int a)
		{
			node *temp=new node;
			if (temp==NULL)
			{
				cout << "Queue is Full\n";
			}
			else {
				temp->data=a;
			    temp->next=NULL;
			    if (front==NULL)
			    {
			    	front=rear=temp;
				}
				else {
					rear->next=temp;
					rear=temp;
				}
			}
      }
      int pop_q (){
      	node *p;
      	if (front==NULL)
      	{
      		cout << "\t\t\tQueue Is Empty\n";
		  }
		else {
			p=front;
			front=front->next;
			int z=p->data;
			return z;
			delete (p);
			cout << "Popped Element is "<<z<<endl;
		} 
		}
	  void push_s (int a)
		{
			node *temp=new node;

				temp->data=a;
			    temp->next=head;
			    head=temp;}
      int pop_s (){
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
			cout << "Popped Element is "<<z<<endl;
		}}
	  void reverse ()
	  {
	    cout << "Current Stack\n";
	  	display(head);
	  	for (int i=0;i<4;i++)
	  		{
				int c=pop_s();
				push_q(c);
				
			}
			cout << "Stack After Being Popped And Pushed in Queue\n";
			display(head);
			cout << "\nQueue\n";
			display (front);
			for (int i=0;i<4;i++)
			{
				push_s(pop_q());
			}
				
				cout << "Queue After Being Popped And Pushed In Stack\n";
				display(front);
				cout << endl <<"Stack Now \n";
				display(head);
}

		void display (struct node *temp){
			while (temp)
			{
				cout <<"\t\t\t"<< temp->data << " " <<endl;
				temp=temp->next;
				
			}
			
		}
};
int main (){
	LL stack1;
	LL queue1;
	stack1.push_s(1);
	stack1.push_s(2);
	stack1.push_s(3);
	stack1.push_s(4);
	stack1.reverse();
	queue1.display(front);
}
