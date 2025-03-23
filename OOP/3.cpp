#include <iostream>
using namespace std;

class Box {
    int length, width, height;
public:
    Box(int l, int w, int h) : length(l), width(w), height(h) {}

    int volume() const {
        return length * width * height;
    }

    bool operator>(const Box& b) {
        return this->volume() > b.volume();
    }

    void display() {
        cout << "Volume: " << volume() << endl;
    }
};

int main() {
    Box b1(3, 4, 5), b2(2, 6, 5);
    if (b1 > b2)
        cout << "Box 1 is larger" << endl;
    else
        cout << "Box 2 is larger or equal" << endl;
    return 0;
}
