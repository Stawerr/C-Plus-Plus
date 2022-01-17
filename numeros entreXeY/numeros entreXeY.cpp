#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    cout << "Introduza o primeiro valor" << "\n";
    cin >> x;
    cout << "Introduza o ultimo valor" << "\n";
    cin >> y;

    int* vec = new int[y];

    for (int i = x; i < y; i++) {
        if (i %2==0) {
            cout << i<<" | ";
        }
    }
}
