/* MicroMouse Algorithm Project
 * micro_mouse_algorithm.c
 * Developers: Mike Muponda, Sam Reles
 * May 7th, 2018
 *
 * This was developed for a 7x7 maze; This file runs the main method and other major functions
 */

#ifndef MICRO_MOUSE_ALGORITHM_H
#define MICRO_MOUSE_ALGORITHM_H

#include "gui.h"
//#include "flood_fill.h" //Future Flood Fill Algortihm

struct Position{
	int xPos;
	int yPos;
	int direction;
} Position;

/* Allows the MicroMouse to determine the following paths */
void ChooseNextPath();

/* Previously "Wall Exists", This does the check to infer if walls exist at a given location*/
void CheckForWalls();

/* Initializes the Distance and Wall Array */
void InitializeArrays();

/* Updates Position and Direction */
void UpdateMicroMouse();

#endif