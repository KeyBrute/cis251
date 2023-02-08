#include <stdio.h>
#include <stdlib.h>

const int Size = 5;

int* readInScores() {
int *scoresArray = malloc(Size * sizeof(int));
int i = 0;
int userInput;
printf("Enter your scores, followed by -1: ");

while(i < Size) {
	scanf("%d", &userInput);
	if (userInput == -1) break;
	scoresArray[i++] = userInput;
}

return scoresArray;
}

void printAllAndAverage(int* scoresArray, int size) {
int sum = 0;

// Print all the elements of the list
// and accumulate the sum
printf("The list is: ");
for(int i=0; i<size; i++) {
	printf("%d ", scoresArray[i]);
	sum += scoresArray[i];
}
printf("\n");

// Print the average value
printf("The average of the values in the list is: ");
printf("%0.1f.\n", (float)sum / size);
}

int main(int argc, char* argv[]) {
char name[10];
int age = 0;
// Read in the user's name
printf("Enter your name: ");
scanf("%s", name);
printf("\n");

// Read in the user's age
printf("Enter your age: ");
scanf("%d", &age);
printf("\n");

// Ask them to enter their quiz scores
// and save them into an array
int* quizScores = readInScores();
int size = 0;

// Keep track of the number of quiz scores entered
for(int i=0; i<Size; i++) {
	if (quizScores[i] == -1) break;
	size++;
}

// Print all the elements of the list, along with
// the average of all the values
printAllAndAverage(quizScores, size);

free(quizScores);

return 0;
}