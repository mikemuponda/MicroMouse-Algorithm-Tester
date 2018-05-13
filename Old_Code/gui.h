/* MicroMouse Algorithm Project
 * gui.h
 * Developers: Mike Muponda, Sam Reles
 * May 7th, 2018
 *
 * This was developed for a 7x7 maze; This file prints out (in the respective order):
 * Stats of the MicroMouse
 * Distance Array as seen by the Micromouse
 * Wall Array as seen by the Micromouse
 */


#include "micro_mouse_algorithm.h"
#include <stdio.h>

#ifndef GUI_H
#define GUI_H


/* Prints to Screen */
void PrintToScreen(int** distance_array, int** wall_array, struct Position* micro_mouse);


#endif