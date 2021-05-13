//DOUBT
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;
void push(int n){
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = n;
    temp->next = top;
    top = temp;
}
int Top(){
    return top;
}
void pop(){
    struct node* temp;
    if(top==NULL) return;
    temp = top;
    top = top->next;
    free(temp);
}
void reverse(char *c,int n){
    for(int i=0;i<n;i++){
        push(c[i]);
    }
    for(int i=0;i<n;i++){
        c[i] = Top();
        pop();
    }
}
void print(){
    struct node* temp = top;
    printf("Stack is ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
int main(){
    top = NULL;
    char c[50];
    printf("Enter the string: ");
    scanf("%s",&c);
    reverse(c,strlen(c));
    printf("Output: %s",c);
}
