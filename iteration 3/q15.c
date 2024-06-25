typedef struct node {
  int value;
  struct node* link;
} Node;

void simplify(Node *head){
    Node *current = head; 
    if (current == NULL) {
        return;
    }
    while ( current!=NULL ){
        Node *next = current->link->value;
        if (current->value == next) {
            Node *remove = current->value;
            current->link = current->link->link;
            free(remove)
        }else {
            current = current->link;
        } 
    } 
}