#include<iostream>
using namespace std;
class overloading {
    private:
float value;
public:
overloading (float Value) {
    value=Value;
    }
void display() { 
    cout<<value<<endl; 
    }
int friend operator + (float h, overloading  obj); 
};
int operator + (float h, overloading  obj) {
return h + obj.value ;
}
int main() {
overloading  obj(100.2);
overloading  obj2 = 100.34f + obj;
obj2.display();
return 0;
}