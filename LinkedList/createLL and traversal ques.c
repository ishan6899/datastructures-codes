 #include <stdio.h>
 #include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
  
}*first=NULL;

//Code Explained in Docs
void create(int A[],int n)
{
int i;
struct Node *t,*last;
first=(struct Node *)malloc(sizeof(struct Node));
first->data=A[0]; first->next=NULL;
last=first;
for(i=1;i<n;i++)
{
t=(struct Node*)malloc(sizeof(struct Node));
t->data=A[i]; t->next=NULL; last->next=t;
last=t;
}
}

// Various Traversals Applications

//Counting no.of nodes

int Count(struct Node *p)
{
   int l=0;
  while(p)
 {
  l++;
  p=p->next;
 }
 return l;

}
//Recursive

int RCount(struct Node *p)
{
  if(p!=NULL)
  {
    return RCount(p->next)+1;
  }
  else{
    return 0;
  }
}

// Sum of all elements

int sum(struct Node *p)
{
  int sum=0;
  while(p)
  {
    sum=sum+p->data;
    p=p->next;
  }
  return sum
}
// sum of all elements recursively
int RSum(struct Node *p)
{
  if(p==NULL)
  {
    return 0;
  }
  else
  {
    return RSum(p->next)+p->data;
  }
}


//Main function
int main()
{
  int A[]={1,2,3,4,5,6,7,8,9}
  //Create function
  create(A,9);
  
  //Any other function from the list mentioned in the doc
  printf("%d\n",sum(first));

}