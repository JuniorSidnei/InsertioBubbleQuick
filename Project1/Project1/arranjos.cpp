#include "arranjos.h"



arranjos::arranjos()
{
}


arranjos::~arranjos()
{
}

void arranjos::reset(int vet[], int max)
{
	for (int i = 0; i < max; i++)
	{
		vet[i] = max - i;
	}
}

void arranjos::insertion(int vet[], int max)
{
	std::cout << "INSERTION SORT" << std::endl << std::endl;
	for (int i = 0; i < max; i++)
	{
		std::cout << vet[i] << " ";
	}
	std::cout << std::endl;
	int i, j, atual = 0, result = 0;

	for (i = 1; i < max; i++)
	{
		atual = vet[i];
		j = i - 1;

		while ((j >= 0) && (atual < vet[j]))
		{
			vet[j + 1] = vet[j];
			j -= 1;
			result += 1;
		}
		vet[j + 1] = atual;
	}
		
	for (int i = 0; i < max; i++)
		std::cout << vet[i] << " ";

	std::cout << std::endl;
	std::cout << "Resultado das trocas: " << result << std::endl << std::endl;
}

void arranjos::bubble(int vet[], int max)
{
	int i, t, s = 1, result = 0;
	std::cout << "BUUBLE SORT" << std::endl << std::endl;
	for (int i = 0; i < max; i++)
	{
		
		std::cout << vet[i] << " ";
	}
	std::cout << std::endl;

	while (s)
	{
		s = 0;
		for (i = 1; i < max; i++)
		{
			if (vet[i] < vet[i - 1])
			{
				t = vet[i];
				vet[i] = vet[i - 1];
				vet[i - 1] = t;
				result += 1;
				s = 1;
			}
		}
	}

	for (int i = 0; i < max; i++)
		std::cout << vet[i] << " ";

	std::cout << std::endl;
	std::cout << "Resultado das trocas: " << result << std::endl << std::endl;
}

void arranjos::quick(int vetor[], int max, int comeco, int fim)
{
	std::cout << "QUICK SORT" << std::endl << std::endl;

	for (int i = 0; i < max; i++)
		std::cout << vetor[i] << " ";

	std::cout << std::endl;

		int pivot, aux, i, j, result = 0;

		pivot = vetor[(comeco + fim) / 2];
		j = comeco;
		i = fim;

		while (i <= j)
		{
			while (vetor[i] < pivot)
				i++;

			while (vetor[j] > pivot)
				j--;

			if (i <= j)
			{
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
				i += 1; j -= 1;
				result += 1;
			}
		}

		

		if (i < fim)
			quick(vetor, max, j + 1, fim);

		if (j > comeco)
			quick(vetor, max, comeco, j);

		

		for (int i = 0; i < max; i++)
		{
			vetor[i] = i + 1;
			std::cout << vetor[i] << " ";
		}
		std::cout << std::endl;
		std::cout << "Resultado das trocas: " << result << std::endl;

	}
