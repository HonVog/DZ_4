
#include <iostream>
#include "fail.h"

class human
{
	std::string name;
	std::string surname;
	std::string faname;

public:
	// конструктор
	human(std::string pName, std::string pSurname, std::string pFaname) :
		name{ pName }, surname{ pSurname }, faname{ pFaname } {}
	human(std::string pName, std::string pSurname) :human(pName, pSurname, "") {}
	human(std::string pName) :human(pName, "", "") {}
	human() :human("", "", "") {}
	// геттеры
	std::string getName() { return name; }
	std::string getSurname() { return surname; }
	std::string getFaname() { return faname; }
	// сеттеры
	void setName(std::string pName) { name = pName; }
	void setSurname(std::string pSurname) { surname = pSurname; }
	void setFaname(std::string pFaname) { faname = pFaname; }
	// выведение данных
	void print() {
		std::cout << "Name :" << name << std::endl
			<< "Surname :" << surname << std::endl
			<< "Patronymic :" << faname << std::endl;
	}
};

