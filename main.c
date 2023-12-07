/**
 * main.c
 * 
 * The main entrypoint of the "I really love robots" program.  The
 * program prints the phrase "I really love robots!" to the screen.
 *
 * @author Tanya L. Crenshaw
 * @since August 2013
 *
 */
#include "robot.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main()
 *
 * The main entrypoint of the program.
 * 
 * @param command line arguments.
 * 
 * @returns nothing.
 */

int isNumber(char number[]){
  int i;
  for(i = 0; i < strlen(number); i++){
	if(!isdigit(number[i])){
	  return 1; 
	}
  }
  return 0;
}

int main(int argc, const char * argv[])
{
  if (argc == 2){
	if(isNumber(argv[1]) == 0){
	  robotPrintAscii();
 	  dalekPrintAscii();
  	  robotPrintMessage();
	}
	else{
	  printf("Your second argument isn't a number.");
	}
  }
  else{
   robotPrintAscii();
  }

  return 0;
}
