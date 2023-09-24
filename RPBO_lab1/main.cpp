#include <iostream>
#include <sstream>
unsigned short height;
double salary;
unsigned short ReadPersonAge();
std::string ReadPersonName();
void ReadPersonHeight();
void ReadPersonWeight(unsigned short&);
void ReadPersonSalary(double*);
void ReadPersonData(std::string&, unsigned short&, double&);
void ReadPersonData(std::string&, unsigned short&, unsigned short&, unsigned short&);
void WritePersonData(const std::string&, const unsigned short*, const std::string& height="", const std::string& weight ="");

int main() {
	setlocale(LC_ALL, "Russian");
	unsigned short weight = 0;
	unsigned short age = 0;
	std::string name;
	ReadPersonData(name, age, salary);
	WritePersonData(name, &age);
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, &age, std::to_string(height), std::to_string(weight));
}

unsigned short ReadPersonAge() {
	unsigned short age;
	std::cout << "������� ������� ��������" << std::endl;
	std::cin >> age;
	return age;
}

std::string ReadPersonName() {
	std::string name;
	std::cout << "������� ��� ��������" << std::endl;
	std::cin >> name;
	return name;
}

void ReadPersonHeight() {
	std::cout << "������� ���� ��������" << std::endl;
	std::cin >> height;
}

void ReadPersonWeight(unsigned short &weight) {
	std::cout << "������� ��� ��������" << std::endl;
	std::cin >> weight;
}
void ReadPersonSalary(double* salary) {
	std::cout << "������� �������� ��������" << std::endl;
	std::cin >> *salary;
}
void ReadPersonData(std::string &name, unsigned short &age, double &salary) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonSalary(&salary);
}
void ReadPersonData(std::string& name, unsigned short& age, unsigned short& height, unsigned short &weight) {
	name = ReadPersonName();
	age = ReadPersonAge();
	ReadPersonHeight();
	ReadPersonWeight(weight);
}
void WritePersonData(const std::string& name, const unsigned short* age, const std::string& height, const std::string& weight) {
	setlocale(LC_ALL, "Russian");
	std::cout << "���:\t" << name << std::endl 
		<< "����:\t" << height << std::endl 
		<< "���:\t" << weight << std::endl
		<< "�������:\t" << *age << std::endl 
		<< "���������� �����:\t" << salary << std::endl;
}

