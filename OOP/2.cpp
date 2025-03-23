#include <iostream>
using namespace std;

class Vector {
    int x, y;
public:
    Vector(int x = 0, int y = 0) : x(x), y(y) {}

    Vector operator-() {
        return Vector(-x, -y);
    }

    void display() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Vector v1(5, -3);
    Vector v2 = -v1;
    v2.display();
    return 0;
}
