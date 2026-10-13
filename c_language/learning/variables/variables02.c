#include <stdio.h>

int plus_one ( int value )
{

  return value + 1;

}

int main ( void )
{
  int v = 4, j ;
  int data = plus_one ( v );
  printf ( "%d", data );
  return 0;

}
