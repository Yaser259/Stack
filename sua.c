#include<stdio.h>
#define max 5
int A[max];
int top=-1;
void push(int x){
    if(top==max-1) printf("Can't push items");
    else A[++top]=x;
}
void pop(){
    if(top==-1) printf("Can't pop items");
    else A[top--];
}
void Top(){
    printf("The top value is %d\n",A[top]);
}
void isEmpty(){
    if(top==-1) printf("The stack is empty\n");
    else printf("The stack is not empty\n");
}
void isFull(){
    if(top==max-1) printf("The stack is full\n");
    else printf("The stack is not full\n");
}
void print(){
    int i;
    printf("stack is \n");
    for(i=0;i<=top;i++) printf("%d \n",A[i]);
}
int main(){
    int n,num;
    while(1){
        printf("1.PUSH\n");
        printf("2.POP\n");
        printf("3.TOP\n");
        printf("4.EMPTYSTACK\n");
        printf("5.FULLSTACK\n");
        printf("Enter the operation: ");
        scanf("%d",&n);
        switch(n){
            case 1: printf("Enter the number: ");
                    scanf("%d",&num);
                    push(num);
                    print();
                    break;
            case 2: pop();
                    print();
                    break;
            case 3: Top();
                    break;
            case 4: isEmpty();
                    break;
            case 5: isFull();
                    break;
            default: printf("This operation not exist");
        }
    }
    
}
