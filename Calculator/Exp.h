#include "Function.h"
#include "string"


class Exp : public Function {
public:
	Exp() : name("e ^ x") {}
	const std::string& GetName() { return name; }
	void Calculate();
protected:
	std::string name;
};
extern Exp f_exp;
