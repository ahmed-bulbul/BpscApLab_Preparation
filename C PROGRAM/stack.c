
#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top=-1;

void push(int x){
    if(top<(CAPACITY-1)){
        top=top+1;
        stack[top]=x;
        printf("Successfully added item %d\n",x);

    }else{
        printf("Exception: Stack Overflow. Can not insert item %d\n",x);
    }
}

int peek(){

    if(top>=0){
        return stack[top];
    }else{
        printf("Stack is empty!");
        return -1;
    }
}

int pop(){
    if(top>=0){
        int val= stack[top];
        top=top-1;
        return val;
    }
    return -1;
}

int main(){

    push(40);
    push(50);
    push(60);
    printf("Peek() returns  : %d \n",peek());
    printf("POP() %d \n",pop());
    push(40);
    pop();
    push(99);
    push(100);
    printf("Current Stack is :: \n");
    for(int i=2;i>=0;i--){
        printf("|_%d_|\n",stack[i]);

    }

}
