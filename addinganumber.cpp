#include <iostream>
using namespace std ;
class ab{
    public:
    int a,sum,x=1234;

    void funtionaa(){
        while(x>0){
        a=x%10;
        sum=(sum*10)+a;
        x=x/10;
      

        }
        cout<<sum;
    }
};
int main(){
  ab b;
  b.funtionaa();  
  return 0;
}