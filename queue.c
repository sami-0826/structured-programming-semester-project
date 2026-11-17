#include <stdio.h>
#include <stdlib.h>
int main(){
  int n, rear=-1, front=-1;
  printf("Enter the size of QUEUE: ");
  scanf("%d",&n);
  int queue[n], max_size=n-1;

  while (1){
    printf("\nPress 1 for ENQUEUE\nPress 2 for DEQUEUE\nPress 3 for OUTPUT\nPress Others Key to Terminate\n");
    int choice;
    printf("Eneter Your Choice: ");
    scanf("%d",&choice);

    if (choice==1){
      if (rear==max_size){
        printf("Overflow!!!\n");
      }

      else {
        int in_value;
        printf("Enter value to insert: ");
        scanf("%d",&in_value);

        if (rear==-1){
          rear=0;
          front=0;
          queue[rear]=in_value;
          printf("Enqueue Successfull\n");
        }

        else{
          rear++;
          queue[rear]=in_value;
          printf("Enqueue Successfull\n");
        }
      }
    }

    else if (choice==2){
      if (front==-1 || front>rear){
        printf("Underflow!!!\n");
      }

      else {
        queue[front]=0;
        front++;
        printf("Dequeue Successfull!!!\n");
      }
    }

    else if (choice==3){
      printf("Elements inside the Queue are: ");
      for (int i=front; i<=rear; i++){
        printf("%d ",queue[i]);
      }
    }

    else
      exit(0);
  }
}