#include<stdio.h>

int main()

{
	int arr[10], i, even_count=0,odd_count=0;
	printf("Enter Any Ten Number:\n");
	 for(i=0;i<10;i++)
	 {
	     scanf("%d",&arr[i]);	
	 }
	 
	 for(i=0;i<10;i++)
	 {
	 	if(arr[i] % 2 ==1)
	      {
	      	odd_count++;
		}
	      else
		{
		      even_count++;	
	      }	
	 }
	 
	 printf("\nCount of even number =%d\n",even_count);
	 printf("\nCount of odd number =%d\n",odd_count);
	 
	 return 0;
}






