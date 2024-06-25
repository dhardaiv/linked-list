#include <stdio.h>
typedef struct node {
  int data;
  struct node *link;
} Node;

void printDuplicates(Node *head) {
  Node *current = head;

  while (current != NULL) {
    while (current->next != NULL) {
      if (current->data == current->next->data) {
        printf("%d\n", current->data);
      }

      current->next = current->next->next;
    }

    current = current->next;
  }
}