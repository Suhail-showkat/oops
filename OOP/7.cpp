 #include <iostream>
using namespace std;

class Fahrenheit; // Forward declaration

class Celsius {
    float temp;
public:
    Celsius(float t = 0) : temp(t) {}

    operator Fahrenheit();

    void display() {
        cout << temp << "°C" << endl;
    }
};

class Fahrenheit {
    float temp;
public:
    Fahrenheit(float t = 0) : temp(t) {}

    operator Celsius() {
        return Celsius((temp - 32) * 5 / 9);
    }

    void display() {
        cout << temp << "°F" << endl;
    }
};

// Celsius to Fahrenheit conversion
Celsius::operator Fahrenheit() {
    return Fahrenheit((temp * 9 / 5) + 32);
}

int main() {
    Celsius c(25);
    Fahrenheit f = c;
    f.display();

    Celsius c2 = f;
    c2.display();
    return 0;
}
