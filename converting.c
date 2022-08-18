//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE	80
//defining a macro of value 10 of NUM_INPUT_SIZE
#define NUM_INPUT_SIZE  10
// including converting.h file
#include "converting.h"


//V3
//function converting with return type void
void converting(void) {
	//will print this line with print() function used
	printf("*** Start of Converting Strings to long Demo ***\n");
	//variable longString with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char longString[BUFFER_SIZE];
	//variable longNumber and datatype long is declared
	long longNumber;

	//do-while loop used
	do {
		//will print this line with print() function used
		printf("Type the long numeric string (q - to quit):\n");

		//reads a line from the specified stream and stores it into the longString
		fgets(longString, BUFFER_SIZE, stdin);

		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		longString[strlen(longString) - 1] = '\0';

		//Here in 'if loop' if the value of longString is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on
		if ((strcmp(longString, "q") != 0)) {

			// it will convert longString to long integer and store in longNumber
			longNumber = atol(longString);

			//will print this line with print() function used
			printf("Convereting number is %ld\n", longNumber);
		}
	} while (strcmp(longString, "q") != 0);
	// in while loop, if the value of longString is equal to character "q" then condition will false and result
		//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
	   //function.
		//will print this line with print() function used
	printf("*** End of Converting Srings to int Demo ***\n\n");
}//End of program