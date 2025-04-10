#include <iostream>

#include <string>

using namespace std;

class PoSClass {
private: 
	int totalpricecents;
public: 
	//constructor 
	PoSClass() : totalpricecents(0){}
	// a bunch of if statements that help to increment the total price based off the code tag of the product
	void addItemsPrice(const string& codetag) {
		if (codetag == "00295") {
			totalpricecents += 15;
		}
		else if (codetag == "10342") {
			totalpricecents += 50; 
		}
		else if (codetag =="10557") {
			totalpricecents += 45;
		}
		else if (codetag == "11221") {
			totalpricecents == 90;
		}
		else if (codetag == "12151") {
			totalpricecents += 75;
		}
		else if (codetag == "12157") {
			totalpricecents += 80;
		}
	}

	// this function calculates and outputs the total price of the tested objects
	void totalPrice() const {
		int USD = totalpricecents / 100;
		int USDcents = totalpricecents % 100;

		cout << "$" << USD << ".";

		if (USDcents < 10) {
			cout << "0";
		}

		cout << USDcents << endl;

	}

	void eliminate() {
		totalpricecents = 0;
	}


};

int main() {
	PoSClass pointofsale;

	pointofsale.totalPrice();
	pointofsale.addItemsPrice("10342");
	pointofsale.addItemsPrice("10557");
	pointofsale.addItemsPrice("10557");

	pointofsale.totalPrice();

	pointofsale.eliminate();

	pointofsale.totalPrice();

	return 0;

}