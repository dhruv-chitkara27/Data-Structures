#include<iostream>
using namespace std;
class queue
{
		int que[6];
		int rear,front;
		public:
			queue()
			{
				rear=-1;
				front=-1;
			}
			void enqueue();
			void dequeue();
			void show();
};
void queue::dequeue()
{	if(front==-1 && rear==-1)
	{
		cout<<"que is empty: Que underflow";
	}
	else
	{
		front=front+1;
	}
}
void queue::enqueue()
{
	int r;
	cin>>r;
	if(rear==5)
	{
		cout<<" Queue overflow";
	}
	else
	{
		rear=rear+1;
		que[rear]=r;
	}
	if(front==-1)
	{
		front=0;
	}
}
void queue::show()
{
	if(front==-1 && rear==-1 || front>rear)
	{
		cout<<"que is empty";
	}
	else
	{
     cout<<"Stack Elements : ";
	for(int i=front;i<=rear;i++)
	{
		cout<<que[i]<<" ";

	}
	cout<<endl;
	}
}
main()
{
	queue q;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	q.enqueue();
}
	q.show();
	q.dequeue();
	q.dequeue();
	q.show();
	return 0;
}


