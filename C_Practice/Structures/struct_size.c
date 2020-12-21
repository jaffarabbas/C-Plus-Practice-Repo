#include <stdio.h>
#include <stdlib.h>
//struct 

struct Node{
    int data;
    struct Node * next;
};

void test(){
    struct Node * head;
    head = (struct Node *) malloc(sizeof(struct Node));
    head->data=3;
    head->next = 4;
    head->data = head->next;
    printf("%d",head->data);
}

int main(int argc, char const *argv[]){
test();
}

