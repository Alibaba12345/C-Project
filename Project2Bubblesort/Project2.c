#include <stdio.h>


int main()
{
  char name;
  int inputArray[100];
  int elementCount;
  int index;
    int i, j, temp;
  
  printf("sort");
  getchar();
  //printf("Enter sort order:");
  //scanf("%c", &name);
  
  for(index = 0; index < elementCount; index++){
      scanf("%d", &inputArray[index]);
      }
    
    /* Sort Array using Bubble Sort */
    for(i = 0; i < elementCount; i++) {
        for(j = 0; j < elementCount-i-1; j++) {
            if(inputArray[j] > inputArray[j+1]) {
                /* Swap inputArray[j] and inputArray[j+1] */
                temp = inputArray[j];
                inputArray[j] = inputArray[j+1];
                inputArray[j+1] = temp;
            }
        }
    }

  printf("Enter a %d sequence of numbers:\n", elementCount);
  for(index = 0; index < elementCount; index++){
      printf("%d", inputArray[index]);
      }
    
    
  return 0;
}


