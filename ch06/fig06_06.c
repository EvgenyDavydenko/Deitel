/* Вычисление суммы элементов массива */

#include <stdio.h>
#define SIZE 12

int main ( void )
{
  int arr[ SIZE ] = { 1, 3, 5, 4, 7, 2, 99, 16, 45, 67, 89, 45 };
  int i;
  int total = 0;

  for ( i = 0; i < SIZE; i++) {
    total += arr[ i ];
  }

  printf( "Total of array element values is %d\n", total );
  return 0;

}
