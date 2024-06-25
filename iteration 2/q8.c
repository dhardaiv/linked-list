#include <stdio.h>
typedef struct node {
  int value;
  struct node *link;
} Node;

void simplify (Node *head) {
  Node *head = current; 
  if (current == NULL){
    return;
  }
  while (current->link != NULL){
    Node *next = current->link->value
    if (next == current->value){
      Node *remove = next;
      current->link = current->link->link;
      free (next);
    } else {
      current = current->link
    }
  }
}