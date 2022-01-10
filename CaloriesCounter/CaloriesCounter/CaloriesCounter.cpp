
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "global.h"
#include "Fill_Prods.h"
#include "Search_For_Match.h"
#include "SumCalories.h"
#include "RepeatTheSearch.h"

using namespace std;

vector<product> Prods;
vector<product> ChoosenProds;

int main()
{
	cout << "Welcome in calories calculator! To check the sum of calories in your food enter the name of the product: " << endl;
	Fill_Prods();
	Search_For_Match();
}
