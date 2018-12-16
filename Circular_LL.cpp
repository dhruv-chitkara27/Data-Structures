#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
}
*start, *temp,*current;

void Insert(int);
void Display();

  int main()
  {

    start=NULL;
    int item,choice,location,element,position;
    cout<<"Circular Linked List \n";
    again:
        cout<<"\n1.Insertion\n2.Print\n3.Exit\n";
        cout<<"Enter choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1:cout<<"Enter item to insert: ";
            cin>>item;
            Insert(item);
            goto again;
            case 2:cout<<"\nInserted item = ";
            Display();cout<<"\n";
            goto again;
            case 3:cout<<"\nTHANK YOU";
            default:break;
        }
    return 0;
}

void Insert(int item)
{
    temp=new node;
    temp->data=item;
    temp->next=start;
    node* current;

if(start==NULL)
{
    start=temp;
temp->next=start;
}
else
{
    current=start;
 while(current->next!=start)
  {current=current->next;
  }
 current->next=temp;
 }
}

void Display()
{
    current= start;
 do{
 cout<<current->data<<"->";
 //cout<<current->next;
 current=current->next;
 }while(current!=start);

}
