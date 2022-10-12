#include <stdio.h>

int findMissingNumber(int arr[], int size)
{
  int totalSum = (size + 1) * (size + 2) / 2;
  int i, currentSum = 0;

  for (i = 0; i < size; i++)
  {
    currentSum += arr[i];
  }

  return totalSum - currentSum;
}

int main()
{
  int i, n;
  printf("Enter the size of the array : ");
  scanf("%d", &n);

  int arr[n - 1];

  printf("Enter the values : \n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int missingNumber = findMissingNumber(arr, n);

  printf("Missing number is: %d\n", missingNumber);
  return 0;
}
