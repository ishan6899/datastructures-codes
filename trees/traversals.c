
void Inorder(struct Node *p)
    {
        if(p)
        {
            Inorder(p->lchild);
            printf("%d",p->data);
            Inorder(p->rchild);
        }
        
    }


void Preorder(struct Node *p)
{
    if(p)
    {   printf("%d",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);

    }
}

void Postorder(struct Node *p)
{
    if(p)
    {   
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d",p->data);
    }
}

// Algorithm explained in Tree's Readme file
void Levelorder(struct Node *p)
{
Queue q;
printf("%d",p->data);
enqueue(&q,p);

while(isEmpty(q))
{
    p=dequeue(&p);
    if(p->lchild)
    {
        print("%d",p->lchild->data);
        enqueue(&q,p->lchild);

    }
    if(p->rchild)
    {
        printf("%d",p->rchild->data);
        enqueue(&q,p->rchild);
    }
}

}