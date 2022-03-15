#include <iostream>
using namespace std;
class Heater {
    int temp;
public:
    Heater() {
        temp = 15;
        cout << "TEMPERATURE=" << temp << endl;
    }
    int warmer() {
        temp = temp + 5;
        return temp;
    }
    int cooler() {
        temp= temp - 5;
        return temp;
    }
    ~Heater() {
        cout << "Program ends here" << endl;
    }
};
int main()
{
    Heater h1;
    h1.warmer();
    h1.cooler();
    int menu;
    while (1) {
        cout << "ENTER 1 FOR WARMER TEMPERATURE  AND ENTER 2 FOR COOLER TEMPERATURE" << endl;
        cin >> menu;
        switch (menu) {
        case 1:
            cout << "TEMPERATURE=" << h1.warmer() << endl;
            break;
        case 2:
            cout << "TEMPERATURE=" << h1.cooler() << endl;
            break;
        default:
            cout << "INVALID NUMBER ENTERED.PLEASE ENTER A VALID NUMBER" << endl;
        }
    }
}

