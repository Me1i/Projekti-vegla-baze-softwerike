#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

class Student {
private:
    int studentId;
    string studentName;

public:
    Student(int id, string name);
    void displayStudent() const; // shfaq studentin
    int getId() const;           // kthen ID-në
};

#endif
