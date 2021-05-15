#include<stdio.h>
#include<ctype.h>

char stack[100];
int top = -1;

void push(char s){
    if(top==100-1){
        printf("stack is full");
    }else{
        stack[++top] = s;
    }
}
int pop(){
    if(top==-1){
        printf("stack is empty");
    }else{
        return stack[top--];
    }
}
int prior(char f){
    if(f=='(') return 0;
    else if(f=='+'||f=='-') return 1;
    else if(f=='*'||f=='/') return 2;
    return 0;
}
int main(){
    char exp[100];
    char *e,x;
    printf("Enter the infix :: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }else if(*e == '('){
            push(*e);
        }else if(*e == ')'){
            while((x=pop())!='('){
                printf("%c",x);
            }
        }else{
            while(prior(stack[top])>=prior(*e)){
                printf("%c",pop());
            }
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf("%c",pop());
    }return 0;
}
