//Final Project
//Batship
//Maria PeregrinaMoreno

#include <stdio.h>
#include <stdbool.h>

#define FIELD_SIZE 10
#define MAX_SHIPS 5
#define MAX_TURNS 10
#define HIT_SCORE 100

//Function Prototypes
void typeField (int field[][FIELD_SIZE]);
void displayField (int field[][FIELD_SIZE]);
bool shipLocation (int field[][FIELD_SIZE]);
void getPlayerMove (int *row, int *col);
bool hitBatship (int field[][FIELD_SIZE], int row, int col);
void scoreKeeper (char *playerName, int score);
int calculateScore (int field[][FIELD_SIZE]);
bool playGame (int field[][FIELD_SIZE]);

int main(){
	int field [FIELD_SIZE][FIELD_SIZE] = {0};
	int score=0;
	char playerName [50];
	char playAgain;
	bool gameOver = false;
	
	printf("Welcome to Batship!\n");
	printf("In this game, the only goal is to sink all the ships. The player has a grid of 10x10 where the ships will be placed. There are 5 ships varying from 2 to 6 spots. The ships are positioned based on your selection of game difficulty.\n");
	printf("Point Structure:\n");
	printf("Each spot of the ship sunk gives the player 100 points. You lose the game if you don't hit a ship within 10 turns.\n");
	
	printf("Enter your name: ");
	scanf(" %c",playerName);
	
	typeField(field);
	shipLocation(field);
	
	printf("Type in a difficulty- Beinnger (B), Intermediate (I), Difficult (d): ");
	scanf(" %d", &field[FIELD_SIZE][FIELD_SIZE]);
	
	for(int turn = 0; turn<MAX_TURNS && !gameOver; turn++){
		int row, col;
		getPlayerMove(&row, &col);
		gameOver = hitBatship(field, row, col);
		displayField(field);
	}
	
	if(gameOver){
		score = calculateScore (field);
		printf("%s, your score is: %d\n",playerName, score);
		scoreKeeper (playerName, score);
	} 
	else{printf("Game over! You didn't hit all the ships.\n");}
	
	scoreKeeper(scores, names, 0, name);	
	
	printf("Do you want to play again? (Y/N): ");
	scanf(" %c", &playAgain);
	
	if(playAgain == 'Y' || playAgain == 'y'){
		printf("Enter your name: ");
		scanf(" %c",playerName);
	
		typeField(field);
		shipLocation(field);
	
		printf("Type in a difficulty- Beinnger (B), Intermediate (I), Difficult (d): ");
		scanf(" %d", &field[FIELD_SIZE][FIELD_SIZE]);
		
		for(int turn = 0; turn<MAX_TURNS && !gameOver; turn++){
			int row, col;
			getPlayerMove(&row, &col);
			gameOver = hitBatship(field, row, col);
			displayField(field);
		}
		
		if(gameOver){
			score = calculateScore (field);
			printf("%s, your score is: %d\n",playerName, score);
			scoreKeeper (playerName, score);
		} 
		else{printf("Game over! You didn't hit all the ships.\n");}
		
		scoreKeeper(scores, names, 0, name);	
		
		printf("Do you want to play again? (Y/N): ");
		scanf(" %c", &playAgain);
	}
	else if(playAgain =='N' || playAgain == 'n'){
		printf(" %d", scoreKeeper);
	return 0;
}

//Function Definitions
void typeField (int field[][FIELD_SIZE]);
void displayField (int field[][FIELD_SIZE]);
bool shipLocation (int field[][FIELD_SIZE]);
void getPlayerMove (int *row, int *col);
bool hitBatship (int field[][FIELD_SIZE], int row, int col);
void scoreKeeper (char *playerName, int score);
int calculateScore (int field[][FIELD_SIZE]);
bool playGame (int field[][FIELD_SIZE]);
