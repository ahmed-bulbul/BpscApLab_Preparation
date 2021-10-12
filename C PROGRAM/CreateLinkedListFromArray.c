//create linkedList from array
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;

};

void printLinkedList(struct Node *head);
struct Node *createLinkedList(int arr[],int size);
int searchLinkedList(struct Node *head, int value);
void reverseLinkedList(struct Node *head);
void insertAtBegin(struct Node *head,int data);
void insertAtTheEnd(struct Node *head,int data);


int main(){

    int a[]={5,10,30,50,60};
    struct Node *head;
    head=createLinkedList(a,5);



// traverse the linkedList
    printf("Printing the LinkedList:: \n");
    printLinkedList(head);

// search the linkedList
    // printf("Searching the LinkedList\n");
    // printf("Serach Index %d\n",searchLinkedList(searchtHead,60));

//reverse the linkedList
    // printf("Reversing the LinkedList\n");
    // reverseLinkedList(head);

//insert node at beginning of linkedList
    // printf("Insert Beggining at linked list\n");
    // insertAtBegin(head,11);

//insert node at end of linkedList  
    printf("Insert node at end of linkedList\n");
    insertAtTheEnd(head,500);    


    return 0;
}

void insertAtTheEnd(struct Node *head,int data){
    struct Node *current=head;
    while(current->next !=NULL){
        current = current->next;
    }
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;

    current->next=temp;
    //current=temp;
    printLinkedList(head);

}

void printLinkedList(struct Node *head){
    struct Node *current=head;
    while(current!=NULL){
        printf("%d->",current->data);
        current=current->next;
    }
    printf("NULL \n");
}

void insertAtBegin(struct Node *head,int data){
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;

    struct Node *newHead=temp;

    printLinkedList(newHead);

}

void reverseLinkedList(struct Node *head){

    struct Node *previous=NULL;
    struct Node *current=head;
    struct Node *next=NULL;


    while(current!=NULL){
        //store the next node in the linked
        next=current->next;
        // reverse the linked list
        current->next=previous;
        //propagate
        previous=current;
        current=next;
    }

    head=previous;

    printLinkedList(head);
}

int searchLinkedList(struct Node *head, int value){
    int index=1;
    while(head!=NULL){
        if(head->data==value){
            return index;
        }
        index++;
        head=head->next;
    }
    return -1;
}

struct Node *createLinkedList(int arr[],int size){

    struct Node *head=NULL, *temp=NULL,*current=NULL;

    int i;
    for(i=0;i<size;i++){
        temp=(struct Node *) malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;

        if(head==NULL){
            head=temp;
            current=temp;
        }else{
            current->next=temp;
            current=temp;
        }
    }

    return head;

};
