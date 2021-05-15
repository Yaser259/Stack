#include <stdio.h>
#include <string.h>
#define max 20

int top = -1;
char stack[max];

void push(char s){
    top++;
    stack[top]=s;
}
void pop(){
    char y;
    y=stack[top];
    top--;
    printf("%c",y);
}
int main()
{
    char str[max];
    int i,len;
    printf("Enter the string: ");
    scanf("%c",str);
    len = strlen(str);
    for(i=0;i<len;i++){
        push(str[i]);
    }
    printf("Reversed string: ");
    for(i=0;i<len;i++){
        pop();
    }
    return 0;
}
