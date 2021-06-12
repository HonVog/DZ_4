#include "fail.h"
#include <iostream>
#include <vector>


class flat{
	std::vector <human> arrHuman;
public:
	flat(human& pArrHuman) {
		arrHuman.push_back(pArrHuman);
	}
	~flat() {}

	void print() {
		for (int i{}; i < arrHuman.size(); ++i)
			arrHuman[i].print();
	}
};

