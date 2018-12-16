#include<iostream>
using namespace std;
struct node
{
	int data;
	node *next;
}*rear,*front;
class que
{

public:
    que()
    {
        rear=NULL;
        front=NULL;
    }
void enqueue()
 {
     int e;
     cin>>e;
 	node *s;
 	node *temp=new node;
 	temp->data=e;
 	temp->next=NULL;

 if(front==NULL || rear==NULL)
 {
 front=temp;
 rear=temp;
 }
 else
 {
 s=rear;
 s->next=temp;
 rear=temp;
 }
}
void dequeue()
 {
 	node *t;
 	if(front==NULL)
 	{
	 cout<<"queue empty:Queue underflow";
	}
	else
	t=front;
	front=t->next;
	delete t;
 }
void display()
 {
   node *temp;
 	if(front==NULL&&rear==NULL)
 	{
	 cout<<"Queue is empty";
	}
	else
	cout<<"Stack Elements : ";

	temp=front;
	while(temp!=NULL)
	{
	 cout<<temp->data<<" ";
	 temp=temp->next;
	}
	cout<<"\n";
 }
};
int main()
{
	int n,d;
	cin>>n;
	que q;

	for(int i=0;i<n;i++)
	{
	q.enqueue();

}
q.display();
q.dequeue();
q.display();
}
