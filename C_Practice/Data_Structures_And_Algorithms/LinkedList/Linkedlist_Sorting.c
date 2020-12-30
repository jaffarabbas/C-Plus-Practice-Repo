#include <stdio.h>
#include <stdlib.h>



//struct 
struct Node{
    int data;
    struct Node * next;
};

struct Node *firstNode;

void CreateLinkList(int NumberOfNodes){
    struct Node *newNode;
    struct Node *currentNode;
    int nodeData;
    int nodeCtr;

    firstNode = (struct Node *) malloc( sizeof(struct Node));
    if(firstNode == NULL){
        printf("Memory Error!!");
    }else{
        printf("Elements of LinkedList : \n");
        scanf("%d",&nodeData);

        firstNode->data = nodeData;
        firstNode->next = NULL;

        currentNode = firstNode;

        for(nodeCtr = 2;nodeCtr <=NumberOfNodes;nodeCtr++){
            newNode = (struct Node *) malloc( sizeof(struct Node));
            if(newNode == NULL){
                printf("Memory Error!!");
                break;
            }else{
                scanf("%d",&nodeData);
                newNode->data = nodeData;
                newNode->next = NULL;

                currentNode->next = newNode;
                currentNode = currentNode->next;
            }
        }
    }
}

void SortLinkList(int NumberOfNodes){
    struct Node *currentNode;
    struct Node *newNode;
    int nodeCtr;
    int ctr;
    int nodeDataCopy;
    for(nodeCtr = NumberOfNodes-2;nodeCtr>=0;nodeCtr--){
        currentNode = firstNode;
        newNode = currentNode->next;
        for(ctr = 0;ctr<=nodeCtr;ctr++){
            if(currentNode->data > newNode->data){
                nodeDataCopy = currentNode->data;
                currentNode->data = newNode->data;
                newNode->data = nodeDataCopy;
            }

            currentNode = newNode;
            newNode = newNode->next;
        }
    }
}

void DisplayList(){
    struct Node * currentNode;

    currentNode = firstNode;
    while(currentNode!=NULL){
        printf("%d ",currentNode->data);
        currentNode = currentNode->next;
    }

}

void LinkedList(){
    int numberOfNode;
    firstNode = NULL;
    printf("Number of Element in A List : ");
    scanf("%d",&numberOfNode);
    CreateLinkList(numberOfNode);
    printf("\nBefore sorting\n");
    DisplayList();
    SortLinkList(numberOfNode);
    printf("\nAfter Sorting\n");
    DisplayList();
}


void test(){
    LinkedList();
}

int main(int argc, char const *argv[]){
test();
}
