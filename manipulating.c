
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE 80 
// including fundamentals.h file
#include "manipulating.h" 

//V3

//function manipulating with return type void
void manipulating(void) {
	//will print this line with print() function used
	printf("*** Start of Searching Strings Demo ***\n");

	//variable haystack with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char haystack[BUFFER_SIZE];

	//variable needle with size 80(BUFFER_SIZE-predefined ) and datatype char is declared
	char needle[BUFFER_SIZE];
	//variable * occurrence with null value and datatype char is declared
	char* occurrence = NULL;
	//do-while loop used
	do {
		//will print this line with print() function used
		printf("Type the 1st string (q-to quit):\n");
		//reads a line from the specified stream and stores it into the haystack
		fgets(haystack, BUFFER_SIZE, stdin);
		
		//As we know the last byte of string must be null terminator i.e; '0' value & so we assigned '/0'
		haystack[strlen(haystack) - 1] = '\0';

		//Here in 'if loop' if the value of haystack is equal to character "q" then condition will false and result is end of 'if loop' otherwise the loop will carry on
		if ((strcmp(haystack, "q") != 0))

		{
			//Note if haystack="q" then the 'if' condition will false and thus will not able to concatenate the
			//string

			printf("Type the substring:\n"); //will print this line with print() function used
			//reads a line from the specified stream and stores it into the needle of size 80(predefined) and wth stdin is an input stream where data is sent toand read by a program
			fgets(needle, BUFFER_SIZE, stdin);

			//As we know the last byte of string must be null terminator 
			needle[strlen(needle) - 1] = '\0';
			//strstr function finds the first occurrence of the substring needle in the string haystack. The terminating '\0' characters are not compared.
			occurrence = strstr(haystack, needle);
			//if condition is started
			if (occurrence)
				//It the condition is true then it will the line with some values.
				printf("\'%s\' found at %d position\n", needle, (int)(occurrence - haystack));
			//else part of if condition
			else
				//if the if condition is false then it will print else part
				printf("Not found\n");
		}
	} while (strcmp(haystack, "q") != 0);
	//in while loop,if the value of haystack is equal to character "q" then condition will false and result
	//is end of 'do-while loop' otherwise the loop will carry on.It is compare with help of strcmp()
   //function.
	//will print this line with print() function used
	printf("*** End of Searching Strings Demo ***\n\n");

}//End of program
