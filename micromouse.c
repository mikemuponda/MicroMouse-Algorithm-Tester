/* May 13th, 2018
 * Runs the Micromouse Program
 * Written by: Sam Reles
 * For Micromouse Algorithm Project
 */
#include "micromouse.h"
#include "gui.h"

#include <unistd.h>

void InitializeDistanceArray(int** array_to_be_initialized){
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			//printf("X: %d, Y: %d => %d\n", i, j, (abs(i - 3) + abs(j - 3))); //To test for value output
			*(array_to_be_initialized + i*7 + j) = abs(i - 3) + abs(j - 3);
		}
	}
}

void InitializeWallArray(int** array_to_be_initialized){
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if(i == 0){ *(array_to_be_initialized + i*7 + j) += 2; }//Wall to East
			if(i == 6){ *(array_to_be_initialized + i*7 + j) += 1; }//Wall to West
			if(j == 6){ *(array_to_be_initialized + i*7 + j) += 4; }//Wall to South
			if(j == 0){ *(array_to_be_initialized + i*7 + j) += 8; }//Wall to North
			int temp = *(array_to_be_initialized + i*7 + j);
			*(array_to_be_initialized + i*7 + j) = temp / 4;
			//printf("X: %d, Y: %d => %d\n", i, j, *(array_to_be_initialized + i*7 + j)); 
		}
	}
}

//For now, only call this once
void AddRandomWallToWallArray(int** array_to_be_modified){
	srand(time(NULL));
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			int random_wall_value = pow(2, rand() % 4);
			if(!(rand() % 5)){
				//puts("Called");
				int temp = random_wall_value;
			  *(array_to_be_modified + i*7 + j) = temp;
			}
		}
	}
}

void MoveMicromouse(Position* mouse_pos){
	//This WILL call the commands to choose movements

}

/* Main Method */
int main(){
	puts("MICROMOUSE ALGORITHM DEMONSTRATION\nWRITTEN BY:\nMIKE MUPONDA\nSAM RELES\nCOPYRIGHT 2018");
	//Arrange the elements for the Micromouse demonstration 
	Position* mouse_pos = (Position*) calloc(1, sizeof(Position));
	mouse_pos->x = 0;
	mouse_pos->y = 0;
	mouse_pos->d = 's';
	int** distance_array = (int**) calloc(49, sizeof(int*));
	int** wall_array = (int**) calloc(49, sizeof(int*));
	InitializeDistanceArray(distance_array);
	InitializeWallArray(wall_array);

	AddRandomWallToWallArray(wall_array);
	AddRandomWallToWallArray(wall_array);

	PrintToScreen(distance_array, wall_array, mouse_pos);
	char user_input = '0', ignore_char = '\n';
	//int current_move = 1; //Keeps track of what 'move' the Micromouse is currently on

	//Act (sending paramenters) and Assert (what shows up on the screen)
	//Take user input
	while(user_input != '2'){
		//printf("\nMove -> %d\n", current_move);
		printf("0: Prints the current status of the maze and the Micromouse\n1: Moves the Micromouse one step\n2: Exit the program\nAnything Else: Invalid Input\nUser Input: ");
		scanf(" %c", &user_input);
		switch(user_input){
			case '0':
				PrintToScreen(distance_array, wall_array, mouse_pos);
				break;
			case '1':
				MoveMicromouse(mouse_pos);
				//current_move += 1; //Increment 'current move'
				break;
			case '2':
				break;
			default:
				break;
				puts("The input given was not in the selectable options.");
		}
		//scanf("%c", &user_input);
	}

	//Disarrange
	//puts("here");
	free(mouse_pos);
	//puts("here2");
	mouse_pos = NULL;
	//puts("here3");
	//free(*distance_array);
	//puts("here4");
	*distance_array = NULL;
	//puts("here5");
	//free(*wall_array);
	//puts("here6");
	*wall_array = NULL;
	//puts("here7");

	puts("Thanks for using the program!");
	return 0;
}