#include<iostream>
#include<string>

using namespace std;

int n;
string students[1000] = {"Pham Huy Ha Thai", "Tran Duc Nam"};

int addStudent() {
    while(1) {
        string name;
        cin.ignore();
        cout << "New student: ";
        getline(cin, name);
        cin.clear();
        if (name.length() == 0) break;
        else {
            int i = 0;
            while (students[i] != "") {
                if (students[i+1] == "") {
                    students[i+1] = name;
                    cout << "Student add successfully!";
                    break;
                }
                i++;
            }
        }
    }
    return 0;
}

void sortStudent() {
    int i = 0, j = 1;
    while (students[i] != "") {
        while (students[j] != "") {
            if (students[i].compare(students[j])) {
                students[i].swap(students[j]);
            } 
            j++;
        }  
        i++;
    }
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
            sortStudent();
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