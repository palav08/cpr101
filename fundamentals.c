//FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS

// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE	80
 // defining a macro of NUM_INPUT_SIZE of value 10
#define NUM_INPUT_SIZE  10
 // including fundamentals.h file
#include "fundamentals.h"

// V1
void fundamentals(void) {

	// print statement and declaring variables
	printf("*** Start of Indexing Strings Demo ***\n");
	// Declaring variables
	char buffer1[BUFFER_SIZE];
	char numInput[NUM_INPUT_SIZE];
	size_t	position;
	// begining of do-while loop
	do {
		// print statement (Asking the user to type a non empty string)
		printf("Type not empty string (q - to quit):\n");
		// reads the entered string from the standard input stream and stores in the array called 'buffer1'
		fgets(buffer1, BUFFER_SIZE, stdin);
		// assigning the last character of 'buffer1' to a null terminating character
		buffer1[strlen(buffer1) - 1] = '\0';
		// if condition started and where entered character is not 'q'
		if (strcmp(buffer1, "q") != 0) {
			//print statement 
			printf("Type the character position within the string:\n");
			// reads the entered string from the standard input stream and stores in the array called 'numInput'
			fgets(numInput, NUM_INPUT_SIZE, stdin);
			// assign last character of 'numInput' to a null terminating character
			numInput[strlen(numInput) - 1] = '\0';
			// converts position to integer numerical representation of numInput
			position = atoi(numInput);
			// if condition starting
			if (position >= strlen(buffer1))
			{
				// re-assigning the value
				position = strlen(buffer1) - 1;
				printf("TOO big.. Position reduced to max. availbale\n");
			}
			// printing the output
			printf("The character found at %d position is \'%c\'\n", (int)position, buffer1[position]);
		}
		// while condition of the do - while loop
	} while (strcmp(buffer1, "q") != 0);
	// final print statement 
	printf("*** End of Indexing Srings Demo ***\n\n");

	// Version 2
	
	// prints the line for measuring strings demo starting 
	printf("*** Start of Measuring Strings Demo ***\n"); 
	//character string declared with BUFFER_SIZE
	char buffer2[BUFFER_SIZE];
	do{
	//prints the line for user to inform quit option by q
	printf("Type a string (q - to quit):\n");
	// reads the entered string from the standard input stream and stores in the array called 'buffer2'
	fgets(buffer2,BUFFER_SIZE,stdin);
	// assigning the last character of 'buffer2' to a null terminating character
	buffer2[strlen(buffer2) - 1] = '\0';
	// if condition started and where entered character is not 'q'
	if (strcmp(buffer2, "q") != 0) 
		//print statement 
		printf("Type lenght is %lu\n", strlen(buffer2));
	    //print statement 
		printf("Type a string (q - to quit):\n");
		//reads the characters from buffer2
		gets(buffer2);
		// while condition of the do - while loop
	} while (strcmp(buffer2, "q") != 0);
	// prints the line for measuring strings demo ending
	printf("*** End of Measuring Strings Demo ***\n\n");
}

