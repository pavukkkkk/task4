

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "CHISLITEL(1) ILI ZNAMENATEL(2)? ";
    cin >> a;
    cout << "VVEDITE NOMER DNYA: ";
    cin >> b;
    if (a == 1) {
        switch (b) {
        case 1:
            cout << 2;
            break;
        case 2:
            cout << 3;
            break;
        case 3:
            cout << 4;
            break;
        case 4:
            cout << 2;
            break;
        case 5:
            cout << 4;
            break;

        }
    }
    else {
            switch (b) {
            case 1:
                cout << 2;
                break;
            case 2:
                cout << 3;
                break;
            case 3:
                cout << 4;
                break;
            case 4:
                cout << 3;
                break;
            case 5:
                cout << 3;
                break;

            }

        }
}

