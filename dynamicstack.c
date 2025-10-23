#include<stdio.h>
#include<stdlib.h>
int top=-1;
int capacity;
int *stack;
void push();
void pop();
void display();

void main(){
    int x;
    printf("Enter the initial capacity of the stack: ");
    scanf("%d", &capacity);
    
    // Allocate initial memory for the stack
    stack = (int*)malloc(capacity * sizeof(int));
    if (stack == NULL) {
        printf("Failed to allocate memory. Exiting.\n");
        exit(1);
    }
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
                free(stack);
                exit(0);
            default :
                printf("Invalid input enter again.\n");    
        }
    }
}

void push(){
    int y;
    if(top == capacity - 1){ 
        printf("Stack is full. Resizing stack...\n");
        int newCapacity = capacity * 2; 
        
        int *temp = (int*)realloc(stack, newCapacity * sizeof(int));
        
        if (temp == NULL) {
            printf("Memory reallocation failed. Cannot push.\n");
            return; 
        }
        stack = temp;
        capacity = newCapacity;
        printf("Stack resized. New capacity is %d.\n", capacity);
    }
    
        printf("Enter the element to be pushed: ");
        scanf("%d",&y);
        top++;
        stack[top]=y;
        printf("%d was pushed into the stack.\n",y);
        
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