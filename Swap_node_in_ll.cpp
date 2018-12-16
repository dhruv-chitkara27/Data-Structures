#include<iostream>
using namespace std;

struct node
{
	int data;
    node *next;
}
*start;

class single_llist
{

	public:
		struct node *p;
		node *create_node(int);
		node *Insert_end(int );
		void print();
        single_llist()
		{
			start=NULL;
		}
};
node  *single_llist :: create_node(int value)
{
	struct node *temp,*p;
	temp=new (struct node);
	if(temp==NULL)
	{
		cout<<"Memory not allocated";
		return 0;
	}
	else
	{
		temp->data=value;
		temp->next=NULL;
		return temp;
	}
}

void single_llist :: print()
{
	struct node *temp;
	if(start==NULL)
	{
		cout<<"list is empty";
	}
	else
	{
		temp=start;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
	}
}

node * single_llist :: Insert_end(int num)
{
	struct node *temp,*p;
	temp = create_node(num);

	if(start==NULL)
	{
		start=temp;
	}
	else
	{
	    p=start;
		while(p->next!=NULL)
		{
			p=p->next;
		}
		p->next=temp;
	}
	return start;
}

void swap(struct node *p,int x, int y)
{
 struct node *prevx,*currx,*prevy,*curry,*temp;
 prevx=NULL;
 currx=p;
 if(p==NULL)
 return;

 while(currx!=NULL&& currx->data!=x)
 {
  prevx=currx;
  currx=currx->next;
 }
 prevy=NULL;
 curry=p;
 while(curry!=NULL&& curry->data!=y)
 {
  prevy=curry;
  curry=curry->next;
 }
 if(currx==NULL|| curry==NULL)
 {
   cout<<"Can not Swap";
   return;
 }
 else
 {
   prevx->next=curry;
   prevy->next=currx;
   temp=curry->next;
   curry->next=currx->next;
   currx->next=temp;
 }
}

int main()
{
    int i,n,r,val1,val2;
    struct node *p;
	single_llist s1,s2;
	cout<<"Enter No. of nodes";
	cin>>n;
	for(i=1;i<=n;i++)
	{
      cin>>r;
      p=s1.Insert_end(r);
    }
    s1.print();
    cout<<"\nEnter Elements to be swapped";
    cin>>val1;
    cout<<"\n";
    cin>>val2;
    swap(p,val1,val2);
    s2.print();

}

