#include "iostream"
#include "Header.h"
void WritePersonData(const std::string& name, const unsigned short* age, const std::string& height, const std::string& weight) {
	std::cout << "���:\t" << name << std::endl
		<< "����:\t" << height << std::endl
		<< "���:\t" << weight << std::endl
		<< "�������:\t" << *age << std::endl
		<< "���������� �����:\t" << salary << std::endl;
}