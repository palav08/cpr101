//CONVERTING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// Creating a macro with the value of 80 named Buffer_Size
#define BUFFER_SIZE	80

// Creating a macro with the value of 10 named NUM_INPUT_SIZE
#define NUM_INPUT_SIZE  10

// Including the header file for calling the functions
#include "converting.h"


//V1

// Calling the converting function
void converting(void) {

	//printing the line 
	printf("*** Start of Converting Strings Demo ***\n");

	// Creating the array of intString with the max value of BUFFER_SIZE(80)
	char intString[BUFFER_SIZE];
	// Creating an integer variable named intNumber
	int intNumber;
	// Starting the do-while loop 
	do {
		//printing the line 
		printf("Type an int numeric string (q - to quit):\n");
		//stdin is used to send the data to the program and reads the input and stores it into the intString array of 80 size 
		fgets(intString, BUFFER_SIZE, stdin);
		// assign the last character of intString to a null character
		intString[strlen(intString) - 1] = '\0';
		//  applying if condition while the condition character if not equal to q
		if (strcmp(intString, "q") != 0) {
			// storing the integer value afer converting it from string by use of atoi function
			intNumber = atoi(intString);
			// printing the result statement with the converted number
			printf("Convereting number is %d\n", intNumber);

			// end of if condition
		}
		// applying the condition for which the loop will work until q is entered
	} while (strcmp(intNumber, "q") != 0);

	// Printing the ending line of converting
	printf("*** End of Converting Srings to int Demo ***\n\n");
}