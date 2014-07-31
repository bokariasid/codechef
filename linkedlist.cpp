#include <cstdlib>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct linkedlist{
    int data;
    struct linkedlist *next;
};
typedef struct linkedlist node;
node *head = NULL ;
void createNew(int data)
{
    node *t,*curr;
    
    t = new node;
    t->data = data;
    t->next = NULL;
    if(head == NULL)
    {
        
        head=t;
        return;
    }
    else
    {
        curr = head;
        while(curr->next!=NULL)
        {
           
             curr = curr->next;
        }
        curr->next = t;
    }
}

void display()
{
    node *t;
    t = head;
    
    while(t!=NULL)
    {
        
        cout<<t->data<<"\n";
        t=t->next;
    }
}
void deleteNode()
{
    node *curr,*prev;
    int element;
    cout<<"\nEnter element:";cin>>element;
    curr = head;
    while(curr!=NULL)
    {
        if(head->data == element)
        {
            cout<<"\nDeleted the first node";
            head = head->next;
            delete(curr);
            break;
        }
          else if(curr->data == element)
        {
            cout<<"\nElement deleted:"<<curr->data;
            prev->next = curr->next;
            delete(curr);
        }
           else 
        {
            prev = curr;
            curr = curr->next;
        }
    }
}
int main() 
{

    
    createNew(10);
    createNew(20);
    createNew(30);
    createNew(10);
    display();
    deleteNode();
    display();
    return 0;
}

