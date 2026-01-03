#include "student.h"
#include <iostream>
using namespace std;

Student::Student(int id, string name) {
    studentId = id;
    studentName = name;
}

void Student::displayStudent() const {
    cout << "ID: " << studentId << endl;
    cout << "Emri: " << studentName << endl;
}

int Student::getId() const {
    return studentId;
}
