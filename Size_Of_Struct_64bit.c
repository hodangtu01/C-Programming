#include<stdio.h>
#include<string.h>

typedef struct mstruct{
              char a;
              int    b;
              short c;
} mstruct;

int main(int argc, char const *argv[])
{
	printf("size of mstruct in CPU 64 bit: %d\n", sizeof(mstruct));

	return 0;
}
