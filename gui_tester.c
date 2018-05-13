/* May 13th, 2018
 * Tester for new GUI.c
 * Written by: Sam Reles
 * For Micromouse Algorithm Project
 */
#include <stdlib.h>
#include "micromouse_structs.h"
#include "gui.h"

/* Test 1 - Printing the Micromouse at starting location */
void Test_1(){
	//Arrange
	Position* mouse_pos = (Position*) calloc(1, sizeof(Position));
	mouse_pos->x = 0;
	mouse_pos->y = 0;
	mouse_pos->d = 's';
	int** distance_array = (int**) calloc(1, sizeof(int*));
	//*distance_array = { 0 };
	int** wall_array = (int**) calloc(1, sizeof(int*));
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




int main(){

	Test_1();

	puts("Passed all tests!");
  return 0;
}