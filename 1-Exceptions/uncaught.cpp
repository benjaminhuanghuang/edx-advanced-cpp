#include <iostream>

using namespace std;

int main() {
    try {
        throw 20;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl; }
    catch (...) { cout << "All other exception types." << endl; }

    try {
        throw 20.0;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl; }
    catch (...) { cout << "All other exception types." << endl; }

    try {
        throw true;
    }
    catch (int exc) { cout << "int exception." << endl; }
    catch (double exc) { cout << "double exception." << endl;}
    catch (...) { cout << "All other exception types." << endl; }

}
