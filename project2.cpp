#include <iostream>
#include <cmath>
#include <algorithm>
#include <windows.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int question_num;
int level;
int type;

void readinformation() {
    cout << "How many questions do you want to answer? ";
    cin >> question_num;
    cout << "\n\n";

    cout << "What is the level you want to answer? [1] easy, [2] middle, [3] hard, [4] mix? ";
    cin >> level;
    cout << "\n\n";

    cout << "What is the type you want to answer? [1] add, [2] sub, [3] mult, [4] div, [5] mix? ";
    cin >> type;
    cout << "\n\n";
}

void type_function() {
    int num1, num2;
    for (int i = 1; i <= question_num; i++) {
        cout << "Question [ " << i << " / " << question_num << " ] \n\n";

        // Set the number ranges based on the level
        switch (level) {
        case 1:
            num1 = rand() % 10;
            num2 = rand() % 10;
            break;
        case 2:
            num1 = rand() % 100;
            num2 = rand() % 100;
            break;
        case 3:
            num1 = rand() % 1000;
            num2 = rand() % 1000;
            break;
        case 4:
            num1 = rand() % 200;
            num2 = rand() % 200;
            break;
        }

        int result;

        switch (type) {
        case 1:
            cout << num1 << " + " << num2 << " = ";
            cin >> result;
            if (result != (num1 + num2)) {
                cout << "Wrong Answer : (-\n";
                cout << "The right answer: " << (num1 + num2) << "\n";
                system("color 4E");
                Beep(500, 1500);
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // blue
            }
            cout << "\n\n";
            break;

        case 2:
            cout << num1 << " - " << num2 << " = ";
            cin >> result;
            if (result != (num1 - num2)) {
                cout << "Wrong Answer : (-\n";
                cout << "The right answer: " << (num1 - num2) << "\n";
                system("color 4E");
                Beep(500, 1500);
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // blue
            }
            cout << "\n\n";
            break;

        case 3:
            cout << num1 << " * " << num2 << " = ";
            cin >> result;
            if (result != (num1 * num2)) {
                cout << "Wrong Answer : (-\n";
                cout << "The right answer: " << (num1 * num2) << "\n";
                system("color 4E");
                Beep(500, 1500);
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // blue
            }
            cout << "\n\n";
            break;

        case 4:
            if (num2 == 0) num2 = 1; // Avoid division by zero
            cout << num1 << " / " << num2 << " = ";
            cin >> result;
            if (result != (num1 / num2)) {
                cout << "Wrong Answer : (-\n";
                cout << "The right answer: " << (num1 / num2) << "\n";
                system("color 4E");
                Beep(500, 1500);
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // blue
            }
            cout << "\n\n";
            break;

        case 5:
            // For mix type, generate a random operation
            int op = rand() % 4 + 1;
            switch (op) {
            case 1:
                cout << num1 << " + " << num2 << " = ";
                cin >> result;
                if (result != (num1 + num2)) {
                    cout << "Wrong Answer : (-\n";
                    cout << "The right answer: " << (num1 + num2) << "\n";
                    system("color 4E");
                    Beep(500, 1500);
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // blue
                }
                break;

            case 2:
                cout << num1 << " - " << num2 << " = ";
                cin >> result;
                if (result != (num1 - num2)) {
                    cout << "Wrong Answer : (-\n";
                    cout << "The right answer: " << (num1 - num2) << "\n";
                    system("color 4E");
                    Beep(500, 1500);
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // blue
                }
                break;

            case 3:
                cout << num1 << " * " << num2 << " = ";
                cin >> result;
                if (result != (num1 * num2)) {
                    cout << "Wrong Answer : (-\n";
                    cout << "The right answer: " << (num1 * num2) << "\n";
                    system("color 4E");
                    Beep(500, 1500);
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // blue
                }
                break;

            case 4:
                if (num2 == 0) num2 = 1; // Avoid division by zero
                cout << num1 << " / " << num2 << " = ";
                cin >> result;
                if (result != (num1 / num2)) {
                    cout << "Wrong Answer : (-\n";
                    cout << "The right answer: " << (num1 / num2) << "\n";
                    system("color 4E");
                    Beep(500, 1500);
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // blue
                }
                break;
            }
            cout << "\n\n";
            break;
        }
    }
}

int main() {
    srand(time(0));
    readinformation();
    type_function();
    return 0;
}
