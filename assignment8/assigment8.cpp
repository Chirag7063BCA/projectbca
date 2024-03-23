#include <iostream>
using namespace std;
class function
{
private:
    int totalSum = 0;   // Initializeing
    int partialSum = 0; // Initializeing
public:
    int seriesSum(int n)
    {
        for (int i = 1; i <= n; ++i)
        {
            partialSum =partialSum+i;        
            totalSum = totalSum+ partialSum; 
        }
        return totalSum;
    }
};
int main()
{
     function f1;
    int inputfromuser;
    cout << "Enter a positive integer: ";
    cin >> inputfromuser;

    if (inputfromuser <= 0)
    {
        cout << "Please enter a positive integer." << endl;
    }
    else
    {
        int result = f1.seriesSum(inputfromuser);
        cout << "Sum of series: " << result << endl;
    }
    return 0;
}