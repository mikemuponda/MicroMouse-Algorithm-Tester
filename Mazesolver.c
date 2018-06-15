/* June 5th, 2018
 * Runs the algorithms for the Micromouse Project
 * Written by: Mike Muponda, Sam Reles
 * For Micromouse Algorithm Project
 */

#include "micro_mouse_algorithm.h"
#include "mircromouse_structs.h"

/* Will put the Micromouse in the Appropriate Direction to move next */
void ChooseNextPath(Position mouse, int** wall_array, int** distance_array){

}


int RightSensor(Position mouse){ 
	if(mouse.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&2; }
	
	if(mouse.d == 's'){ return *(wall_array+7*Position.x+Position.y)&1; }

	if(mouse.d == 'e'){ return *(wall_array+7*Position.x+Position.y)&4; }

	if(mouse.d == 'w'){ return *(wall_array+7*Position.x+Position.y)&8; }

	else{ return 0; }
}

int LeftSensor(Position mouse){
    if(mouse.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&1; }
	
	if(mouse.d == 's'){ return *(wall_array+7*Position.x+Position.y)&2;}

	if(mouse.d == 'e'){ return *(wall_array+7*Position.x+Position.y)&8;}

	if(mouse.d == 'w'){ return *(wall_array+7*Position.x+Position.y)&4;}

	else{ return 0; }
 }

int FrontSensor(Position mouse){
    if(mouse.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&8;}
	
	if(mouse.d == 's'){ return *(wall_array+7*Position.x+Position.y)&4;}

	if(mouse.d == 'e'){ return *(wall_array+7*Position.x+Position.y)&2;}

	if(mouse.d == 'w'){ return *(wall_array+7*Position.x+Position.y)&1;}

	else{ return 0; }

}

 /* Previously "Wall Exists", This does the check to infer if walls exist at a given location*/
int CheckForWalls(){
 	//If a wall exists, update the wall array
	//RightSensor()
}

/* Updates Position and Direction */
void UpdateMicroMouse(){

}

/*Updates Distance values for affected cells*/
void UpdateDistanceVals(int** wall_array, int** distance_array){

}