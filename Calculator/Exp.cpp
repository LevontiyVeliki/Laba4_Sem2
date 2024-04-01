#include <iostream>
#include <math.h>
#include "Exp.h"

using namespace std;
void Exp::Calculate() {
	cout << "Calculation for function ó = " << name << endl;
	cout << "Enter x = "; 
	cin >> x;
	cin.get();
	cout << "y = " << exp(x) << endl;
	cin.get();
}Exp f_exp;