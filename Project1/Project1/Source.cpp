#include <iostream>
#include "arranjos.h"

#define max 100
int main()
{
	arranjos arr;
	int vetor[max];

	arr.reset(vetor, max);
	arr.bubble(vetor, max);
	arr.reset(vetor, max);
	arr.insertion(vetor, max);
	arr.reset(vetor, max);
	arr.quick(vetor, max, vetor[0], vetor[max - 1]);

	system("pause");
	return 0;
}