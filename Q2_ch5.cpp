#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
} *head=NULL;
class LL{
 node *tail;
	public :
		LL(){
		}
		void addnode (int a)
		{
			node *temp=new node;
			temp->data=a;
			temp->next=NULL;
			if (head==NULL){
				head=temp;
				tail=temp;
			}
			else
      		{	
        	tail->next=temp;
        	tail=temp;
      	}
      }
	  	int length(node *p)
	  	{
	  		if (p==NULL)
	  		{
	  			return 0;
			  }
			  else return length(p->next)+1;
		  }
};
int main (){
	int a,n;
	LL obj;
	cout << "How many elements do you want to enter in Linked List 1?\n";
	cin >> n;
	cout << "Enter in Ascending Order\n";
	for (int i=0;i<n;i++)
	{
		cin >> a;
		obj.addnode(a);
	};
	cout <<"Length is : " << obj.length(head);
}
