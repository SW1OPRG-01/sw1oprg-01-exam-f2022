#include <stdio.h>
#include <stdlib.h>
#include "Kortfunktioner.h"

int TraekKort() {
  int random = rand() % 12 + 1;
  return random;
}

void PrintKort(int kort) {
  switch (kort) {
  case 1:
    printf("Es");
    break;
  case 2:
    printf("2");
    break;
  case 3:
    printf("3");
    break;
  case 4:
    printf("4");
    break;
  case 5:
    printf("5");
    break;
  case 6:
    printf("6");
    break;
  case 7:
    printf("7");
    break;
  case 8:
    printf("8");
    break;
  case 9:
    printf("9");
    break;
  case 10:
    printf("10");
    break;
  case 11:
    printf("Knaegt");
    break;
  case 12:
    printf("Dame");
    break;
  case 13:
    printf("Konge");
    break;
  default:
    printf("Ugyldigt kort: %d", kort);
    break;
  }
  printf(" ");
}

void PrintHaand(int* hand, size_t size) {
  for(size_t i = 0; i < size; i++) {
    PrintKort(hand[i]);
  }
  printf("\n");
}