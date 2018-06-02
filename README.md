# MicroMouse-Algorithm-Tester
This is a continuation of the Micromouse project, but uses a CLI to simulate the operation.

# To Use The File
As of now (2018.5.28), just compile the gui_tester.c, gui.c, gui.h, and micromouse_structs.h files. 


# UPDATE 2018.6.2
 The CLI now works with the micromouse.c file. Use this to compile. - SAM

# Future Plans
- Wall Builder: Be able to create your own map with predefined wall values to see if the Micromouse could solve said map
- Steps: Count the number of steps the Micromouse has taken
- Parallel Distance Array/Wall Array
- Arduino Crossover: Moving the algorithms over to an Arduino Project




# Examples of Warnings that SHOULD be ignored
1. gui_tester.c:16:41: warning: incompatible integer to pointer conversion
      assigning to 'int *' from 'int' [-Wint-conversion]
  ...*(array_to_be_initialized + i*7 + j) = abs(i - 3) + abs(j - 3);
  			Fixing this causes a segmentation fault.

  Most of the pointers within these files are necessary to have the correct 
  data modified as if it were an 'array', and due to such messing with the
  dereferencing removes 'arrayness' from the data stored in the heap. Just
  don't mess with this lol.