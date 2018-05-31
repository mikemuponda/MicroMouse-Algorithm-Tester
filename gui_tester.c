/* May 13th, 2018
 * Tester for new GUI.c
 * Written by: Sam Reles
 * For Micromouse Algorithm Project
 */
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "micromouse_structs.h"
#include "gui.h"

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

/*//Adds one wall at random, if applicable, to the wall array
void AddRandomWallToWallArray(int** array_to_be_modified){
	srand(time(NULL));
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			int random_wall_value = pow(2, (rand() % 4));//Get the 2^n from 2 raised to a random number % 4
			int* atbm_value = &(**(array_to_be_modified + i*7 + j));
			if((random_wall_value) == 1){
				(*(array_to_be_modified + i*7 + j)) += random_wall_value;
				int temp = (*(array_to_be_modified + i*7 + j));
				(*(array_to_be_modified + i*7 + j)) = 1
			}
		}
	}
}*/

//For now, only call this once
void AddRandomWallToWallArray(int** array_to_be_modified){
	srand(time(NULL));
	for(int i = 1; i < 6; i++){
		for(int j = 1; j < 6; j++){
			int random_wall_value = pow(2, rand() % 4);
			if(!(rand() % 5)){
				puts("Called");
				int temp = random_wall_value;
			  *(array_to_be_modified + i*7 + j) = temp;
			}
		}
	}
}

/* Test 1 - Printing the Micromouse at starting location */
void Test_1(){
	//Arrange
	Position* mouse_pos = (Position*) calloc(1, sizeof(Position));
	mouse_pos->x = 0;
	mouse_pos->y = 0;
	mouse_pos->d = 's';
	int** distance_array = (int**) calloc(49, sizeof(int*));
	//*distance_array = { 0 };
	int** wall_array = (int**) calloc(49, sizeof(int*));
	//*wall_array = { 0 };

	//Act (sending paramenters) and Assert (what shows up on the screen)
	PrintToScreen(distance_array, wall_array, mouse_pos);

	//Disarrange
	free(mouse_pos);
	mouse_pos = NULL;
	free(*distance_array);
	*distance_array = NULL;
	free(*wall_array);
	*wall_array = NULL;
}

//Using Wall test for basic walls
void Test_2(){
	puts("Prior to arrange");
	//Arrange
	Position* mouse_pos = (Position*) calloc(1, sizeof(Position));
	mouse_pos->x = 0;
	mouse_pos->y = 0;
	mouse_pos->d = 's';
	int** distance_array = (int**) calloc(49, sizeof(int*));
	//*distance_array = { 0 };
	int** wall_array = (int**) calloc(49, sizeof(int*));
	//*wall_array = { 0 };

	puts("Prior to act");
	//Act (sending paramenters) and Assert (what shows up on the screen)
	InitializeDistanceArray(distance_array);
	InitializeWallArray(wall_array);
	PrintToScreen(distance_array, wall_array, mouse_pos);

	puts("Prior to disarrange");
	//Disarrange
	free(mouse_pos);
	mouse_pos = NULL;
	puts("This test");
	*distance_array = NULL;
	free(*distance_array);
	//*distance_array = NULL;
	*wall_array = NULL;
	puts("This next test");
	free(*wall_array);
	//*wall_array = NULL;
	puts("At finish");
}

//Using wall test for random wall placements
void Test_3(){
	puts("Here?");
	Position* mouse_pos = (Position*) calloc(1, sizeof(Position));
	mouse_pos->x = 0;
	mouse_pos->y = 0;
	mouse_pos->d = 's';
	int** distance_array = (int**) calloc(49, sizeof(int*));
	int** wall_array = (int**) calloc (49, sizeof(int*));

	InitializeDistanceArray(distance_array);
	InitializeWallArray(wall_array);
	puts("Before the Addition");
	//Testing the AddRandomWallToArray Function
	AddRandomWallToWallArray(wall_array);
	puts("After the addition");
	AddRandomWallToWallArray(wall_array);
	AddRandomWallToWallArray(wall_array);

	PrintToScreen(distance_array, wall_array, mouse_pos);

	free(mouse_pos);
	mouse_pos = NULL;
	*distance_array = NULL;
	free(*distance_array);
	*wall_array = NULL;
	free(*wall_array);
}

int main(){

	Test_1();
	Test_2();
	//puts("Before the calling of test");
	Test_3();

	//puts("Passed all tests!");
  return 0;
}