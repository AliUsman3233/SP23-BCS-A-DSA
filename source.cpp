#include<iostream>
#include<string>
using namespace std;

void getString(char* s, bool shouldIgnore) {
	if (shouldIgnore) {
		cin.ignore();
	}
	cin.getline(s, 20);
}


class Specie {
private:
	int id;
	char kingdom[20];
public:
	void setData() {
		cout << "Eneter Id" << endl;
		cin >> id;
		cout << "Eneter kingdom" << endl;
		getString(kingdom, true);
	}

	void displayData() {
		cout << "Id = " << this->id << endl;
		cout << "Kingdon = " << this->kingdom << endl;
	}
};

class Animal : public Specie {
private:
	char type[20];
	char color[20];
	int numOfLegs;
	int numOfArms;

public:
	void setData() {
		Specie::setData();
		cout << "Eneter type" << endl;
		getString(this->type, false);
		cout << "Eneter color" << endl;
		getString(this->color, false);
		cout << "Eneter numOfLegs" << endl;
		cin >> this->numOfLegs;
		cout << "Eneter numOfArms" << endl;
		cin >> this->numOfArms;
	}

	void displayData() {
		Specie::displayData();
		cout << "type = " << this->type << endl;
		cout << "color = " << this->color << endl;
		cout << "numOfLegs = " << this->numOfLegs << endl;
		cout << "numOfArms" << this->numOfArms << endl;
	};
};



void main1() {
	Animal a1;
	a1.setData();
	a1.displayData();

	system("pause");
}