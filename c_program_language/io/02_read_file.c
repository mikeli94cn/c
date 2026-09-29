#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr;
  char buffer[256]; // Buffer to temporarily store each line 

  // Open the file in read mode ("r")
  fptr = fopen("example.txt", "r");

  // Check if the file exists
  if (fptr == NULL) {
    printf("Error: Could not open example.txt\n");
    return 1;
  }

  // Read and print the file line by line until reaching the End-Of-File (EOF)
  while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
    printf("%s", buffer);
  }

  // Close the file
  fclose(fptr);

  return 0;
}
