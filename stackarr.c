#include<stdio.h>
#include<stdlib.h>

#define n 5
int top=-1;
int stack[n];

void push()
{	
	int x;
	printf("enter element to push:");
	scanf("%d",&x);
	if(top==n-1){
		printf("overflow!!");
	}
	else{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
		printf("underflow!!");
	else{
		int item;
		item=stack[top];
		top--;
		printf(" %d popped\n",item);
	}
}
void peek()
{
	if(top==-1)
		printf("stack empty");
	else{
		printf("top element is:%d",stack[top]);
	}
}
void display()
{
	if(top==-1){
		printf("stack empty");}
	else{
		int i;
		for(i=top;i>=0;i--)
			printf("|%d|\n",stack[i]);}
}
void main()
{
        int c;
        do
        {
      
        printf("\n 1.PUSH 2.POP 3.PEEK 4.DISPLAY 5.EXIT\n");
        printf("enter your choice:  ");
        scanf("%d",&c);
      
        switch(c)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                display();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("THANK YOU!!\n");
                exit(0);
            default:
                printf("Invalid choice !!\n TRY AGAIN\n");
        }
        }while(c!=0);
      
}
   	
		
