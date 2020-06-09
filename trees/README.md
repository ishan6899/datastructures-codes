# Trees

## What are trees?
Trees are collection of edges and nodes. One node is root and other is divided into disjoint sets.

* Degree of a node is number of direct children
* Binary tree is a tree with degree 2

## Lets focus on Binary Tree's

### What are no. of binary trees that can be generated if no. of nodes are given?

#### For Unlabelled Nodes
* <sup>2n</sup>C<sub>n</sub>/n+1<br>
* This is also known as Catalan number

#### For labelled nodes
* Multiply Catalan Number by n! 

### Heights Vs Nodes in Binary Trees

The relation between heights and nodes is as follows:<br>
* Min nodes from a given height(n) = h+1
* Max nodes from a given height(n)= 2<sup>h+1</sup>-1

* Min height from given no. of nodes(h)=n-1
* Max height from given no. of nodes(h)=log(n+1)-1

This relation can be visualised easily

> One interesting relation in binary tree is deg(0) nodes is always equal to deg(2)nodes +1

> Strict binary tree is a binary tree in which degree can be 0 or 2 unlike regular binary tree where degree is {0,1,2}

### Representation of a Binary Tree

Binary tree can be represented by an Array or a Linked List. Lets take a look at linked representation for a while:

<code>
struct Node
{
  struct Node *lchild,
  int data,
  struct Node *rchild
}
</code>

### Creation of a Binary Tree via user Input

The code is provided in this repo of creating a tree. We would be using queue data structure also that we created earlier. 
Basic Algo is as follows:
* Import the queue file
* Make a linked structure for the tree
* Create a queue 
* First scan the root element's data
* Set the data of root element and set the left and right child as 0
* Push the root element into queue
* Now a while loop till the queue is empty
* Enter the left element and set data and parameters and push into queue
* Enter the right element and set data and parameters and push into queue
> If you'll observe closely we have made the tree by 
### Traversals of Tree
There are 4 types of tree traversals:
* Inorder(node,leftsubtree,rightsubtree)
* Preorder(leftsubtree,node,rightsubtree)
* Postorder(leftsubtree,rightsubtree,node)
These three can be done recursively and iteratively. Since this isnt tail recursion so we cant easily conveert it into loops. We would be needing stack also to convert it into loops.The codes of these traversals are self explnatatory.<br>
The fourth traversal is **Level Order**. Algorithm for that is:
* First print root element
* Push the root element into a queue
* Now a while loop till queue is empty
* Dequeue the element of queue
* Visit left child and print the element 
* Visit right child and print the element 

### Counting the nodes in a tree

### Determining the height of the tree

### Counting leaf and non leaf nodes in a tree



