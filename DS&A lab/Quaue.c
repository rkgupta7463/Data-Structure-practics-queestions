/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define max 10
#include <stdio.h>
#include<stdlib.h>
void rear(int);
void front();
void show();

int queue[max];
int f=-1,r=-1;

int main()
{
    int ch , data;
    do{
         printf("\n1 for push\n2 for pop\n3 for show\n");
         printf("Enter ur choice:\n");
         scanf("%d",&ch);
         
         switch(ch){
             case 1:
             printf("Input the data for insertion ini queue\n");
             scanf("%d",&data);
             rear(data);
             break;
             
             case 2:
             front();
             break;
             
             case 3:
             show();
             break;
             
             case 4:
             printf("Exit!!");
             exit(0);
             break;
             
             default:printf("Invalid option");
             break;
         }
    }while(ch>=1 & ch<=4);
    return 0;
}

void rear(int data){
    if(r == max-1){
        printf("Queue is empty");
    }
    else{
        if(f==-1){
            f=0;
        }
        r++;
        queue[r]=data;
    }
}

void front(){
    if(f==max-1 && r == max-1){
        printf("Queue is empty");
    }
    else{
        printf("%d this number is deleted",queue[f]);
        f++;
    }
}

void show(){
    if(f==-1){
        printf("Queue is empty");
    }
    else{
        if(f>=0){
        for(int i =f; i<= r; i++){
            printf("|%d|\t",queue[i]);
        }
       }
    }
}