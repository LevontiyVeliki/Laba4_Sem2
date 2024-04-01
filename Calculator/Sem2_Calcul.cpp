#include <iostream>
#include "Function.h"
#include "Exp.h"
#include "Line.h"
#include "Menu.h"

using namespace std;
vector<Function*> funcList{ &f_exp, &f_line };
int main(){
	Menu menu(funcList);
	while (Function* pObj = menu.SelectObject()) {
		pObj->Calculate();
		cout << "Bye! \n";
		return 0;
	}
}
	



