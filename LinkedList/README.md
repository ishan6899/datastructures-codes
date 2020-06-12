# Linked List

Linked List is a special kind of linear Data Strcututre which consists of 2 things- data and address of the next node. Data can be of any type and the next node point to the next element stored in  list. It is **not contigous**.<br>
Types of Linked List:
* Singular Linked List
* Doubled Linked List
* Circular Linked List

## This is how it looks like:
<code>
 struct Node
  {
  int data;
  Struct Node *next;
  }

## Lets talk about Creating a Linked List from an Array:
> Assumption:We are only given size of Array and Array.
<ol>
  
  <li>Define the Structure/Class consisting of data and next</li>
  <li>Make a few variables of type struct Node first,next,last,t(first will be pointing to first,last to last and t to current variable in loop)</li>
  
  <li>Now fill the first with first element of array and make the next point to null and first,last point to itself</li>
  <li>Now traverse through the array starting from 1st index(and not the 0th as we have already filled element).At each step
  <ul>
  <li>store data in t</li>
  <li>make the next as t</li>
  <li>make t->next as null</li>
  <li>make last->next=t</li>
  <li>make last as t</li>
  </ul>
  </ol><br>

## Some applications while traversing the Linked List(All codes are easy and are provided):
* Display All elements
* Counting the Elements 
* Sum of elements
* Finding Max element
* Searching through an element 

## Some basic Operation of Linked List:(Codes provided)
* Inserting in a Linked List

* Deleting a node in Linked List

* Reversing a Linked List

## Some other applications of Linked List:(Codes provided)
* Inserting in a Sorted Linked List
* To check if linked list is sorted
* Removing Duplicates From a sorted linked list
* Concatenating Linked List
* Merging of 2 linked list
* Checking for a loop in linked list

> ProTip: To improve linear search there are 2 ways:Move to first,transposition. Move to first means moving the required element to first so that next time it is found instantly . Transposition means moving the searched element to one place at next so that more the number of times it is searched lesser the time required to find it.

 
  
