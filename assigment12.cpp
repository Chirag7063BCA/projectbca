#include <iostream>

using namespace std;

class largerUnit;

class smallUnit {
private:
    double inches;

public:
    smallUnit(double inches) : inches(inches) {}

    operator largerUnit();

    void display() const {
        cout << "Measurement in inches: " << inches << " inches" << endl;
    }
};

class largerUnit {
private:
    double feet;

public:
    largerUnit(double feet) : feet(feet) {}

    void display() const {
        cout << "Measurement in feet: " << feet << " feet" << endl;
    }

    friend class smallUnit;
};

smallUnit::operator largerUnit() {
    return largerUnit(inches / 12.0);
}

int main() {
    smallUnit small(36);
    largerUnit large = small;
    large.display();
    small.display();
    return 0;
}
