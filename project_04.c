// LOGIN SYSTEM (BY CHECKING USERNAME AND PASSWORD)


#include<stdio.h>
#include<string.h>

int main()
{
    char user_name[] = "rajan@408",user_name_01[50];
    int password = 5241,password_01;
    int attempts = 4, exit;

    do
    {
    
        printf("Enter Your User Name : ");
        scanf("%s", user_name_01);

        if (strcmp(user_name , user_name_01) == 0)
        {
            do
            {
                printf("Enter Your Password : ");
                scanf("%d", &password_01);

                if (password == password_01)
                {
                    printf("Successfully Logged in\n");
                    break;
                }
                else
                {
                    printf("Wrong Password...Enter Password Again \n");
                }

                attempts--;
                printf("%d Attempts Left\n", attempts);

            } while (password != password_01 && attempts >= 1);
        }
        else
        {
            printf("Wrong Username\n");
            printf(" Press ( 0 ) to Try Again \n");
            printf("Press ( 1 ) to exit login\n");
            scanf("%d",&exit);
        }

    } while (exit != 1);


    return 0;
}
