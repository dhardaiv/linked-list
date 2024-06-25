#include <stdio.h>
typedef struct node {
  int data;
  struct node *link;
} Node;

void printDuplicates(Node *head) {
  Node *current = head; //start at head 

  while (current != NULL) { //check null
    Node *runner = current->next; //create a runner to check two values at once
    while (runner != NULL) {
      if (current->data == runner->data) { //check if eequal
        printf("%d\n", current->data);//print out redundant value
      }
      current->next = runner->next;
    }
    current = current->next;
  }
}