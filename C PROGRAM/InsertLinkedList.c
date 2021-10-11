#include<stdio.h>
#include<stdlib.h>

struct Node{

    int data;
    struct Node *next;
};

void *insertToLinkedList(int data);



int main(){
    insertToLinkedList(3);
    insertToLinkedList(4);
    insertToLinkedList(5);
    insertToLinkedList(6);
    insertToLinkedList(7);
    insertToLinkedList(8);
    printf("NULL");



    return 0;
}
void *insertToLinkedList(int data){

    struct Node *head=NULL;
    struct Node *temp=NULL;
    struct Node *current=NULL;

    temp=(struct Node *) malloc(sizeof(struct Node));

    temp->data=data;
    temp->next=NULL;

    if(head==NULL){

        head=temp;
        current=temp;

    }else{
        current->next=temp;
        current=temp;
    }

    while(head!=NULL){
        printf("%d->",head->data);
        head=head->next;
    }


};

