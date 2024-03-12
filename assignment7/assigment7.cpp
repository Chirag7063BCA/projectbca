#include <iostream>
#include <cstring>
using namespace std;
class sample {
public:
    char *name;
    sample() : name(nullptr) {}
    sample(const char *str, int length) {
        name = new char[length + 1];
        strcpy(name, str);
    }
    sample(const sample &copy) {  
        int length = strlen(copy.name);
        name = new char[length + 1];
        strcpy(name, copy.name);
    }
};

int main( ) {
    sample user1((char *)"chitkara", 8);
    sample user2 = user1; 
    strcpy(user2.name, "dummy");
    cout << user2.name << user1.name <<endl;
    return 0;
}