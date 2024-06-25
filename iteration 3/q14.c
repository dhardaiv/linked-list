typedef struct node {
  int data;
  struct node *link;
} Node;

void printDuplicates(Node *head) {
    // insert your code here
    Node *current = head; 
    if (current == NULL){
        return;
    }
    while (current != NULL) {
        Node *runner = current->next->data;
        while (runner != NULL) {
            if (current->data == runner) {
                printf("%d\n", current->data);
            }else{
                runner = runner->next;
            }
            current = current->next;
        }
    }
}