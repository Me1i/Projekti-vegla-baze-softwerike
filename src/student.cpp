#include "student.h"
#include <iostream>

Student::Student(int id, string name) {
studentId = id;
studentName = name;
}

void Student::displayStudent() {
std::cout << "ID: " << studentId << std::endl;
std::cout << "Emri: " << studentName << std::endl;
}

// Funksion për pjesën tjetër
int Student::getId() {
return studentId;
}