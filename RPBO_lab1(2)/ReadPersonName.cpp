#include "iostream"
#include "Header.h"
std::string ReadPersonName() {
	std::string name;
	std::cout << "������� ��� ��������" << std::endl;
	std::cin >> name;
	return name;
}