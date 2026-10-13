#include <stdio.h>


int main ( void )
{

  int x = 0, y = 0;

  if ( x > 10 )
    {
      y += 17;
    }
  else
    {
      y += 37;
    }

  int i = 10;
  x = 5;
  i++;

  printf ( "%d : %d", i, y );

  y++;
  ++y;
  --y;
  y--;

  printf ( "%d", y );

  for ( int j = 0; j < 10; j++ )
    {
      printf ( "%d", j );
    }

  int z = 0;
  z = ( 1,2,3 );

  int za[] = { 1,2,3,4 };

  int a = 0;
  int b = 0;

  a == b;
  a != b;
  a < b;
  a > b;
  a <= b;
  a >= b;


  int c = 999;


  printf ( "%zu\n", sizeof c );
  printf ( "%zu\n", sizeof ( 2 + 7 ) );
  printf ( "%zu\n", sizeof 3.14 );
  printf ( "%zu\n", sizeof ( int ) );
  printf ( "%zu\n", sizeof ( char ) );

  int p = 0;

  while ( p < 10 )
    {
      printf ( "i is now %d!\n", p );
      p++;
    }

  do
    {
      printf ( "do-while: p is %d\n", p );
      p++;
    }
  while ( i < 10 );

  int goat_count = 2;

  switch ( goat_count )
    {
    case 0:
      printf ( "You have no goats.\n" );
      break;

    case 1:
      printf ( "You have a singular goat.\n" );
      break;

    case 2:
      printf ( "You have a brace of goats.\n" );
      break;

    default:
      printf ( "You have a bona fide plethora of goats!\n" );
      break;
    }

  return 0;
}

