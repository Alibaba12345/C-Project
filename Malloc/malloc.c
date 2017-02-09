#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

  char name[100];
  char *description;
  
  strcpy(name, "Anh Bang");
  
  /* allocate memory dynamically */
  description = malloc(200 * sizeof(char));
  
  if(description == NULL) {
     fprintf(stderr, "Error - unable to allocate required memory\n");
  }
  else{
      strcpy( description, "Anh Bang is a good student in class 10th");
  }
   printf("Name = %s\n", name);
   printf("Description: %s\n", description);

}