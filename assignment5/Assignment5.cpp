#include <iostream>
#include <string>
using namespace std;

class User
{
private:
    std::string name;
    int yearofborn;
    int monthofbirth;
    int birthday;
    double salary;

public:
    // Constructor
    User(const std::string &n, int year, int month, int day, double sal)
        : name(n), yearofborn(year), monthofbirth(month), birthday(day), salary(sal) {}

    // Comparison operator
    int operator==(const User &other) const
    {
        if (yearofborn == other.yearofborn)
        {
            if (monthofbirth == other.monthofbirth)
            {
                return birthday == other.monthofbirth ? 0 : (monthofbirth > other.monthofbirth ? 1 : -1);
            }
            return monthofbirth > other.monthofbirth ? 1 : -1;
        }
        return yearofborn > other.yearofborn ? 1 : -1;
    }

    // Addition operator for average salary
    double operator+(const User &other) const
    {
        return (salary + other.salary) / 2.0;
    }

    // Method to add annual increment
    void operator+(int percent_increment)
    {
        salary += salary * (percent_increment / 100.0);
    }

    // Method to display user details
    void displayDetails() const
    {
        std::cout << "Name: " << name << "\nBirth Year: " << yearofborn << "\nBirth Month: " << monthofbirth
                  << "\nBirth Day: " << birthday << "\nSalary: " << salary << "\n";
    }
};

int main()
{
    // Input for user1
    std::string name1;
    int year1, month1, day1;
    double salary1;
    cout << "Enter details for User 1:\n";
    cout << "Name: ";
    cin >> name1;
    cout << "Birth Year: ";
    cin >> year1;
    cout << "Birth Month: ";
    cin >> month1;
    cout << "Birth Day: ";
    cin >> day1;
    cout << "Salary: ";
    cin >> salary1;

    User user1(name1, year1, month1, day1, salary1);

    // Input for user2
    std::string name2;
    int year2, month2, day2;
    double salary2;

    cout << "Enter details for User 2:\n";
    cout << "Name: ";
    cin >> name2;
    cout << "Birth Year: ";
    cin >> year2;
    cout << "Birth Month: ";
    cin >> month2;
    cout << "Birth Day: ";
    cin >> day2;
    cout << "Salary: ";
    cin >> salary2;

    User user2(name2, year2, month2, day2, salary2);

    int result = user1 == user2;
    double average_sal = user1 + user2;

    user1.displayDetails();
    user2.displayDetails();

    std::cout << "Comparison result: " << result << "\nAverage Salary: " << average_sal << "\n";

    // Adding 5% increment to user1's salary
    user1 + 5;
    user1.displayDetails();

    // Adding 10% increment to user2's salary
    user2 + 10;
    user2.displayDetails();
   
   return 0;
}