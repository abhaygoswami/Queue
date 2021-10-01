#include <stdio.h>
#define max 10
//global Declaration
int queue[max];
int front=-1,rear=-1;

void add(void);
void delete(void);
void display(void);

int main()
{
  int option,val;

  do {
    printf("\nPress 1 for ADD: ");
    printf("\nPress 2 for DELETE: ");
    printf("\nPress 3 for DISPLAY: ");
    printf("\nPress 4 for QUIT: ");
    scanf("\n%d",&option);

    switch (option) {
      case 1:add();
      break;
      case 2: delete();
      break;
      case 3: display();
      break;
    }
  } while(option!=4);
  return 0;
}

//ADD ELemenet is QUEUE

void add()
{
  int n;
  printf("\nEnter The Number: ");
  scanf("%d",&n); // take input

  if(rear==max-1)
  printf("\nStack is Overflow");
  else if(front==-1&&rear==-1)
  front=rear=0;
  else
  {
  rear++;
  queue[rear]=n;
}
}

//Delete Element

void delete()
{
  if(front==-1||front>rear)
  printf("\nUnderflow");
  else
  {
    queue[front]=NULL;
    front++;
  }
}

void display()
{
  if(front==-1||front>rear)
  printf("\nUnderflow");
  else
  {
    for(int i=front;i<=rear;i++)
    printf("\n%d",queue[i] );
  }
}
