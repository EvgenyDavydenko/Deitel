/* Инициализация элементов массива arr
четными целыми числами от 2 до 20 */
#include <stdio.h>
#define SIZE 10

int main (void)
{
  int arr[ SIZE ];
  int i;

  for (i = 0; i < SIZE; i++) {
    arr[i] = 2 + 2 * i;
  }
  printf("%s%12s\n", "Element", "Value");

  for (i = 0; i < SIZE; i++) {
    printf("%7d%8d\n", i, arr[i]);
  }
  return 0;
}
