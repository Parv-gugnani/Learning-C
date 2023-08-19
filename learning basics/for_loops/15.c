// odd or even

#include <stdio.h>

int main() {
  int size;
  int arr[size], j, i;

  printf("Enter the size of array: ");
  scanf("%d", &size);

  printf("Enter the number of the array:\n");
  for (j = 0; j < size; j++) {
    scanf("%d", &arr[j]);
  }

  printf("\nodd numbers are: ");
  for (i = 0; i < size; i++) {
    if (arr[i] % 2 != 0) {
      printf("%d ", arr[i]);
    }
  }

  printf("\nEven numbers are: ");
  for (i = 0; i < size; i++) {
    if (arr[i] % 2 == 0) {
      printf("%d ", arr[i]);
    }
  }
}

// Enter the size of array: 5
// Enter the number of the array:
// 1
// 2
// 5
// 2
// 5

// odd numbers are: 1 5 5
// Even numbers are: 2 2