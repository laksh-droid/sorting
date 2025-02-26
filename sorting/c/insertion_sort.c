//linux terminal command to compile : gcc -o output bubble_sort.c
//linux termianl command to execute : ./output

//implementation of bubble sort algorithm to sort the integer array in ascending order
#include <stdio.h>


//function declarations
void insertion_sort(int*, int);
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
    
    insertion_sort(a, n);

    printf("The sorted array: ");
    print_array(a, n);

    return 0;
}

//sorts the input array of length n using the insertion sorting method
void insertion_sort(int arr[], int n) {
    /*
        Parameters:
            array to be sorted
            length of the array

        Return value:
            Void

        Effect:
            arr is sorted in place in ascending order of the integers
    */
    

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;

    }
}

//prints the elements of the input array in terminal
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
    }
    printf("\n");
}
