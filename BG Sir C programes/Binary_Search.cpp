#include <stdio.h>

int main(void) {
  int arr[100], beg, end, mid, i, n, key;

  printf("How many elements \n");
  scanf("%d", &n);
  printf("\nEnter %d elements in ascending order\n", n);
  for (i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  printf("\nYou have entered: \n");
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n\nkey element = ");
  scanf("%d", &key);
  beg = 0;
  end = n - 1;
  while (beg <= end) {
    mid = (beg + end) / 2;
    if (key == arr[mid]) {
      printf("\n\nSuccess!!. Position= %d", mid + 1);
      break;
    } else if (key < arr[mid]) {
      end = mid - 1;
    } else {
      beg = mid + 1;
    }
  }
  if (beg > end) {
    printf("\n\nFailure. Data Not found");
  }

  return 0;
}
