#include <stdio.h>


#define MAX_SIZE 100
#define SENTINEL 0


int read_integers(int sequence[]);

void print_integers(int sequence[], int size);
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int sequence[], int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
        
        // Last i elements are already in place
        for (j = 0; j < n-i-1; j++)
            if (sequence[j] > sequence[j+1])
                swap(&sequence[j], &sequence[j+1]);
}
void printArray(int sequence[], int size)
{
    for (int i=0; i < size; i++)
        printf("%d ", sequence[i]);
    printf("\n");
}

int main()
{
    char name[2];
int order;
int counter;
int sequence[MAX_SIZE];
    
    printf("sort");
    getchar();
    
    printf("Enter your order:");
    scanf("%s", name);

    printf("Enter a sequence of number: ");
    int size = read_integers(sequence);
    
    printf("You entered: ");
    print_integers(sequence, size);

    int n = sizeof(sequence)/sizeof(sequence[0]);
    bubbleSort(sequence, n);
    
    printArray(sequence, n);
    
   return 0;

}


int read_integers(int sequence[])
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

        sequence[size++] = number;
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





