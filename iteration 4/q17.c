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
    if (current->next !=NULL) {
        if (prev != NULL) {
            prev->next = current->next;
            current->next = current->next->next;
            prev->next->next = current; 
        } else {
            list->head = current->next;
            current->next = current->next->next;
            list->head->next = current;
        }
    }
}
