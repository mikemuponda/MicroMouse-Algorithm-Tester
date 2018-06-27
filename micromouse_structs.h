/* May 13th, 2018
 * Holds structs for Micromouse Algorithm Program
 * Written by: Sam Reles
 * For Micromouse Algorithm Project
 */

#ifndef MICROMOUSE_STRUCTS_H
#define MICROMOUSE_STRUCTS_H

typedef struct Position {
	int x;
	int y;
	int xPrev;
	int yPrev;
	char d;
} Position;

typedef struct Cell {
	int x;
	int y;
} Cell;

#endif