void remove (LinkedList *list, int value){
    LinkedList *current= head;
    if (current->next == NULL && current->data != value) {
        return;
    }
    while (current!=value){
        current = current->next;
    }
    if (current->data == value){
        LinkedList *remove = current;
        tail = current->next->next;
        free(remove);
    }
}