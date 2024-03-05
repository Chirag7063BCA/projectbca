#include <iostream>
using namespace std;
class computation
{
public:
    int compute(int a, int b)
    {
        return a + b;
    }
    float compute(int a, float b)
    {
        return a + b;
    }
    double compute(int a, double b)
    {
        return a + b;
    }
    int compute(char a, char b)
    {
        return (int)a + (int)b;
    }
    int compute(char a, int b)
    {
        return (int)a + b;
    }
    int compute()
    {
        int a = 0, b = 0;
        return a + b;
    }
};
int main()
{
    computation obj1;
    cout << "Eaample no 1: " << obj1.compute(6, 4) << endl;
    cout << "Eaample no 2: " << obj1.compute(55, 9.5f) << endl;
    cout << "Eaample no 3: " << obj1.compute(45, 23.5) << endl;
    cout << "Eaample no 4: " << obj1.compute('A', 'A') << endl;
    cout << "Eaample no 5: " << obj1.compute('A', 30) << endl;
    cout << "Eaample no 6: " << obj1.compute() << endl;
    return 0;
}