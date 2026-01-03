#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=== Projekti 4 ===" << endl;
    cout << "1. Pershendetje" << endl;
    cout << "2. Dil" << endl;
    cout << "Zgjedhja: ";
    cin >> choice;

    if (choice == 1){
        cout << "Mire se erdhe!" << endl;
        cout << "Programi u hap!" << endl;
        cout << "A ke ndonje pyetje?" << endl;
    }
    else
        cout << "Programi u mbyll." << endl;

    
    return 0;
}