//
//  main.c
//  tree
//
//  Created by Ishan Arora on 13/02/20.
//  Copyright © 2020 Ishan Arora. All rights reserved.
//

#include <stdio.h>
#include "queue.h"

struct Node *root=NULL;

void TreeCreate()
{
    //Declaring Initial Variables
    struct Node *p,*t;
    struct Queue q;
    int x;
    // Okay firstly we will Create a queue with  size 100
    create(&q, 100);

    //Now its the time to create a root node. Setting left and right child to 0
    printf("Enter the root node");
    scanf("%d",&x);
    root=(struct Node *)malloc(sizeof(struct Node *));
    root->data=x;
    root->lchild=NULL;
    root->rchild=NULL;

    //Now enqueing the root node into queue
    enqueue(&q, root);

    //Now this while loop will run till the queue isnt empty 
    while(!isEmpty(q))
    {
        p=dequeue(&q);
        //Creating left child of current node
        printf("Enter the left child of %d",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;

            //enqueue it
            enqueue(&q, t);
        }
        //Creating Right Child of current node
        printf("Enter the right child of %d",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct Node *)malloc(sizeof(struct Node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;

            //enqueue it
            enqueue(&q, t);
        }
        
        
    }
}
    



int main(int argc, const char * argv[]) {
    
    TreeCreate();

    // insert code here...
    return 0;
}

