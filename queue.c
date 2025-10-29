#include<stdio.h>
#define MAX 5
int queue[MAX];
int front=-1,rear=-1;

void insert(int n){
    if(rear==MAX-1){
        printf("Queue Full");
    }
    else{
        if(front ==-1){
            front =0;
        }
        rear=rear+1;
        queue[rear]=n;
        printf("Inserted %d\n",queue[rear]);
    }
}

void delete(){
    if(front==-1 ||  front >rear){
        printf("Stack empty");
    }
    else{
        printf("Deleted :%d\n",queue[front]);
        front=front+1;
    }
}
void display(){
    if(front==-1 ||  front >rear){
        printf("Stack empty\n");
    }
    else{
        for(int i =front; i<=rear ; i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
}
int main(){
    insert(10);
    insert(20);
    delete();
    display();
    return 0;
}