#include <stdio.h>
#include <string.h>

/*
Name:Lavanya R
Date:
Description:WRITE A PROGRAM TO IMPLEMENT A BASIC DATA COMPRESSION ALGORITHM LIKE RUN-LENGTH ENCODING (RLE)
Sample Input:aaabbcddd
Sample Output:a3b2c1d3
*/

// Function to perform run-length encoding
void lengthEncode(char *str)
{

    int len=strlen(str);// Get the length of the input string
    int count;

    printf("Encode String: ");
    for(int i=0;i<len;i++){

	count=1;// Initialize count of current character

	// Count consecutive repeating characters
	while(str[i] == str[i+1])
	{
	    count++;
	    i++;// Move to next character if same
	}

	  // Print the character followed by its count
	printf("%c%d",str[i],count);

    }
    printf("\n");

}

int main()
{

    // Buffer to hold the input string
    char str[100];

     // Prompt user to enter a string
    printf("Enter the string to Encode:");
    scanf("%s",str); // Read the input string (without spaces

    // Call the encoding function
    lengthEncode(str);
    return 0;

}


