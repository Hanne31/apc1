#include <stdio.h>

int main() {
  printf("\x1b[32m-----------------------------\n");
  printf("      N O T A   L E G A L    \n");
  printf("-----------------------------\n\x1b[0m");
  printf("\x1b[35mITEM              QTD   VALOR\n\x1b[0m");
  printf("\x1b[36m%-17s %3i %8.2f\n", "Banana nanica", 1, 15.00);
  printf("%-17s %3i %8.2f\n", "Maca fuji",    10, 50.00);
  printf("%-17s %3i %8.2f\n", "Uva globo",     5, 26.00);
  printf("------------------------------\n \x1b[36m");
  printf("\x1b[31mTOTAL..............R$ %8.2f\n\x1b[0m", 91.00);
    return 0;
}