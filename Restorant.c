#include<stdio.h>
int main()
{
    int menu,qunt,tot1=0,tot2=0,tot3=0,tot4=0,total,dummy;
    char ch;
    do
    {
    	  printf("Task : 1 : \n \n");
    	  printf("Accomplish below task using Function \n");
        printf("\n==============Welcome To Tops Restaurant================\n");
        printf("\nSrno.\t Item\t\t Price");
        printf("\n1 \t Pizza \t\t 90/-");
        printf("\n2 \t Burgur\t\t 89/-");
        printf("\n3 \t Pani-Puri\t 100/-");
        printf("\n4 \t Dosa \t\t 80/-");
        printf("\n\nEnter Your Choice from Choice :");
        scanf("%d",&menu);
        switch(menu)
        {
           case 1 :
             printf("Your Item : Pizza");
             printf("\nEnter Quantity :");
             scanf("%d",&qunt);
             tot1 = 90*qunt;
             printf("Total Price :%d/-",tot1);
             break;

           case 2 :
             printf("Your Item : Burgur");
             printf("\nEnter Quantity :");
             scanf("%d",&qunt);
             tot2 = 89*qunt;
             printf("Total Price :%d/-",tot2);
             break;

           case 3 :
             printf("Your Item : Pani-Puri");
             printf("\nEnter Quantity :");
             scanf("%d",&qunt);
             tot3 = 100*qunt;
             printf("Total Price :%d/-",tot3);
             break;

           case 4 :
             printf("Your Item : Dosa");
             printf("\nEnter Quantity :");
             scanf("%d",&qunt);
             tot4 = 80*qunt;
             printf("Total Price :%d/-",tot4);
             break;

           default:
              printf("\nEnter Valid Choice..!");
              break;
        }
       printf("\n\nDo You Want Anything else ? ['y/n'] :");
       scanf("%d",&dummy);
       scanf("%c",&ch);
       if(ch =='n')
       {
           printf("\nThank you");
           total = tot1+tot2+tot3+tot4;
           printf("\nYour total Bill : %d rs.",total);
           printf("\n----------------------------------");
       }
    }while(ch == 'y');


}
