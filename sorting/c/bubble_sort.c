//linux terminal command to compile : gcc -o output bubble_sort.c
//linux termianl command to execute : ./output

//implementation of bubble sort algorithm to sort the integer array in ascending order
#include <stdio.h>

void bubble_sort(int*, int);

//helper functions
void swap(int*, int*);
void print_array(int*, int);

int main() {
    int n;

    //accepting the length of the array from the user
    printf("Enter the length of the array: ");
    scanf("%d", &n);

    int a[n];

    //accepting the elements of the array from the user
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", a+i);
    }
    printf("\n");

    printf("The original array: ");
    print_array(a, n);
    
    bubble_sort(a, n);

    printf("The sorted array: ");
    print_array(a, n);

    return 0;
}

//swaps the values of two variables
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//prints the elements of the input array in terminal
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
    }
    printf("\n");
}

//sorts the input array of length n using the bubble sorting method
void bubble_sort(int arr[], int n) {
    /*
        Parameters:
            array to be sorted
            length of the array

        Return value:
            Void

        Effect:
            arr is sorted in place in ascending order of the integers
    */

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] < arr[j]) {
                swap(arr+i, arr+j);
            }
        }
    }
}
