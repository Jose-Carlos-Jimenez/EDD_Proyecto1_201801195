#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    cout << "Ingresa un dato.";
    int n = 0;
    cin >> n;
    cout << "El dato seleccionado es " + to_string(n);
    system("clear");
    return 0;
}
