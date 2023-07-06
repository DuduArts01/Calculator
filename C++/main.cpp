#include <iostream>
#include <stdlib.h>

using namespace std;

void title(void);
void choose_options(void);
void sum(void);
void subtration(void);
void multiplication(void);
void division(void);

int main(void) {
    choose_options();

    cout << "Press enter to continue...";
    cin.ignore();
    cin.ignore();
    
    return 0;
}

void title(void) {
    system("clear");
    cout << "--------------------------"<< endl;
    cout << "       Calculator" << endl;
    cout << "--------------------------"<< endl;
}

void choose_options(void) {
    bool continueLoop = true;

    while (continueLoop == true){
        int choose;
        system("clear");
        title();
        cout << "[1] Sum\n[2] Subtration\n[3] Multiplication\n[4] Division\n" << endl;
        cout << "Choose: ";
        cin >> choose;

        if(choose == 1) {
            system("clear");
            title();
            sum();
            continueLoop = false;

        } else if(choose == 2){
            system("clear");
            title();
            subtration();
            continueLoop = false;

        } else if(choose == 3) {
            system("clear");
            title();
            multiplication();
            continueLoop = false;

        } else if(choose == 4) {
            system("clear");
            title();
            division();
            continueLoop = false;

        }else{
            cout << "You chose wrong number" << endl;
            cout << "Press enter to continue...";
            cin.ignore();
        }
    }
}

void sum(void){
    int n1, n2;
    cout << "       SUM\n";
    cout << "__________________________\n\n";
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    cout << "\n" << n1 << " + " << n2 << " = " << n1 + n2 << endl << endl;
}

void subtration(void){
    int n1, n2;
    cout <<"        SUBTRATION\n";
    cout << "__________________________\n\n";
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    cout << "\n" << n1 << " - " << n2 << " = " << n1 - n2 << endl << endl;

}

void multiplication(void){
    int n1, n2;
    cout << "       MULTIPLICATION\n";
    cout << "__________________________\n\n";
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    cout << "\n" << n1 << " * " << n2 << " = " << n1 * n2 << endl << endl;

}

void division(void){
    int n1, n2;
    cout << "       DIVISION\n";
    cout << "__________________________\n\n";
    cout << "Number 1: ";
    cin >> n1;
    cout << "Number 2: ";
    cin >> n2;

    cout << "\n" << n1 << " / " << n2 << " = " << n1 / n2 << endl << endl;

}
