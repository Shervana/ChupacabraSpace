#include "RepeatTheSearch.h"
#include "Search_For_Match.h"
#include "SumCalories.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"
#include <thread>
#include <chrono>

using namespace std;


void RepeatTheSearch() {

	cout << "Enter 1 to add the product, 2 to sum the calories, 3 sum fats, 4 to sum carbohydrates and 5 to sum proteins and 6 to close the app." << endl;
	string buf;
	int sw = 7; 
	cin >> buf;

	try {
		sw = stoi(buf);
	}
	catch (invalid_argument) {
		cout <<"Please, enter the number between 1 and 6." << endl;
	}

	try {
		if (sw < 1 || sw > 7) {
			throw "Wrong number. Please, enter the number between 1 and 6.";
		}
	}
	catch (const char* exception) {

		cout <<"Please, enter the number between 1 and 6." << endl;
		sw = 7;
	}

	switch (sw) {
	case 1:
		cout << "Add the product:" << endl;
		Search_For_Match();
		break;
	case 2:
		ShowSumVal(SumCalories);
		RepeatTheSearch();
		break;
	case 3:
		ShowSumVal(SumFat);
		RepeatTheSearch();
		break;
	case 4:
		ShowSumVal(SumCarbs);
		RepeatTheSearch();
		break;
	case 5:
		ShowSumVal(SumProteins);
		RepeatTheSearch();
		break;
	case 6:
		cout << "Thank you!" << endl;
		this_thread::sleep_for(chrono::milliseconds(400));
		break;
	
	case 7:
		RepeatTheSearch();
		break;
		}
	}


template<typename T>
void ShowSumVal(T(*sumVal)()) {
	cout << sumVal() << endl;
}