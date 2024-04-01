#include <vector>
#include "Function.h"

class Menu {
public:
	Menu(std::vector<Function*>);
	Function* SelectObject();
private:
	int  SelectItem(int nltem);
	std::vector<Function*> pObj;
};
