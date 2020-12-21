#include <stdio.h>
#include <stdlib.h>

//struct for link list node

struct Node{
    int data;
    struct Node * next;
};


//**************Delete First Node**************
struct Node * DeleteFirstNode(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

//**************Delete Node At any Index**************
struct Node * DeleteAtIndex(struct Node * head,int index){
    struct Node * ptr = head;
    struct Node *ForwardPtr = head->next;
    for (int i = 0; i < index-1; i++)
    {
        ptr = ptr->next;
        ForwardPtr = ForwardPtr->next;
    }
    ptr->next = ForwardPtr->next;
    free(ForwardPtr);
    return head;
}

//**************Delete Node At The End**************
struct Node * DeleteAtEnd(struct Node * head){
    struct Node * ptr = head;
    struct Node *ForwardPtr = head->next;
    while(ForwardPtr!=NULL)
    {
        ptr = ptr->next;
        ForwardPtr = ForwardPtr->next;
    }
    ptr->next = NULL;
    free(ForwardPtr);
    return head;
}

//**************Delete Node With Value**************
struct Node * DeleteWithValue(struct Node * head,int value){
    struct Node * ptr = head;
    struct Node *ForwardPtr = head->next;
    while(ForwardPtr->data!=value && ForwardPtr->next!=NULL)
    {
        ptr = ptr->next;
        ForwardPtr = ForwardPtr->next;
    }
    if(ForwardPtr->data == value){
        ptr->next = ForwardPtr->next;
        free(ForwardPtr);
    }
    return head;
}


//**************Print Node**************
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
    struct Node * forth;
    struct Node * fifth;
    //Alocating memeory in heap
    head = (struct Node *) malloc( sizeof(struct Node));
    second = (struct Node *) malloc( sizeof(struct Node));
    third = (struct Node *) malloc( sizeof(struct Node));
    forth = (struct Node *) malloc( sizeof(struct Node));
    fifth = (struct Node *) malloc( sizeof(struct Node));
    //linking 
    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next =forth;
    
    forth->data = 5;
    forth->next =fifth;

    fifth->data = 6;
    fifth->next = NULL;

    //printing  adding head first beacuse list staring from head
    printf("Before Deleteing Node : \n");
    PrintList(head);
    //Delete First node
    head = DeleteFirstNode(head);
    printf("After Deleteing First Node : \n");
    PrintList(head);
    //Delete At any Node 
    head = DeleteAtIndex(head,2);
    printf("After Deleteing Any Index Node : \n");
    PrintList(head);
    //Delete End Node 
    head = DeleteAtEnd(head);
    printf("After Deleteing End  Node : \n");
    PrintList(head);
    //Delete Node with Value 
    head = DeleteWithValue(head,3);
    printf("After Deleteing Whith Value Node : \n");
    PrintList(head);
}

int main(int argc, char const *argv[]){
test();
}
