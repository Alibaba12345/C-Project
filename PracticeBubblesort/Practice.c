#include <stdio.h>
//#include <conio.h>
 
int main() {
    int inputArray[100], elementCount, index, i, j, temp; 
    char name;
    printf("sort");
    getchar();
   printf("Enter sort order:");
    scanf("%c", &name);
    
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d a sequence of numbers \n", elementCount);
     
    /* Read array elements */
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

 printf ("Sorted Array in Increasing Order\n") ;
    /* Print Sorted Array */
    for(index = 0; index < elementCount; index++){
        printf("%d ", inputArray[index]);
    }
     
    // getch();
 }