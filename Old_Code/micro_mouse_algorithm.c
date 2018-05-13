/* MicroMouse Algorithm Project
 * micro_mouse_algorithm.c
 * Developers: Mike Muponda, Sam Reles
 * May 7th, 2018
 *
 * This was developed for a 7x7 maze; This file runs the main method and other major functions
 */



/* Notes for testers and future programmers
 * A. Cardinal directions are defined by the following integers(bit values)
 *		North - 8 (1000), South - 4 (0100), East - 2 (0010), West - 1 (0001)
 * 	  These integer values are used to calculate
 *			a. direction
 *			b. wall values
 * B. "X" represents the MicroMouse moving through the maze
 * C. (May 2018) A few globally defined variables have been created for ease of manipulating 
 *    the functionality and readablility of the program. This will be removed over time.
 */

#include "micro_mouse_algorithm.h"
#include "gui.h"
#include <stdio.h>
#include <stdlib.h>

//Globally Defined Variables 
//Position micro_mouse = {0, 0, 4}; //Micromouse is initially in the top corner facing South
//int distance_array[7][7]; //The array which holds the distance values for the MicroMouse
//int wall_array[7][7]; //The array which holds the wall values for the MicroMouse


/* Allows the MicroMouse to determine the following paths */
void ChooseNextPath(){
	printf("Passed. \n");
}

/* Previously "Wall Exists", This does the check to infer if walls exist at a given location*/
void CheckForWalls(){
	printf("Passed. \n");
}

/* Initializes the Distance and Wall Array */
void InitializeArrays(){
	//Initialize the Distance Values
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			distance_array[i][j] = abs(3 - i) + abs(3 - j);
		}
	}

	//Initialize Wall Values
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			if(i == 0){ wall_array[i][j] += 2; }
			if(i == 6){ wall_array[i][j] += 1; }
			if(j == 0){ wall_array[i][j] += 4; }
			if(j == 6){ wall_array[i][j] += 8; }
		}
	}

}

/* Updates Position and Direction */
void UpdateMicroMouse(){
	printf("Passed. \n");
}


/* Main Method for the program */
int main(){



	InitializeArrays();



	PrintToScreen(distance_array, wall_array, micro_mouse);

	//When finished
	printf("The MicroMouse has finished the path!");
	return 0;
}