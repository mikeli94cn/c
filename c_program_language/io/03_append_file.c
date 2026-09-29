#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE *fptr;

  // Open the file in append mode ("a")
  fptr = fopen("example.txt", "a");

  if (fptr == NULL) {
    printf("Error opening file!\n");
    return 1;
  }

  // Write new text. This will be added directly to the end of the file.
  fprintf(fptr, "This line is appended to the text file.\n");

  fclose(fptr);

  printf("Data successfully appended.\n");
  return 0;
}
