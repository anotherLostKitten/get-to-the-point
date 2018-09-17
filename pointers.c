#include <stdlib.h>
#include <stdio.h>

int main() {
  unsigned int big_boye = 2123123123;
  char* big_ptr = &big_boye;
  printf("Here the lad be: %x\n\nWe cut the lad to be bite sized:\n", big_boye);
  for (int i = 3; i >= 0; i--) {
    printf("%hhx\n", *(big_ptr + i));
    *(big_ptr + i) += 1;
  }
  printf("\nThe lad largerified: %x (also in non-nerd numbers: %u)\n\n", big_boye, big_boye);
  for (int i = 3; i >= 0; i--)
    *(big_ptr + i) += 16;
  printf("The lad largerified more largely: %x (also in non-nerd numbers: %u)\n\n", big_boye, big_boye);
  char temp = *(big_ptr + 1);
  *(big_ptr + 1) = *(big_ptr + 2);
  *(big_ptr + 2) = temp;
  printf("The lad swapped around bazinga style: %x (also in non-nerd numbers: %u)\n\n", big_boye, big_boye);
  return 0;
}
