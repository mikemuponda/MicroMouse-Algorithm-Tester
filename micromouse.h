#ifndef MICROMOUSE_H_
#define MICROMOUSE_H_

#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "micromouse_structs.h"

void InitializeDistanceArray(int** array_to_be_initialized);

void InitializeWallArray(int** array_to_be_initialized);

void AddRandomWallToWallArray(int** array_to_be_modified);

#endif