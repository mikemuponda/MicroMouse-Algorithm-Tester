/* MicroMouse Algorithm Project
 * gui.c 
 * Developers: Mike Muponda, Sam Reles
 * May 7th, 2018
 *
 * This was developed for a 7x7 maze; This file prints out (in the respective order):
 * Stats of the MicroMouse
 * Distance Array as seen by the Micromouse
 * Wall Array as seen by the Micromouse
 */

#include "gui.h"

/* Prints the statistics of the MicroMouse at any given time*/
void PrintMicromouseStats(struct Position micro_mouse){
	char direction_character = 'a';
	switch(micro_mouse.direction){
		case 1: direction_character = 'w';
						break;
		case 2: direction_character = 'e';
						break;
		case 4: direction_character = 's';
						break;
		case 8: direction_character = 'n';
						break;
		default: direction_character = 'a';
	}

	printf("Micromouse Stats\nPosition ->> x: %d, y: %d \ndir: %c\n\n\n", micro_mouse.xPos, micro_mouse.yPos, micro_mouse.direction);
}

/* Prints the Distance Array after any movement */
void PrintDistanceArray(int** distance_array, struct Position micro_mouse){
	printf("-- Distance Array Values --\n");
	for(int i = 0; i < 7; i++){ //Print X axis
		for(int j = 0; j < 7; j++){ //Print Y axis
			if((micro_mouse.xPos == i) && (micro_mouse.yPos == j)){
				printf("X ");
			}
			else{
				printf("%d\n", **(distance_array + i + j));
			}
		}
		printf("\n");
	}
	printf("\n\n");
}

/* Prints the Wall Array after any movement */
void PrintWallArray(int** wall_array, struct Position micro_mouse){
	printf("-- Wall Array Values --\n");	
	for(int i = 0; i < 7; i++){ //Print X axis
		for(int j = 0; j < 7; j++){ //Print Y axis
			if((micro_mouse.xPos == i) && (micro_mouse.yPos == j)){
				printf("X ");
			}
			else{
				printf("%d\n", **(wall_array + i + j));
			}
		}
		printf("\n");
	}
	printf("\n\n");
}


/* Prints to Screen */
void PrintToScreen(int** distance_array, int** wall_array, struct Position* micro_mouse){
	//Print MicroMouse Stats
	PrintMicromouseStats(*micro_mouse);
	//Print Distance Array
	PrintDistanceArray(distance_array, *micro_mouse);
	//Print Wall Array
	PrintWallArray(wall_array, *micro_mouse);
}