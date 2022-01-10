#include "Fill_Prods.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"

using namespace std;

void Fill_Prods() {

	ifstream Data("NameAndValues.txt");

	if (!Data.is_open()) {
		cout << "File is not found." << endl;
	}
	else {
		while (!Data.eof()) {
			string buffer;
			string N;
			int cal;
			string bufFat, bufCarb, bufProt;
			getline(Data, buffer);
			istringstream info(buffer);
			info >> N >> cal >> bufFat >> bufCarb >> bufProt;
			double fat = stod(bufFat);
			double carb = stod(bufCarb);
			double prot = stod(bufProt);

			product El(N, cal, fat, carb, prot);
			Prods.push_back(El);
		}
	}
	/*for (int i = 0; i < Prods.size(); i++) {
	Prods.at(i).Show();
	}*/
}