typedef struct node {
int value ;
struct node * link ;
} Node ;

void simplify(Node *head) {
    Node *current = head; 
    if (current ===NULL) {
        return;
    }
    while ( current->link != NULL) {
        if (current->data == current->link->data){
            Node *remove = current->link;
            current->link = current->link->link;
            free(remove);
        } else {
            current = current->link;
        }
    }
}