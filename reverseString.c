#include <stdio.h>
#include <string.h>

char* ReverseString(char* stringToReverse) { //Original
    int startIndex, endIndex, length; //Declaring
    char temp; 

    length = strlen(stringToReverse);  // Calculate length of the string we need to reverse 
    startIndex = 0;
    endIndex = length - 1; //end -1 because we start at 0 


    void reverseList(int startIndex, int endIndex) { //Got this from RecursiveReverse.c, but is there an easier method?

        if (startIndex >= endIndex) { //So long as the end of the string doesnt equal the beginning we roll (it end if its a one character string. 
            return;
        }

        temp = stringToReverse[startIndex]; // move the start to a temp holder
        stringToReverse[startIndex] = stringToReverse[endIndex]; // move the end to beginning 
        stringToReverse[endIndex] = temp; // move the beginning temp to the end 


        reverseList(startIndex + 1, endIndex - 1); // we change the values of the array for the next run below 
    }


    reverseList(startIndex, endIndex); // we run it again

    return stringToReverse;  //Original 
}

int main(void) {
	char inStr[50];
	char* resultStr;
   
	printf("Enter the string to be reversed: ");
	fgets(inStr, 20, stdin);
	strtok(inStr, "\n");  // Remove newline character from input.
	
	resultStr = ReverseString(inStr);
	
	printf("Reversed: %s\n", resultStr);

   return 0;
}