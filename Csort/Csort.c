#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int inputArray[], int elementCount)
{
    int i, j;
    for(i = 0; i < elementCount; i++)
        for(j = 0; j < elementCount-i-1; j++)
            if(inputArray[j] > inputArray[j+1])
                swap(&inputArray[j], &inputArray[j+1]);
    /* Swap inputArray[j] and inputArray[j+1] */
    /* temp = inputArray[j];
     inputArray[j] = inputArray[j+1];
     inputArray[j+1] = temp;*/
    
    
    
}


int main() {
    int inputArray[100], elementCount, index, i, j, temp;
    int input;
    char name[2];
    
    for(i=0;i<20;i++)
    {
        
        //printf("Enter any positive integer (Enter -1 to stop): ");
        // scanf("%i", &input);
        inputArray[i]=input;
        index++;
        if(input==-1)
        {
            inputArray[i]=inputArray[i-1];
            index--;
            i=20;
        }
        
        else if(input<-1)
        {
            inputArray[i]=inputArray[i-1];
            index--;
        }
        
    }

    
    printf("sort");
    getchar();
    
    printf("Enter an order:");
    scanf("%s", name);
    
 
    printf("Enter Number of Elements in Array\n");
    scanf("%d", &elementCount);
    printf("Enter %d a sequence of numbers \n", elementCount);
     
    /* Read array elements */
    for(index = 0; index < elementCount; index++){
        scanf("%d", &inputArray[index]);
    }
     
    /* Sort Array using Bubble Sort */
   /* for(i = 0; i < elementCount; i++) {
        for(j = 0; j < elementCount-i-1; j++) {
            if(inputArray[j] > inputArray[j+1]) {*/
             /* Swap inputArray[j] and inputArray[j+1] */
              /*  temp = inputArray[j];
                inputArray[j] = inputArray[j+1];
                inputArray[j+1] = temp;
            } 
        }
     }*/
    bubbleSort(inputArray, elementCount);
      
     printf ("Sorted Array in Increasing Order\n") ;
    /* Print Sorted Array */
    for(index = 0; index < elementCount; index++){
        printf("%d ", inputArray[index]);
    }
    printf("\n");
    // getch();
 }
