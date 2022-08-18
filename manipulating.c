
// MANIPULATING SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE 80 
// including fundamentals.h file
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
	
}//End of program
