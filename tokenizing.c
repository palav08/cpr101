// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE 300
// including fundamentals.h file
#include "tokenizing.h"

//V1
// This will put all the words into string if separated by a space
void tokenizing(void) {

	// print function with message and  declare the variables to be used.
	printf("*** Start of Tokenizing Words Demo ***\n");

	// will store the user input string
	char	words[BUFFER_SIZE];

	// the char pointer that will receive the token from the string
	char* nextWord = NULL;

	// counter for the number of words or token generated.
	int		wordsCounter;

	// Do the tokenizing at once
	do {
		// Ask the user to input few words separated by space.
		printf("Type a few words separated by space (q - to quit):\n");

		// Capture the strings using fgets and store in words.
		fgets(words, BUFFER_SIZE, stdin);

		// Add the terminating character to nul character
		words[strlen(words) - 1] = '\0';

		// Check the user input with if condition
		if (strcmp(words, "q") != 0) {
			// The user input a few words use the function strtok to break the string of characters when it finds a space. Return the first word 
			nextWord = strtok(words, " ");

			// Set the wordsCounter to 1 
			wordsCounter = 1;

			// Have aloop to retrieve the next few words if there is. nextWord will have value if have words left
			while (nextWord) {
				// print the word extracted from the string of characters
				printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);

				// Get the next word from the string of characters that is saved in the memory, until it returns NULL
				nextWord = strtok(NULL, " ");
			}
		}
	} while (strcmp(words, "q") != 0); // Exit when the user input letter q

	// Print the end of line
	printf("*** End of Tokenizing Words Demo ***\n\n");
	//End of program

}