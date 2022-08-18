// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
// defining a macro of value 80 of buffer_size
#define BUFFER_SIZE 300
// including fundamentals.h file
#include "tokenizing.h"

//V3
// This will put all the words into string if separated by a dot(.)
void tokenizing(void) {

	// print function with message and  declare the variables to be used.
	printf("*** Start of Tokenizing Sentences Demo ***\n");

	// will store the user input string
	char	sentences[BUFFER_SIZE];

	// the char pointer that will receive the token from the string
	char* nextSentences = NULL;

	// counter for the number of words or token generated.
	int		sentencesCounter;

	// Do the tokenizing at once
	do {
		// Ask the user to input few words separated by dot(.).
		printf("Type a few words separated by dot(q - to quit):\n");

		// Capture the strings using fgets and store in words.
		fgets(sentences, BUFFER_SIZE, stdin);

		// Add the terminating character to null character
		sentences[strlen(sentences) - 1] = '\0';

		// Check the user input with if condition
		if (strcmp(sentences, "q") != 0) {
			// The user input a few words use the function strtok to break the string of characters when it finds a dot(.). Return the first word 
			nextSentences = strtok(sentences, ".");

			// Set the wordsCounter to 1 
			sentencesCounter = 1;

			// Have  a loop to retrieve the next few words if there is. nextSentences will have value if have words left
			while (sentencesCounter) {
				// print the word extracted from the string of characters
				printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentences);

				// Get the next sentance from the string of characters that is saved in the memory, until it returns NULL
				nextSentences = strtok(NULL, ".");
			}
		}
	} while (strcmp(sentences, "q") != 0); // Exit when the user input letter q

	// Print the end of line
	printf("*** End of Tokenizing Sentences Demo ***\n\n");
	//End of program

}