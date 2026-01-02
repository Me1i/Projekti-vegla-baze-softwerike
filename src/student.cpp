#include "student.h"
#include <iostream>

Student::Student(int id, string name) {
    studentId = id;
    studentName = name;
}

void Student::displayStudent() {
    cout << "ID: " << studentId << endl;
    cout << "Emri: " << studentName << endl;
}
