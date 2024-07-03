#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>

using namespace std;

int question_num;
int level;
int type;
int q_right = 0;
int q_wrong = 0;
bool ans = true;

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
                q_wrong++;
            }
            else {
                q_right++;
                cout << "Right Answer : -)\n";
                system("color 2F"); // green
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
                q_wrong++;
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // green
                q_right++;
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
                q_wrong++;
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // green
                q_right++;
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
                q_wrong++;
            }
            else {
                cout << "Right Answer : -)\n";
                system("color 2F"); // green
                q_right++;
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
                    q_wrong++;
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // green
                    q_right++;
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
                    q_wrong++;
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // green
                    q_right++;
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
                    q_wrong++;
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // green
                    q_right++;
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
                    q_wrong++;
                }
                else {
                    cout << "Right Answer : -)\n";
                    system("color 2F"); // green
                    q_right++;
                }
                break;
            }
            cout << "\n\n";
            break;
        }
    }
}

void results() {
    cout << "------------------------------------\n\n";
    cout << "F I N A L  A N S W E R S \n\n";
    cout << "------------------------------------\n\n";
    cout << "Number of questions    : " << question_num << "\n";
    cout << "Questions level        : ";
    if (level == 1) {
        cout << "Easy \n";
    }
    else if (level == 2) {
        cout << "Middle \n";
    }
    else if (level == 3) {
        cout << "Hard \n";
    }
    else if (level == 4) {
        cout << "Mix \n";
    }
    cout << "Questions type         : ";
    if (type == 1) {
        cout << "ADD \n";
    }
    else if (type == 2) {
        cout << "Minus \n";
    }
    else if (type == 3) {
        cout << "Multi \n";
    }
    else if (type == 4) {
        cout << "Division \n";
    }
    else if (type == 5) {
        cout << "Add / Minus / Multi / Div \n\n";
    }
    cout << "Number of right         : " << q_right;
    cout << "\nNumber of wrong         : " << q_wrong;
    cout << "\n------------------------------------\n\n";
    char ans2;
    cout << "\nDo you want to play again? Y/N ? ";
    cin >> ans2;
    if (ans2 == 'Y' || ans2 == 'y') {
        ans = true;
    }
    else if (ans2 == 'N' || ans2 == 'n') {
        ans = false;
    }
}

int main() {
    srand(time(0));
    while (ans) {
        readinformation();
        type_function();
        results();
    }
    return 0;
}
