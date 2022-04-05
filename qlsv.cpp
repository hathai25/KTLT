#include<iostream>
#include<string>

using namespace std;

int n;
string students[100] = {};

int addStudent() {
    string name;
    cin.ignore();
    int i = 0;
    cout << "New student: ";
    getline(cin, name);
    for (int i = 0; i<100; i++) {
        if (students[i] == "") {
            students[i] = name;
            cout << "Student added successfully!";
            break;
        }
    }
    return 0;
}

void printStudent() {
    int i = 0;
    for (int i = 0; i<100; i++) {
        if (students[i] != "") cout << students[i] << "\n";
        else break;
    }
}

int main() {
    cout << "Welcome to student manager!";
    while(1) {
        cout << "\n\nChoose what you want to do: \n 1. Add students \n 2. Sort the students alphabetically \n 3. Print the students' list.\n";
        cout << "Press any other key to quit the program!";
        cout << "\nEnter your choice: ";
    
        cin >> n;
        switch(n) {
        case 1:
            addStudent();
            break;
        case 2: 
            cout << "sort";
            break;
        case 3:
            printStudent();
            break;
        default:
            cout << "Exiting...\n";
            return 0;
        }
    }
}