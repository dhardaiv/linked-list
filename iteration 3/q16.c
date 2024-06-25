typedef struct node {
  int data;
  struct node *next;
} Node;
typedef struct linkedList {
  Node *head;
} LinkedList;

void reorderAlternative(LinkedList *list) {
    Node *current = list->head;
    Node *prev = NULL;
    while (current != NULL) {
        if (current->data =0){
            if (current == list->head) {
                prev = current;
                current = current->next;
            } else {
                Node *temp = current; 
                prev->next = current->next->next;
                current = current->next;
                temp->next = list->head;
                list->head = temp;
            }
        }else {
            prev = current;
            current = current->next;
        }
    }
}