#include <stdio.h>
#define SIZE 10
#define SENTINEL 0
#include <string.h>

/* prototypes */
void bubble(int work[], const int size, int(*compare)(int a, int b));
int ascending(int a, int b);
int descending(int a, int b);
int read_integers(int sequence[]);
void print_integers(int sequence[], int size);

/*void printArray(int sequence[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", sequence[i]);
    printf("\n");
}*/

int main(void)
{
    int order; /* 1 for ascending order or 2 for descending order */
    int counter; /* counter */
    char name[5];
    int elementCount;
    int i, input,nums;
    
    //int up = 1;
    /* initialize array a */
    //int a[ SIZE ] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    int sequence[SIZE];
    
    
    //int SIZE[100];
    printf("sort");
    getchar();
    
    
    /* Read array elements */
    //for(counter = 0; counter < elementCount; counter++){
    //    scanf("%d", &sequence[counter]);
   // }
    printf("Enter sort order:");
    scanf("%s", name);
   // printf( "Enter 1 to sort in ascending order,\n"
   //        "Enter 2 to sort in descending order: " );
   // scanf( "%d", &order );
   // printf( "\nData items in original order\n" );
    
    

    
    
    printf("Enter a sequence of number: ");
    /*for(i=0;i<20;i++)
    {
        
        //printf("Enter any positive integer (Enter -1 to stop): ");
        // scanf("%i", &input);
        sequence[i]=input;
        counter++;
        if(input==-1)
        {
            sequence[i]=sequence[i-1];
            counter--;
            i=20;
        }
        
        else if(input<-1)
        {
            sequence[i]=sequence[i-1];
            counter--;
        }
        
    }*/

    int size = read_integers(sequence);
    print_integers(sequence, size);
    

    /* output original array */
 /* end for */
//for ( counter = 0; counter < SIZE; counter++ ) {
//    printf( "%5d", sequence[ counter ] );
//} /* end for */

   /*sort array in ascending order; pass function ascending as an
     argument to specify ascending sorting order */
    
   if( order ==1) {
    bubble(sequence, SIZE, ascending);
     printf("\nData items in ascending order\n");
   }/* end if */
   else {/* pass function descending */
      bubble(sequence, SIZE, descending);
        printf("\nData items in descending order\n");
   
   }  /* end else */
   
   /* output sorted array */
   for (counter = 0; counter < SIZE; counter++){
      printf("%5d", sequence[counter]);
   }  /* end for */
 //  int n = sizeof(sequence)/sizeof(sequence[0]);
 //  printArray(sequence, n);
   printf("\n");
   return 0; /* indicates successful termination */

} /* end main */

/*multipurpose bubble sort; parameter compare is a pointer to
  the comparison function that determines sorting order */
void bubble(int work[], const int size, int (*compare)(int a, int b))
{
   int pass; /* pass counter */
   int count; /* comparison counter */
   
   void swap(int *element1Ptr, int *element2ptr); /* prototype */
   
   /* loop to control passes */
   for (pass = 1; pass < size; pass++){
   
        /* loop to control number of comparisons per pass */
        for (count = 0; count < size -1; count++){
            
            /* if adjacent elements are out of order, swap them */
            if (( *compare)(work[count], work[count + 1])){
                swap(&work[count], &work[count + 1]);
        }  /*end if */
    }/* end for */
   
   }/* end for */

}/* end function bubble */

  /* swap values at memory locations to which element1Ptr and
     element2Ptr point */
     
void swap(int *element1Ptr, int *element2Ptr)
{
     int hold; /* temporary holding variable */
     
     hold = *element1Ptr;
     *element1Ptr = *element2Ptr;
     *element2Ptr = hold;

}/* end function swap */

/* determine whether elements are out of order for an ascending
   order sort */
int ascending(int a, int b)
{
    
    return b < a;
    /* swap if b is less than a */
}  /* end function ascending */

/* determine whether elements are out of order for a descending
   order sort */
int descending(int a, int b)
{
    
   return b > a;
    /* swap if b is greater than a */
}/* end function descending */

int read_integers(int a[])
{
    int size = 0;
    
    int number;
    while (1)
    {
        scanf("%d", &number);
        
        if (number == SENTINEL)
        {
            break;
        }
        
        if (number < 0)
        {
            continue;
        }
        
        a[size++] = number;
    }
    
    return size;
}
void print_integers(int sequence[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", sequence[i]);
    }
    printf("\n");
}

