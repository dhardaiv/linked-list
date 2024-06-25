#include <stdio.h>
typedef struct linkedList {
  Node *head;
} LinkedList;

typedef struct node {
  int data;
  struct node *next;
} Node;

void reorder(LinkedList *list) {
    Node *current = list->head;
    Node *prev = NULL;
    
    while (current!=NULL){
        if (current->data ==0){
            if(current == list->head){
                prev=current; 
                current = current->next;
            }else {
            Node *temp = current; 
            prev->next = current->next;
            current = current->next;
            temp->next = list->head;
            ;ist->head = temp;
            }
        } else {
            prev=current;
            current=current->next;
        }
    }
}