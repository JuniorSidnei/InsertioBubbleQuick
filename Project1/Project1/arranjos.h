#pragma once
#include <iostream>

class arranjos
{
public:
	arranjos();
	~arranjos();

	void reset(int vet[], int max);
	void insertion(int vet[], int max);
	void bubble(int vet[], int max);
	void quick(int vet[], int max, int comeco, int fim);
};

