#include <stdio.h>
#include <stdlib.h>

//struct for link list node

struct Node{
    int data;
    struct Node * next;
};

//**************Insert at first**************
struct Node * insertAtFirst(struct Node * head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

//**************Insert at Index**************
struct Node * InsertAtIndex(struct Node *head,int data,int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    int count = 0;
    while(count!=index-1){
        temp = temp->next;  
        count++;
    }
    ptr->data = data;
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

//**************Insert at End**************
struct Node * InsertAtEnd(struct Node *head,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    ptr->data=data;
    temp->next=ptr;
    ptr->next=NULL;
    return head;
}

//**************Insert After Node**************
struct Node * InsertAfter(struct Node *head,struct Node *previous,int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = previous->next;
    previous->next=ptr;
    return head;
}

//**************Print Node**************
void PrintList(struct Node* node){
    while(node!=NULL){
        printf("Element : %d\n",node->data);
        node = node->next;
    }
}

void LinkedList(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * forth;
    //Alocating memeory in heap
    head = (struct Node *) malloc( sizeof(struct Node));
    second = (struct Node *) malloc( sizeof(struct Node));
    third = (struct Node *) malloc( sizeof(struct Node));
    forth = (struct Node *) malloc( sizeof(struct Node));

    //linking 
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next =forth;

    forth->data = 4;
    forth->next = NULL;

    printf("Simple Insertion : \n");
    //Print Function before insert at first
    PrintList(head);
    //Insert at begain
    head = insertAtFirst(head,55);
    printf("\nInset at First Insertion : \n");
    //Print after insert at First
    PrintList(head);
    //Insert At any position
    head = InsertAtIndex(head,69,3);
    printf("\nInset at Any Index Insertion : \n");
    PrintList(head);
    //Insert At any position
    head = InsertAtEnd(head,3);
    printf("\nInset at Last Index  : \n");
    PrintList(head);
    //Insert After Node
    head = InsertAfter(head,third,555);
    printf("\nInset After an Index  : \n");
    PrintList(head);
}

void test(){
    //Linked list function
    LinkedList();
}

int main(int argc, char const *argv[]){
test();
}
