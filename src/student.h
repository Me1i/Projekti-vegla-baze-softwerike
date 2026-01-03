#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int studentId;
    string studentName;

public:
    // Konstruktor
    Student(int id, string name);

    // Funksion për të shfaqur studentin
    void displayStudent() const;

    // Funksion për pjesën Search Student
    int getId() const;
};

#endif
