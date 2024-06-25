typedef struct node {
    int data ;
    struct node * next ;
} Node ;
typedef struct linkedList {
    Node * head ;
} LinkedList ;

void fixOrder (LinkedList *list) {
    Node *current= list->head, *prev - NULL;

    if (current == NULL || current->next == NULL) {
        return; 
    }

    while (current->next != NULL && (current->next->data > current->data)) {
        prev = current; 
        current = current->next;
    }
}