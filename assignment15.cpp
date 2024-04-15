#include <iostream>
using namespace std;
class ClassB;
class ClassA
{
private:
    int a;

public:
    ClassA(int a) : a(a) {}

    friend int sum(const ClassA &objA, const ClassB &objB);
};

class ClassB
{
private:
    int b;

public:
    ClassB(int b) : b(b) {}

    friend int sum(const ClassA &objA, const ClassB &objB);
};

int sum(const ClassA &objA, const ClassB &objB)
{
    return objA.a + objB.b;
}

int main()
{
    ClassA objA(5);
    ClassB objB(10);

    int total = sum(objA, objB);
    cout << "Sum of private members: " << total << endl;

    return 0;
}
