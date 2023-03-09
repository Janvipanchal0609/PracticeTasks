#include<stdio.h>

int main()

{
	int a,b;
	int ch;
	char choice;
	
	
      printf("Task : 2 : \n \n");
      do
	{
      printf("=====================Choice Board=======================\n\n");
      printf("\t\t 1.  Addition\n");
      printf("\t\t 2.  Subtraction\n");
      printf("\t\t 3.  Multiplication\n");
      printf("\t\t 4.  Divition\n");
      printf("\t\t 5.  Modulo\n");
      printf("\t\t 6.  Exit\n");
      
      
      printf("\nEnter Your choice :");
      scanf("%d",&ch);
      printf("Enter two number:");
      scanf("%d %d",&a,&b);
      switch(ch)
      {
      	case 1:
      		printf("Addition of given two number : %d",a+b);
      		break;
      	case 2:
      		printf("Subtraction of given two number : %d",a-b);
      		break;
      	case 3:
      		printf("Multiplication of given two number : %d",a*b);
      		break;
      	case 4:
      		printf("Division of given two number : %d",a/b);
      		break;
      	case 5:
      		printf("Modulo of given two number : %d",a%b);
      		break;
      	case 6:
      		printf("Exit....");
      	default:
      		printf("Enter Correct choice.");
      		break;
	   }  
	   printf("\nDo you want to continue ? [y/n]:");
	   scanf("%c",&choice);
     }while(choice == 'y');
	return 0;
}
