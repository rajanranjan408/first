// STONE PAPER SCISSOR GAME


#include <stdio.h>
#include <stdlib.h> //The stdlib.h header file is used to include the command that generates random numbers.
#include <time.h> //The time.h header file is used to include the comand that generates time seed for generating different random numbers.

int game(); //Game function prototype

int main()
{
    printf("\n \n W E L C O M E    T O   T H E    G A M E \n \n");

    printf(" S T O N E    P A P E R   S C I S S O R \n \n");

    //Programme to run in a loop untill palyer use to exit
    
    int play_or_exit;

    do
    {

    //Programme to take players choice to play or exit.

        printf("To play press (1)\n");
        printf("To exit the game (2)\n\n");

        scanf("%d",&play_or_exit);

        if (play_or_exit == 1)
        {
            printf("\nYou chose to play the game!\n\n");
            game();
        }
        else if (play_or_exit != 1 && play_or_exit != 2)
        {
            printf("\nInvalid choice. Please try again.\n\n");
        }
        else
        {
            printf("\nYou exited the game.\n\n");
        }
        
    } while (play_or_exit != 2);
    

    return 0;

}

int game() //Game function definition
{

//Programme to generate random number between 1 to 3.

    srand(time(0));  // This is used to give a seed to generate diffrent random numbers everytime.

    int computer = rand()%3+1;   // This is used to generate random number within 1 to 3.

//Programme to take players move.

    printf("\n \n       YOUR TURN  \n \n");

    int players_turn;

    printf("Press ( 1 ) for STONE\n");
    printf("Press ( 2 ) for PAPER\n");
    printf("Press ( 3 ) for SCISSIOR\n\n");

    scanf("%d",&players_turn);

    if (players_turn < 1 || players_turn > 3)
    {
        printf("Invlaid option...try again\n\n");
    }

//Programme to display computer move.

    if (computer == 1)
    {
        printf("\nComputer chosses : Stone \n\n");
    }
    else if (computer == 2)
    {
        printf("\nComputer chosses : Paper \n\n");
    }
    else if (computer == 3)
    {
        printf("\nComputer chosses : Scissor \n\n");
    }

//Programme to display player move.

    if (players_turn == 1)
    {
        printf("Player chosses : Stone \n\n");
    }
    else if (players_turn == 2)
    {
        printf("Player chosses : Paper \n\n");
    }
    else if (players_turn == 3)
    {
        printf("Player chosses : Scissor \n\n");
    }

//Programme to check who wins.

    if (players_turn == computer)
    {
        printf("Match is a Draw \n \n");
    }
    else if (players_turn == 1 && computer == 2)
    {
        printf("You lose the Match \n \n");
    }
    else if (players_turn == 2 && computer == 3)
    {
        printf("You lose the Match \n \n");
    }
    else if (players_turn == 3 && computer == 1)
    {
        printf("You lose the Match \n \n");
    }
    else
    {
        printf("You Won the match \n \n");
    }
}
