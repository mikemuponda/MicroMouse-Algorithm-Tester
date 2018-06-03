#include "micro_mouse_algorithm.h"
#include "mircromouse_structs.h"


void ChooseNextPath(){

}


 int RightSensor(){
	if((int)Position.d==8){ return *(wall_array+7*Position.x+Position.y)&2;}
	
	if((int)Position.d==4){ return *(wall_array+7*Position.x+Position.y)&1;}

	if((int)Position.d==2){ return *(wall_array+7*Position.x+Position.y)&4;}

	if ((int)Position.d==1){return *(wall_array+7*Position.x+Position.y)&8;}

	else{return 0;}
  }

 int LeftSensor(){
    if((int)Position.d==8){ return *(wall_array+7*Position.x+Position.y)&1;}
	
	if((int)Position.d==4){ return *(wall_array+7*Position.x+Position.y)&2;}

	if((int)Position.d==2){ return *(wall_array+7*Position.x+Position.y)&8;}

	if ((int)Position.d==1){return *(wall_array+7*Position.x+Position.y)&4;}

	else{return 0;}
  }

 int FrontSensor(

    if(Position.d==8){ return *(wall_array+7*Position.x+Position.y)&8;}
	
	if(Position.d==4){ return *(wall_array+7*Position.x+Position.y)&4;}

	if(Position.d==2){ return *(wall_array+7*Position.x+Position.y)&2;}

	if(Position.d==1){return *(wall_array+7*Position.x+Position.y)&1;}

	else{return 0;}

	)
 /* Previously "Wall Exists", This does the check to infer if walls exist at a given location*/
 int CheckForWalls(){
     return RightSensor()+FrontSensor()+LeftSensor();	
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