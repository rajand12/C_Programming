// C Program to count the Number of Characters in a Text File
  
#include <stdio.h>  
int main()
{
    FILE* fp;

    int count = 0;
  
    char texts[100];
    char c;
    fp = fopen("text.txt", "w");
    printf("Enter some text");
    scanf("%[^\n]",texts");
    for (c = getc(fp); c != EOF; c = getc(fp))
  
        // Increment count for this character
        count = count + 1;
  
    // Close the file
    fclose(fp);
  
    // Print the count of characters
    printf("The file %s has %d characters\n ",
           filename, count);
  
    return 0;
}
