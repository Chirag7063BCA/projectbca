#include<iostream>
#include<cstdlib>
using namespace std;
class sample {
public:
    int Compute(int (sample::*func)(int),int n) {
        return (this->*func)(n);      
    }
    int findFactorial(int n) {
        int fact=1;
        for(int i=1;i<=n;i++) {
        fact = fact * i;
        }
        return fact;
    }
    int findSquare(int n) {
        return n*n;
    }
    int findCube(int n) {
        return n*n*n;
    }
};

int main(int argc, char *argv[]) {
    if(argc!=2){
        cout<<"Usage: "<<argv[0]<<" <N> "<<endl;
        return 1;
    }
    int N= atoi(argv[1]); 
    sample obj;
    int r1,r2,r3;
    r1=obj.Compute(&sample::findFactorial,N);
      r2=obj.Compute(&sample::findSquare,N);
        r3=obj.Compute(&sample::findCube,N);
    cout<<"The factorial  of   "<<N<<" will be  ::"<<r1<<endl;
    cout<<" The Square of "<<N<<" will be :: "<<r2<<endl;
    cout<<" The Cube of "<<N<<" will be :: "<<r3<<endl;
    return 0;
}