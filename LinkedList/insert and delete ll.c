#include <stdio.h>
#include <stdlib.h>
struct Node 
{
    int data;
    struct Node *;

}*first=NULL;

//Display function
void Display(struct Node *p)
{
    while(p)
    {
        printf("%d",p->data);
        p=p->next;
    }
}

//insert in a LL
void insert(struct Node *p,int index,int x)
{
    struct Node *t;
    int i;

    //Boundary Condition
    if(index<0 || index>count(p))
    {
        printf("Out of index")
    }
    //Creating node in heap
    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    //Inserting at index 0
    if(index==0)
    {
        t->next=first;
        first=t;
    }

    //Inserting anywhere else
    else{
        for(i=0;i<index;i++)
        {
            p=p->next;
        }
        t->next=p->next;
        p->next=t;

    }
}

//Deleting from Linked List
int Delete(struct Node *p,int index)
{
    struct Node *q=NULL;
    int x=-1,i;
   if(index < 1 || index > count(p))
    {return -1;}

    //For index first
    if(index==1){
    q=first;
    //storing the deleted data in x
    x=first->data;
    first=first->next;
    // Freeing the heap space
    free(q);
    return x;
    }

    //Using two pointers for index other than first
    for(i=0;i<index-1;i++)
    {
        q=p;
        p=p->next;
    }
    q->next=p->next;
    x=p->data;
    free(p);
    return x;
}




int main()
{
//Try and test various functions

}