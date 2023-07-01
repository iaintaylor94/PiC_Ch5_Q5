// Reformat Question 5 in the textbook

#include <stdio.h>

int main(void) {

  int n, twoPwrN;

  // Create heading of table
  printf ("TABLE OF POWERS OF TWO\n");
  printf ("  n     two to power n\n");
  printf ("--- ------------------\n");

  // Generate contents of table
  twoPwrN = 1;
  for (n = 0; n <= 10; n++) {
    printf ("%3i %18i\n", n, twoPwrN);
    twoPwrN *= 2;
  }
  
  return 0;
}