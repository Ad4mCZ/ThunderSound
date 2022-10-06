#include <stdio.h>

int main() {
     printf("Zadejte čas, po kterém udeřil blesk:");
     int time;
     scanf("%i", &time);
     int lighting = time * 340;
     printf("Blesk udeřil ve vzdálenosti %im",lighting);
     return 0;
}