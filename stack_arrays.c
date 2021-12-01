#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

//push
int top = -1,stack[SIZE];
void push(int ele){
    stack[++top] = ele;
    }
//POP
int pop(){
    return(stack[top--]);
    }
//PEEK
int peek(){
    return(stack[top]);
}
///DISPLAY
void display()
{   int i;
    for(i=0;i>=0;i--)
        printf("%d\n",stack[i]);
}
//MAIN
int main(){
int ch,ele;
while(1){
    printf("\n1-push\n2-pop\n3-peek\n4-display\n5-exit");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
    case 1: if (top == SIZE -1){
            printf("stack overflow");
        }
        else{
            printf("Enter the element to be inserted:");
            scanf("%d",&ele);
                push(ele);
                }
                break;
    case 2: if(top == -1){
                printf("stack underflow");
            }
            else {
                printf("deleted element is %d",pop());    
            }
            break;
    case 3:if(top == -1){
                printf("peek ele is %d",peek());
            }
    case 4:if(top == -1){
                printf("stack under flow");      
            }
            else{
                display();
            }
            break;
    case 5:exit(0);
    }
}
}

