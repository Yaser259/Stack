#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;
void push(int x){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=top;
    top=temp;
}
void pop(){
    struct node* temp = top;
    if(temp==NULL) return;
    top=temp->next;
    free(temp);
}
void display(){
    struct node* temp = top;
    printf("Stack is ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    top = NULL;
    int n,x;
    printf("How many numbers want to insert: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the number: ");
        scanf("%d",&x);
        push(x);
        display();
    }
    pop();display();
    pop();display();
    return 0;
}

