#include <iostrem>
/* Write a C function, called buildJoinedList, that takes
two linked lists called firstList and secondList as its 
parameters, and returns a new list that joins the two 
lists, with secondList at the front. Both firstList and 
secondList are pointers to the first node of a linked list. 
The function should return a pointer to a new list that 
is dynamically allocated.*/
typedef struct node {
  int data;
  struct node *next;
} Node;

Node *buildJoinedList(Node *firstList, Node *secondList) {
    
}