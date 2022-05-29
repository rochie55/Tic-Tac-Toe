#include <stdio.h>
#include <stdlib.h>

//Game Tic Tac Toe ini dibuat oleh Ronald Richie Huang / NIM 2440019371 

char square[10] = { 'o', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I' };

int checkwin();
void board();

void title(){
	system("CLS");
	printf("\033[0;33m");
	printf("  _______   _____   _____  \n");
	printf(" |__   __| |_   _| / ____| \n");
	printf("    | |      | |   | |      \n");
	printf("    | |      | |   | |      \n");
	printf("    | |     _| |_  | |____   \n");
	printf("    |_|    |_____| \\_____|  \n");
	printf("\033[0;34m");
	printf("  _______            _____  \n");
	printf(" |__   __|   /\\     / ____| \n");
	printf("    | |     /  \\    | |      \n");
	printf("    | |    / /\\ \\   | |      \n");
	printf("    | |   / ____ \\  | |____   \n");
	printf("    |_|  /_/    \\_\\ \\_____|   \n");
	printf("\033[0;31m");
	printf("  _______    ____    ______ \n");
	printf(" |__   __|  / __ \\  |  ____|\n");
	printf("    | |    | |  | | | |__   \n");
	printf("    | |    | |  | | |  __|  \n");
	printf("    | |    | |__| | | |____ \n");
	printf("    |_|     \\____/  |______|\n\n\n\n");
	printf("\033[0;00m");
	
}

int main(){
	judul :
	square[1] = 'A';
	square[2] = 'B';
	square[3] = 'C';
	square[4] = 'D';
	square[5] = 'E';
	square[6] = 'F';
	square[7] = 'G';
	square[8] = 'H';
	square[9] = 'I';
	title();
	printf("\033[1;34m");
	printf("Are you ready? (Y/N) : ");
	char a;
	option : 
	scanf("%c", &a);
	
	getchar();
	if(a == 'Y'|| a == 'y') {
		printf("\n\nWell, what are we waiting for?\nLet's get this party started!\n");
		printf("Press enter to continue!");
		getchar();
		int player = 1, i;
    	char mark,choice;
    do{
    	system("CLS");
        board();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a letter that you desire! :  ", player);
        scanf("%c", &choice);
        if(choice >= 'A' && choice <= 'Z'){
        	choice += 32;
		}
        getchar();
        

        mark = (player == 1) ? 'X' : '0';

        if (choice == 'a' && square[1] == 'A')
            square[1] = mark;
            
        else if (choice == 'b'  && square[2] == 'B')
            square[2] = mark;
            
        else if (choice == 'c'  && square[3] == 'C')
            square[3] = mark;
            
        else if (choice == 'd'  && square[4] == 'D')
            square[4] = mark;
            
        else if (choice == 'e'  && square[5] == 'E')
            square[5] = mark;
            
        else if (choice == 'f'  && square[6] == 'F')
            square[6] = mark;
            
        else if (choice == 'g'  && square[7] == 'G')
            square[7] = mark;
            
        else if (choice == 'h'  && square[8] == 'H')
            square[8] = mark;
            
        else if (choice == 'i'  && square[9] == 'I')
            square[9] = mark;
            
        else
        {
            printf("Sorry, that's an invalid move. Try choosing another letter :(\n");
            player--;
            getchar();
        }
        i = checkwin();

        player++;
    	}while (i ==  - 1);
    	
    	system("CLS");
    	board();
    
    	if (i == 1)
        	printf("==>\aCongratulations, Player %d win! \n", --player);
    	else
        	printf("==>\aAww shucks, Game draw!\n");

    	
    	kembali :
		char again;
    	printf("Do you want to play again? You will be taken back to the title screen if you want to play again. [Y/N] : ");
    	scanf("%c",&again);
    	getchar();
    	if(again == 'Y'|| again == 'y'){
    		goto judul;
		}
		else if(again == 'N' || again == 'n'){
			printf("Thanks for playing!\n");
  	printf("   _____                 _   _            			\n");
 	printf("  / ____|               | | | |         				\n");
	printf(" | |  __  ___   ___   __| | | |__  _   _  ___ 			\n");
	printf(" | | |_ |/ _ \\ / _ \\ / _` | | '_ \\| | | |/ _ \\		\n");
 	printf(" | |__| | (_) | (_) | (_| | | |_) | |_| |  __/	\n");
    printf("  \\_____|\\___/ \\___/ \\__,_| |_.__/ \\__, |\\___|	\n");
    printf("                                    __/ |     	\n");
    printf("                                   |___/  		\n");
		}
		else{
			goto kembali;
		}
	}
	else if(a == 'N' || a == 'n' ){
		printf("Then why did you open this program??? Get out! >:( ");	
	}
	
	while( a != 'Y' && a != 'N' && a != 'y' && a != 'n'){
		printf("Please input either Y or N : \n");
		goto option;
	}
	return 0;
}

int checkwin()
{
    if (square[1] == square[2] && square[2] == square[3])
        return 1;
        
    else if (square[4] == square[5] && square[5] == square[6])
        return 1;
        
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;
        
    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
        
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
        
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;
        
    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
        
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;
        
    else if (square[1] != 'A' && square[2] != 'B' && square[3] != 'C' &&
        square[4] != 'D' && square[5] != 'E' && square[6] != 'F' && square[7] 
        != 'G' && square[8] != 'H' && square[9] != 'I')

        return 0;
    else
        return  - 1;
}

void board()
{

    printf("Player 1 (X)  -  Player 2 (0)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);

    printf("     |     |     \n\n");
}
