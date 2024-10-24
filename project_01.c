// BILL SYSTEM


#include<stdio.h>

int main()
{

    printf("Bill System \n \n");
    char customer_name[50]="";
    int order;
    int quantity;
    int price = 0;
    int restart;

    do
    {
        printf("Enter your name : \n");
        scanf("%s", customer_name);

        do
        {
            printf("=============================================\n");
            printf("FOR PIZZA - 199/- PRESS ( 1 )\n");
            printf("FOR MOMO - 99/- PRESS ( 2 )\n");
            printf("FOR CHILLI PANEER - 249/- PRESS ( 3 )\n");
            printf("FOR COCA COLA - 39/- PRESS ( 4 )\n");
            printf("FOR THUMBS UP - 95/- PRESS ( 5 )\n");
            printf("FOR BILL PRESS ( 6 )\n");
            printf("=============================================\n");

            scanf("%d", &order);

            if (order < 1 || order > 6)
            {
                printf("Invalid....Try again later");
            }
            else if (order == 1)
            {
                printf("Enter Quantity : ");
                scanf("%d",&quantity);
                price += 199*quantity;
            }
            else if (order == 2)
            {
                printf("Enter Quantity : ");
                scanf("%d",&quantity);
                price += 99*quantity;
            }
            else if (order == 3)
            {
                printf("Enter Quantity : ");
                scanf("%d",&quantity);
                price += 249*quantity;
            }
            else if (order == 4)
            {
                printf("Enter Quantity : ");
                scanf("%d",&quantity);
                price += 39*quantity;
            }
            else if (order == 5)
            {
                printf("Enter Quantity : ");
                scanf("%d",&quantity);
                price += 95*quantity;
            }
            else if (order == 6)
            {
                printf("%s your ", customer_name);+
                printf("Total Amount is %d \n", price);
            }
            
        } while (order != 6);

        printf("=============================================\n");

        printf("For new user press ( 1 )\n");
        printf("For exit ( 2 )\n");
        scanf("%d", &restart);

        if (restart > 2 || restart < 1)
        {
            printf("Invalid...try again \n");
        }
        else if (restart == 1)
        {
            printf("New User \n \n");
        }
        
    } while (restart != 2);
    

    return 0;
}