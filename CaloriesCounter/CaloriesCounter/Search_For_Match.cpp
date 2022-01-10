#include "Search_For_Match.h"
#include "RepeatTheSearch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"

using namespace std;

void Search_For_Match() {

	string ProductType;
	cin >> ProductType;
	bool notFound = true;

	for (int i = 0; i < Prods.size(); i++) {
		if (ProductType != Prods.at(i).GetName()) {
			continue;
		}
		else {
			Prods.at(i).Show();
			ChoosenProds.push_back(Prods.at(i));
			notFound = false;
			cout << "\n=========================" << endl;

			RepeatTheSearch();
		}
		
	}

		if (notFound) {
			cout << "Word not found.Try again." << endl;
			Search_For_Match();
		}


}