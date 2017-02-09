#include <stdio.h>


#define MAX_SIZE 100
#define SENTINEL 0


/*
* reads a sequence of integers from the keyboard into an array
* (until a sentinel occurs) and returns the size of the sequence.
* parameter: sequence - the array
* return: size - the size of the array
*/
int read_integers(int sequence[]);


/*
* print a sequence of integers.
* parameter: sequence - the array
* parameter: size - the size of the array
*/
void print_integers(int sequence[], int size);


/*
* checks two sequences of integers for order equivalence.
* parameter: sequence - the array (the first half is the first sequence,
                        the second half is the second sequence)
* parameter: size - the size of the array (must be even so that the check
                    makes sense)
* return: equivalence - 1 if the two sequences are order equivalent,
                        0 otherwise
*/
int check_order_equivalence(int sequence[], int size);


/*
* Program execution begins from here.
* parameters: none
*/
int main()
{
    int sequence[MAX_SIZE];

    printf("Enter two sequences of integers: ");
    int size = read_integers(sequence);

    printf("You entered: ");
    print_integers(sequence, size);

    int equivalence = check_order_equivalence(sequence, size);
    if (equivalence)
    {
        printf("The sequences are order equivalent\n");
    }
    else{
        printf("The sequences are not order equivalent\n");
    }

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


int check_order_equivalence(int sequence[], int size)
{
    int equivalence = 1;

    // two sequences can't have equal sizes, if their total size is odd
    if (size % 2 != 0)
    {
        equivalence = 0;
    }
    else
    {
        int half_size = size / 2;

        int i, j;
        // iterate through all pairs of (i, j) such as 0 <= i < j < half_size
        for (i = 0; i < half_size; i++)
        {
            for (j = i + 1; j < half_size; j++)
            {
                // get i-th and j-th elements of the first sequence
                int a_i = sequence[i], a_j = sequence[j];
                // get i-th and j-th elements of the second sequence
                int b_i = sequence[half_size + i], b_j = sequence[half_size + j];

                // check whether this (i, j)-pair breaks the mutual order
                // (i.e. the order between a[i] and a[j] differs
                // from the order between b[i] and b[j])
                // if some pair breaks the order,
                // then the sequences are not order equivalent
                if (a_i < a_j && b_i >= b_j)
                {
                    equivalence = 0;
                }
                if (a_i > a_j && b_i <= b_j)
                {
                    equivalence = 0;
                }
                if (a_i == a_j && b_i != b_j)
                {
                    equivalence = 0;
                }
            }
        }
    }

    return equivalence;
}
