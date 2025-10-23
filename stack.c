#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int top=-1,stack[MAX];

void push();
void pop();
void display();

void main(){
    int x;
    while(1){
        printf("Enter the operation number:\n");
        printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&x);
        switch(x){
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4: 
                exit(0);
            default :
                printf("Invalid input enter again.\n");    
        }
    }
}

void push(){
    int y;
    if(top==MAX-1){
        printf("Stack Overflow.\n");
    }
    else{
        printf("Enter the element to be pushed: ");
        scanf("%d",&y);
        top++;
        stack[top]=y;
        printf("%d was pushed into the stack.\n",y);
        }
}

void pop(){
    if(top==-1){
        printf("Stack Underflow.\n");

    }
    else{
        printf("%d element was deleted from the stack.\n",stack[top]);
        top--;
    }
}
void display(){
    if(top == -1){
        printf("Stack Empty.\n");

    }
    else{
        printf("Stack elements from top to bottom:\n");
        for(int i =top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}