//
//  main.c
//  heap
//
//  Created by Ishan Arora on 04/04/20.
//  Copyright © 2020 Ishan Arora. All rights reserved.
//

#include <stdio.h>


// This function is used to insert one element at a time in a heap.
// Check the readme of this section for the detailed logic of insert in simple english
void Insert(int A[],int n)
{
    int temp,i=n;
    temp=A[i];
    
    while(i>1 && temp> A[i/2])
    {
        A[i]=A[i/2];
        i=i/2;
    }A[i]=temp;
    
}
// Deleting from a heap
// Check the readme of this section for the detailed logic of delete in simple english

int Delete(int A[], int n)
{
    int x,i,j;
    //Storing root element in a variable (This is the element getting deleted)

    int val=A[1];
    
    // Bringing the last element and making it as root
    A[1]=A[n];
   
    // This is the parent element(Root in this case)
    i=1;
   // This is the first child
    j=2*i;
    
    while(j<n-1)
    {
        int temp;
        // Selecting the bigger child out of the 2 childs of a parent
        if(A[j+1]>A[j])
        {
            j=j+1;
        }
        
        if(A[i]<A[j])
        {
            //swapping the parent with the bigger of children
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            
            // New parent
            i=j;
            //New child
            j=2*j;
            
        }
        else{
            break;
        }
        
}
    
    return val;

    
}

int main(int argc, const char * argv[]) {
    
    //First element of array as 0 as we want the index to start from 1.
    //Lets assume that we have a heap of size 1 consisting of only 10
    int H[]={0,14,15,5,20,30,8,40};
    int i;
     // For loop from 2 becuase firstly index is starting from one and secondly we have a heap of size one already.So we have to insert elements from 15 till 40
    for(i=2;i<=7;i++)
    {
        Insert(H,i);
        
    }
//for(i=7;i>1;i--)
//    {
//    Delete(H,i);
//    }
    for(i=1;i<=7;i++)
    printf("%d ",H[i]);
    printf("\n");
return 0; }
    
    
    // insert code here...
