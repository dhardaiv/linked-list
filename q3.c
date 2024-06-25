#include <stdio.h>
typedef struct node {
  int data;
  struct node *link;
} Node;

void printDuplicates(Node *head) {
  Node *current = head; //start at head 

  while (current != NULL) { //check null
    Node *runner = current->next;
    while (runner != NULL) {
      if (current->data == runner->data) {
        printf("%d\n", current->data);
      }

      current->next = runner->next;
    }

    current = current->next;
  }
}