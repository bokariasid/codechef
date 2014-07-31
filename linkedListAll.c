#include<stdio.h>
#include<stdlib.h>
struct linkedlist
{
int data;
struct linkedlist *next;
};
typedef struct linkedlist node;
node *head = NULL;
void insert(int a)
{

    node *temp;
    temp = (node*)malloc(sizeof(node));
    temp->data = a;
    temp->next = NULL;
    if(head == NULL)
        head = temp;
    else
    {
        temp->next = head;
        head = temp;
    }
}
void display()
{

    node *t;
    t = head;
    while(t!= NULL)
       {
           printf("\nlist element:%d",t->data);
           t = t->next;
       }
}
void deleteDuplicate()
{
    printf("in here!!\n");
    node *curr2,*curr,*checker,*prev;
    curr2 = head;
    while(curr2!=NULL)
    {
        printf("in here check:!!\n");
        checker = curr2->next;
        if(checker->data == curr2->data)
        {
            printf("%d:deleted",checker->data);
            prev  = checker->next;
            free(checker);
        }
        else
        {
            prev = checker;
            checker = checker->next;
        }
        curr2 = curr2->next;
    }
}
int main()
{
char y="y";
printf("randi rauna!!");

    insert(10);
    insert(20);
    insert(10);
    insert(30);
    insert(55);
    insert(20);
    display();
    deleteDuplicate();
    display();
return 0;
}
