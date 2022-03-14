/*
   * Program :Stack data structure using array
   * Language : C
   */

  #include<stdio.h>

  #define size 5

           
 int arr[size];
 int top = -1;

 
  int isStackFull()
  {
      if(top == size - 1)
          return 1;
      return 0;
  }

  void push(int val)
  {
      
      if(isStackFull())
          printf("Unable to push %d as the Stack Is Full\n",val);
      else
      {
        
          ++top;
          
          arr[top]=val;
      }

  }

  int isStackEmpty()
  {
      if(top == -1)
          return 1;
      return 0;
  }

  void pop()
  {
      
      if(isStackEmpty())
          printf("Stack Is Empty\n");
      else
      {
          
          printf("Popped element = %d\n",arr[top]);
          
          top--;
      }

  }

  int main()
  {
  	
     int num;
     int choice;
     
     
     
     while(1)
     {
     	 
     	printf("Enter choice..\n");
     	printf("1..To insert element into stack\n");
     	printf("2.. To delete element into stack\n");
     	printf("3..Exit\n\n");
     	scanf("%d",&choice);
     	switch(choice)
     	{
     		case 1:
     			printf("Enter the number to insert into stack::");
  				scanf("%d",&num);
       			push(num);
       			break;
       		case 2:
       			pop(); 
       		case 3:
       			return 0;
       			
       		default:
       			printf("Plz enter valid choice..");
		}
	 }
                     
       return 0;
  }
