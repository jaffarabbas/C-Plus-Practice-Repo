#include <stdio.h>
#include <stdlib.h>

//Simple Link List Example 1

//struct for link list node

struct Node{
    int data;
    struct Node * next;
};

void PrintList(struct Node* node){
    while(node!=NULL){
        printf("Element : %d\n",node->data);
        node = node->next;
    }
}

void test(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    //Alocating memeory in heap
    head = (struct Node *) malloc( sizeof(struct Node));
    second = (struct Node *) malloc( sizeof(struct Node));
    third = (struct Node *) malloc( sizeof(struct Node));
    //linking 
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next =NULL;

    //printing  adding head first beacuse list staring from head
    PrintList(head);
}

int main(int argc, char const *argv[]){
test();
}
