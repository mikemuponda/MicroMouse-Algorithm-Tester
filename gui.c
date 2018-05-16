/* May 13th 2018
 * Acts as a GUI, utilizing the console screen
 * Written by: Samuel Reles
 * For Micromouse Algorithm Project
*/

#include "gui.h"

void PrintMicromouseStatistics(Position* micromouse){
	puts("These are the current statistics of the Micromouse.");
	printf("X: %d, Y: %d, Dir: %c\n", micromouse->x, micromouse->y, micromouse->d);
}

void PrintDistanceArray(int** distance_array, Position* micromouse){
	puts("This is the Distance Array (Micromouse marked by 'X')");
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if((micromouse->x == i) && (micromouse->y == j)){
				printf("X ");
			}
			else{
				printf("%d ", *(distance_array + i*7 + j));
			}
		}
		printf("\n");
	}
}

void PrintWallArray(int** wall_array, Position* micromouse){
	puts("This is the Wall Array (Micromouse marked by 'X')");
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if((micromouse->x == i) && (micromouse->y == j)){
				printf("X  ");
			}
			else{
				printf("%d  ", *(wall_array + i*7 + j));
			}
		}
		printf("\n");
	}
}


void PrintToScreen(int** distance_array, int** wall_array, Position* mouse_pos){
 	PrintMicromouseStatistics(mouse_pos);
 	PrintDistanceArray(distance_array, mouse_pos);
 	PrintWallArray(wall_array, mouse_pos);
}