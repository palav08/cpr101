
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE 80 
// including manipulating.h file
#include "manipulating.h" 

//V1

//function manipulating with return type void
void manipulating(void) {
	//will print this line with print() function used
	printf("*** Start of Concatenating Strings Demo ***\n");

	//variable string1 with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char string1[BUFFER_SIZE];

	//variable string2 with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char string2[BUFFER_SIZE];

	//do-while loop used
	do {
		//will print this line with print() function used
		printf("Type the 1st string (q-to quit):\n");
		//reads a line from the specified stream and stores it into the string1
		fgets(string1, BUFFER_SIZE, stdin);

		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		string1[strlen(string1) - 1] = '\0';

		//Here in 'if loop' if the value of string1 is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on
		if ((strcmp(string1, "q") != 0))

		{
			//Note if string1="q" then the 'if' condition will false and thus will not able to concatenate the
			//string

			printf("Type the 2nd string:\n"); //will print this line with print() function used
			//reads a line from the specified stream and stores it into the string2 of size 80(predefined) and wth stdin is an input stream where data is sent toand read by a program
			fgets(string2, BUFFER_SIZE, stdin);

			//As we know the last byte of string must be null terminator 
			string2[strlen(string2) - 1] = '\0';

			//The strcat() function concatenates string2 to string1, so the final value is stored in string1
			strcat(string1, string2);

			//will print this line and value of string1 with print() function used
			printf("Concatenated string is \'%s\'\n", string1);

		}
	} while (strcmp(string1, "q") != 0);
	//in while loop,if the value of string1 is equal to character "q" then condition will false and result
	//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
   //function.
	//will print this line with print() function used
	printf("*** End of Concatenating Strings Demo ***\n\n");

	//V2
	// prints the line for comparing strings demo starting 
	printf("*** Start of Comparing strings Demo ***\n");

	//variable compare1 with size 80(BUFFER_SIZE-predefined) and datatype char is declared
	char compare1[BUFFER_SIZE];

	//variable string2 with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char compare2[BUFFER_SIZE];

	//integer result is declared
	int result;

	//do-while loop used
	do {
		//will print this line with print() function used
		printf("Type the 1st string to compare (q - to quit):\n");

		//reads a line from the specified stream and stores it into the compare1
		fgets(compare1, BUFFER_SIZE, stdin);

		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		compare1[strlen(compare1) - 1] = '\0';

		//Here in 'if loop' if the value of compare1 is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on
		if (strcmp(compare1, "q") != 0) {
			//Note if compare1="q" then the 'if' condition will false and thus will not able to concatenate the string
			printf("Type the 2nd string to compare:\n");
			//reads a line from the specified stream and stores it into the compare2 of size 80(predefined) and wth stdin is an input stream where data is sent to and read by a program
			fgets(compare2, BUFFER_SIZE, stdin);
			//As we know the last byte of string must be null terminator 
			compare2[strlen(compare2) - 1] = '\0';
			//result is equal to the comparee string
			result = strcmp(compare1, compare2);

			// Check the user input with if condition
			if (result < 0)
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2);
			else if (result == 0)
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);
			else
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2);
		}
	} while (strcmp(compare1, "q") != 0);//in while loop,if the value of string1 is equal to character "q" then condition will false and result
	//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
   //function.

	//will print this line with print() function used
	printf("*** End of Comparing Strings Demo ***\n\n");
}