# Heap

## What is heap
Heap is basically a complete binary tree generally implemented using array.
By complete I mean that the array that we are using dosent have any empty spaces in between.
Moreover if the parent node is at ith index this means its children will be at 2*i and 2*i+1 . 

## Types of Heap
Heap is generally of 2 types 
* Min Heap 
* Max Heap

In Min heap the every parent is smaller than its child and further all the descandants.
In Max heap the every parent is greater than its child and further all the descandants.

## Purpose of Heap

Heaps are useful for implementing priority queues and useful in Heap Sort.
Not useful for searching.
Height of heap is always in order of log(n)

## Logic for inserting an element in the heap(Let's take MAX HEAP)

Heap follows in place insertion array insertion.Which means no need of creating a new array.
If the array is empty then the first element is the heap itself.
After that when inserting the subsequent elements.
Put the element to be inserted in next index of array (i.e the nth position)
Compare the element with its parent(n/2).If the child is greater then replace it.
Repeat the process until the parent is 1st index or the child is smaller than the parent.

## Logic for deleting the element in heap(Lets again take MAX HEAP)

In heap always the root node is deleted.
Then what to do after that so that it remain a valid heap?
Well...
1)Bring the last element to the root.
2)Compare this  element with its children
3)If this element is greater swap it with the greater of the 2 children.
Repeat this process till the child is less than the element or till we reach the last child.

## Heap Sort

Heap sort basically refers to :
1)Creating heap of n elements
2)Deleting these elements one by one

Time complexity is O(nlog(n)) as both the process takes nlog(n) time given the fact height is order of log(n) and we are doing for n elements.

## Fun Fact

During insertion we are going from leaf towards the root 
During deletion we are going from root towards leaf.