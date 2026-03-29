#include <iostream>
using namespace std;

int main() {
    int choice;
    string task;

    cout << "Simple Task Manager\n";

    while (true) {
        cout << "\n1. Add Task\n2. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter your task: ";
            cin >> task;
            cout << "Task Added: " << task << endl;
        } 
        else {
            break;
        }
    }

    return 0;
}
