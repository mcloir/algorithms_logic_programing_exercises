#include <stdio.h>
#include <stdbool.h>

void bubbleSortOtimizado(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool trocou = false;
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocou = true;
            }
        }
        
        // Se não houve trocas, a lista está ordenada
        if (!trocou) {
            break;
        }
    }
}