#include "micro_mouse_algorithm.h"
#include "mircromouse_structs.h"


void ChooseNextPath(){

}


int RightSensor(Position mouse){ 
	if(mouse.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&2;}
	
	if(mouse.d == 's'){ return *(wall_array+7*Position.x+Position.y)&1;}

	if(mouse.d == 'e'){ return *(wall_array+7*Position.x+Position.y)&4;}

	if(mouse.d == 'w'){ return *(wall_array+7*Position.x+Position.y)&8;}

	else{ return 0; }
}

int LeftSensor(Position mouse){
    if(Position.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&1;}
	
	if(Position.d == 's'){ return *(wall_array+7*Position.x+Position.y)&2;}

	if(Position.d == 'e'){ return *(wall_array+7*Position.x+Position.y)&8;}

	if(Position.d == 'w'){ return *(wall_array+7*Position.x+Position.y)&4;}

	else{ return 0; }
 }

int FrontSensor(Position mouse){

    if(Position.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&8;}
	
	if(Position.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&4;}

	if(Position.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&2;}

	if(Position.d == 'n'){ return *(wall_array+7*Position.x+Position.y)&1;}

	else{ return 0; }

}
 /* Previously "Wall Exists", This does the check to infer if walls exist at a given location*/
int CheckForWalls(){
 	//If a wall exists, update the wall array

}

/* Initializes the Distance and Wall Array */
void InitializeArrays(){

}

/* Updates Position and Direction */
void UpdateMicroMouse(){

}

/*Updates Distance values for affected cells*/
void UpdateDistanceVals(){

}