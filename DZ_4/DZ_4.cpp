#include <iostream>
#include "fail.h"

int main() {

	human luzer{"Jon","Silver", "Pairet"};
	flat hruhevka {luzer};
	house kamunalka{ hruhevka };

	kamunalka.print();
	return 0;
}


