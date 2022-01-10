#include "product.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"

using namespace std;


	string product::GetName(){
		return Name;
	}

	int product::GetCalories() {
		return calories;
	}

	double product::GetFat() {
		return Fat;
	}

	double product::GetCarb() {
		return carbohydrates;
	}

	double product::GetProt() {
		return proteins;
	}

	void product::Show() {
		cout << "Product: " << Name << endl;
		cout << "Calories/100g: " << calories << endl;
		cout << "Fat/100g: " << Fat << endl;
		cout << "Carbohydrates/100g: " << carbohydrates << endl;
		cout << "Proteins/100g: " << proteins << endl;
	}
