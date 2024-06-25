Node *predecessor(Node *head, Node *searchNode) {
  Node *current;
  current = head;
  if (head == searchNode) return NULL;
  // COMPLETE THE NEXT LINE:
  while (current != NULL) {
    if (current->link == searchNode) return current;
    current = current->link;
  }
  return NULL;
}