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
      strcpy( description, "Anh Bang is a good student in class 10th.");
  }
  
  /*suppose you want to store bigger description */
  description = realloc(description, 100 * sizeof(char));
  
  if(description == NULL){
     fprintf(stderr, "Error - unable to allocate requred memory\n");
  }
  else {
      strcat(description, "She is a good girl");
  }
   printf("Name = %s\n", name);
   printf("Description: %s\n", description);
   
   /* release memory using free() function */
   free(description);

}