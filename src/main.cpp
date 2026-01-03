#include <iostream>
#include <vector>
#include <string>
#include "student.h"

using namespace std;

int main() {
    vector<Student> students;  // Ruajmë të gjithë studentët
    int choice;

    while (true) {
        // MENU
        cout << "\nMENU\n";
        cout << "1. Shto student\n";
        cout << "2. Kërko student sipas ID\n";
        cout << "3. Shfaq të gjithë studentët\n";
        cout << "4. Fshij student sipas ID\n";
        cout << "5. Dil\n";
        cout << "Zgjedhja: ";
        cin >> choice;
        cin.ignore();  // për getline

        if (choice == 1) {
            // Add Student
            int id;
            string name;

            cout << "Shkruaj ID: ";
            cin >> id;
            cin.ignore();

            cout << "Shkruaj emrin: ";
            getline(cin, name);

            students.push_back(Student(id, name));
            cout << "\nStudenti u shtua me sukses:\n";
            students.back().displayStudent();

        } else if (choice == 2) {
            // Search Student
            int id;
            cout << "Shkruaj ID për kërkim: ";
            cin >> id;

            bool found = false;
            for (auto& s : students) {
                if (s.getId() == id) {
                    cout << "Studenti u gjet:\n";
                    s.displayStudent();
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Studenti nuk u gjet.\n";
            }

        } else if (choice == 3) {
            // List Students
            if (students.empty()) {
                cout << "Nuk ka studentë për të shfaqur.\n";
            } else {
                cout << "Lista e studentëve:\n";
                for (auto& s : students) {
                    s.displayStudent();
                    cout << "-----------------\n";
                }
            }

        } else if (choice == 4) {
            // Delete Student
            int id;
            cout << "Shkruaj ID për fshirje: ";
            cin >> id;

            bool found = false;
            for (auto it = students.begin(); it != students.end(); ++it) {
                if (it->getId() == id) {
                    students.erase(it);
                    cout << "Studenti u fshi me sukses.\n";
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Studenti nuk u gjet.\n";
            }

        } else if (choice == 5) {
            // Exit
            break;

        } else {
            cout << "Zgjedhje e pavlefshme.\n";
        }
    }

    return 0;
}
