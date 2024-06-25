typedef struct node {
  int data;
  struct node *link;
} Node;

Node *search(Node *head, int key) {
  Node *current = head;
  // insert your code in the line below between the parentheses
  while (current != NULL && current->data != key) {
    current = current->link;
  }

  return current;
}