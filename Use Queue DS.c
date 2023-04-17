#include <stdio.h>
#include <stdlib.h>

// Function to reverse k elements in a queue
void reverse(int queue[], int n, int k); 

int main() {
    int n, k;

    // Prompt user to enter the size of the queue and read input from user
    printf("Enter the size of the queue: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        // If scanf() fails to read input or entered value is not positive, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Create a queue of the specified size and prompt user to enter its elements
    int queue[n];
    printf("Enter the elements of the queue: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &queue[i]);
    }

    // Prompt user to enter the value of k and read input from user
    printf("Enter the value of k: ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        // If scanf() fails to read input or entered value is not positive or exceeds the queue size, print an error message and exit program with failure status
        fprintf(stderr, "Invalid input\n");
        return 1;
    }

    // Reverse the first k elements of the queue
    reverse(queue, n, k);

    // Print the reversed queue
    printf("The reversed queue is: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");

    return 0;
}

void reverse(int queue[], int n, int k) {
    // Use two pointers to swap the first k elements of the queue with their respective counterparts at the end of the queue
    for (int i = n - k, j = n - 1; i < j; i++, j--) {
        int temp = queue[i];
        queue[i] = queue[j];
        queue[j] = temp;
    }
}
