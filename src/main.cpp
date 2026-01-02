#include <iostream>
#include "student.h"

using namespace std;

int main() {
    int id;
    string name;

    cout << "Shtimi i studentit\n";
    cout << "------------------\n";

    cout << "Shkruaj ID: ";
    cin >> id;
    cin.ignore();

    cout << "Shkruaj emrin: ";
    getline(cin, name);

    Student student(id, name);

    cout << "\nStudenti u shtua me sukses:\n";
    student.displayStudent();

    return 0;
}
