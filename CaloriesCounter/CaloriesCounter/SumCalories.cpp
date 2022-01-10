#include "SumCalories.h"
#include "Fill_Prods.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"

using namespace std;

	int SumCalories() {

		int calSum = 0;
		for (int i = 0; i < ChoosenProds.size(); i++) {

			calSum += ChoosenProds.at(i).GetCalories();
		}
		return calSum;
	}

	double SumFat() {

		double fatSum = 0;
		for (double i = 0; i < ChoosenProds.size(); i++) {

			fatSum += ChoosenProds.at(i).GetFat();
		}
		return fatSum;
	}
		
	double SumCarbs() {

			double carbSum = 0;
			for (double i = 0; i < ChoosenProds.size(); i++) {

				carbSum += ChoosenProds.at(i).GetCarb();
			}
		return carbSum;
	}
		
	double SumProteins() {

		double prSum = 0;
		for (double i = 0; i < ChoosenProds.size(); i++) {

			prSum += ChoosenProds.at(i).GetProt();
		}
		return prSum;
	}
