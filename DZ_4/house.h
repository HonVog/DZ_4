#include "fail.h"
#include <iostream>
#include <vector>

class house
{
	std::vector<flat> arrFlat;
public:
	house(flat& pArrFlat) {
		arrFlat.push_back(pArrFlat);
	}

	~house() {}

	void print() {
		for (int i{}; i < arrFlat.size(); ++i)
			arrFlat[i].print();
	}
};

