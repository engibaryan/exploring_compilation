//this is main.c file
#include <stdio.h>
#include "math_utils.h"

int main() {
	int number = 12;
	int result = square(number);
	printf("Square of %d is %d\n",number,result);
	return(0);
}
