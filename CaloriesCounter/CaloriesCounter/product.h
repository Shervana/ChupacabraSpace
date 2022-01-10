#pragma once
#include "product.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"

using namespace std;
class product
{
public:
	product(string N, int cal, double fat, double carb, double prot) {

		Name = N;
		calories = cal;
		Fat = fat;
		carbohydrates = carb;
		proteins = prot;
	}

	string GetName();
	int GetCalories();
	double GetFat();

	double GetCarb();

	double GetProt();

	void Show();
private:
	string Name;
	int calories;
	double carbohydrates;
	double Fat;
	double proteins;
};

