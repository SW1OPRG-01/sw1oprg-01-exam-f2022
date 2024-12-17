#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Kortfunktioner.h"

int main(int argc, char **argv) {
  srand(time(NULL));

  int hand[5];

  for(int i = 0; i < 5; i++) {
    hand[i] = TraekKort();
  }
  PrintHaand(hand, sizeof(hand) / sizeof(int));
  return 0;
}