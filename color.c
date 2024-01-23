#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
	int i = -1;

	printf("\n");
	while (++i < 256){
		printf("\033[48;5;%dm\033[38;5;%dm-%.3d-",i ,i, i);
	}
}