#include <iostream>
#include "Menu.h"
using namespace std;


Menu::Menu(vector<Function*> _pObj){
	for (Function* i : _pObj) {
		pObj.push_back(i);
	}
	pObj.push_back(0);
}


Function* Menu::SelectObject(){
	int nltem = pObj.size();
	cout << "=====================================\n";
	cout << "Select one of the following function in \n";
	for (int i = 0; i < nltem; ++i) {
		cout << i + 1 << ". ";
		if (pObj[i]) cout << pObj[i]->GetName() << endl;
		else cout << "Exit" << endl;
	}
	int item = SelectItem(nltem);
	return pObj[item - 1];
}
int Menu::SelectItem(int nltem) {
	cout << "---------------------------\n";
	int item;
	while (true) {
		cin >> item;
		if ((item > 0) && (item <= nltem)) {
			cin.get();
			break;
		}
		else {
			cout << "Error (must be number from 1 to " << nltem << "):" << endl;
			cin.clear();
		}
	}
	return item;
}
