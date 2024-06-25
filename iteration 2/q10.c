void remove (LinkedList *list, int value){
    LinkedList *current= head;
    if (current->next == NULL && current->data != value) {
        return;
    }
    while (current!=value){
        current = current->next;
    }
    if (current->data == value){
        Node *remove = current;
        if (current->next->next != NULL){
            tail = current->next->next;
        }
        free(remove);
    }
}