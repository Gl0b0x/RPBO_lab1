#pragma once
extern unsigned short height;
extern double salary;
unsigned short ReadPersonAge();
void ReadPersonData(std::string&, unsigned short&, double&);
void ReadPersonData(std::string&, unsigned short&, unsigned short&, unsigned short&);
void ReadPersonHeight();
std::string ReadPersonName();
void ReadPersonSalary(double*);
void ReadPersonWeight(unsigned short&);
void WritePersonData(const std::string&, const unsigned short*, const std::string& height ="", const std::string& weight = "");