// Luis A. Miranda
// Chpt3 PA

#include <stdio.h>
#include <stdlib.h> //for rand
#include <time.h>  //for srand(time(0)));

// Function that prints the array 
void printArray(int array[], int size) { //you get the array and the size of the array and print them 
	int i;
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n"); //We leave a blank line after, like the example
}

// Function bubble sort
void bubbleSort(int array[], int size) { 
    int i, j, temp;
    for (i = 0; i < size ; i++) { //it run for the number of ints in the array 
        for (j = 0; j < size - i - 1; j++) { // It runs inside moving the first group of adjacents, then the next, then the next...
            if (array[j] > array[j + 1]) {  //compares to see if it's bigger, if so, switches them by placing one temporarily in temp.
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    
    srand(time(0)); //initialize the random number generator ;"seeds" it

    // 25 random integers between 1 and 1000 as per the instructions
    int array[25];
    int i; // for the loop 
    int size = 25;

    for (i = 0; i < size; i++) { //loop to get the 25 numbers with random values
        array[i] = rand() % 1000+ 1;  //get a random number between 1 and 1000. *If it was between 0 and 1000 it would be %1001.
    }

    // Print unsorted array
    printf("Unsorted array:\n");
    printArray(array, size); //call the function pre sorting

    // Bubble sort function 
    bubbleSort(array, size);

    // Print sorted array
    printf("Sorted array:\n");
    printArray(array, size); //call the fuction post sorting 

    return 0;
}