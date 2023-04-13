#include <stdio.h>

int main() {
    int arr[10] = {1, 3, 4, 2, 1, 3, 4, 2, 5, 2}; 
    int freq[10]; 
    int n = 10; 

    for (int i = 0; i < n; i++) {
        freq[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    printf("Frequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }

    return 0;
}

