#include <iostream>
using namespace std;
int main() {
	//list of declared variables
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float totalCostPhp, sugarCostPhp, riceCostPhp, sardinesCostPhp, coffeeCostPhp, milkCostPhp;
	float sugarQty, sardinesQty, riceQty, coffeeQty, milkQTy;
	float usdToPhp, poundToPhp;  //$1 to 57.44 pesos  //1p to 75.04 Philippine Peso
	cout << "========= SEVENPM SARI-SARI STORE POINT OF SALE SYSTEM ============\n";
	//get user input a price for declared variables
	cout << "Price of sugar: "; cin >> sugarPriceUSD;
	cout << "Price of rice: "; cin >> ricePricePound;
	cout << "Price of sardines: "; cin >> sardinesPricePound;
	cout << "Price of coffee: "; cin >> coffeePriceUSD;
	cout << "Price of milk: "; cin >> milkPriceUSD;
	//get user input a quantity for declared variables 
	cout << "Quantity of sugar: "; cin >> sugarQty;
	cout << "Quantity of rice: "; cin >> riceQty;
	cout << "Quantity of sardines: "; cin >> sardinesQty;
	cout << "Quantity of coffee: "; cin >> coffeeQty;
	cout << "Quantity of milk: "; cin >> milkQTy;
	// declared a conversion of dollars to peso
	cout << "The cost of one dollar in pesos: "; cin >> usdToPhp;
	cout << "The cost of one pound in pesos: "; cin >> poundToPhp;
	cout << "======================================================";
	/* calcuate the cost each item in php
	calculate the total cost in php*/
	sugarCostPhp = sugarPriceUSD * sugarQty;
	riceCostPhp = ricePricePound * riceQty;
	sardinesCostPhp = sardinesPricePound * sardinesQty;
	coffeeCostPhp = coffeePriceUSD * coffeeQty;
	milkCostPhp = milkPriceUSD * milkQTy;
	totalCostPhp = sugarCostPhp + riceCostPhp + sardinesCostPhp + coffeeCostPhp + milkCostPhp;
	return 0;
}