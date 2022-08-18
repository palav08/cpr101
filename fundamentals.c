//FUNDAMENTALS MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE	80
//defining a macro of value 10 of NUM_INPUT_SIZE
#define NUM_INPUT_SIZE  10
// including converting.h file
#include "fundamentals.h"

// V3
//function converting with return type void
void fundamentals(void) {

	//will print this line with print() function used
	printf("*** Start of Copying Strings Demo ***\n");

	//variable destination with size 80(BUFFER_SIZE-predefined and datatype char is declared
	char destination[BUFFER_SIZE];

	//variable source with size 80(BUFFER_SIZE-predefined and datatype char is declared
	char source[BUFFER_SIZE];

	//do-while loop used
	do {
		//array destiantion with index 0 is been initialised by 0
		destination[0] = '\0';

		//will print this line with print() function used
		printf("Destination string is reset to empty");

		//will print this line with print() function used
		printf("Type not empty string (q - to quit):\n");

		//reads a line from the specified stream and stores it into the source
		fgets(source, BUFFER_SIZE, stdin);

		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		source[strlen(source) - 1] = '\0';

		//Here in 'if loop' if the value of source is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on
		if (strcmp(source, "q") != 0) {

			//destination string to been copied to source
			strcpy(destination, source);

			//will print this line with print() function used
			printf("New destination string is \'%s\'\n", destination);
		}
	} while (strcmp(source, "q") != 0);
	//in while loop, if the value of source is equal to character "q" then condition will false and result
		//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
	   //function.
		//will print this line with print() function used
	printf("*** End of Copying Srings Demo ***\n\n");
}//End of program