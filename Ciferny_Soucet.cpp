#include <stdio.h>

int main()
{
	int cislo = 123;
	int soucet = 0;

	printf("Ciferny soucet cisla %d", cislo);
	for (; cislo > 0; soucet += cislo % 10, cislo /= 10);
	printf(" je %d\n", soucet);
}
