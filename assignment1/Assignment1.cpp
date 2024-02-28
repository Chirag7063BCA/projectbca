#include <iostream>
#include <stdlib.h>
using namespace std;
class bank{
    int id,pass,login_id,login_pass,balance=0,dep,with;
    char choice;
public:
   void printIntroMenu(){
        cout<<"Please select an option from the menu below:"<<endl;
        cout<<"l:- Login" <<endl <<"c:- Create New Account" <<endl<<" q :- Quit"<<endl;
        cin>>choice;
    }
    void createAccount(){
        cout<<" Enter your ATM  id: ";
        cin>>id;
        cout<<"Enter your password: ";
        cin>>pass;
        cout<<" Your account has been created in our bank"<<endl;
    }
    void login(){
        cout<<"Please enter your user id: ";
        cin>>login_id;
        cout<<"Please enter your password: ";
        cin>>login_pass;
    }
    void printMainMenu(){
        cout<<"d :- Deposit Money "<<endl<<"w :-Withdraw Money "<<endl<<"r :- Request Balance "<<endl<<"q :- Quit"<<endl;
        cin>>choice;
    }
    void start(){
        printIntroMenu();
        while(true){
        switch (choice){
        case 'l':
            login();
            if(id==login_id && pass==login_pass){
                cout<<"Access Granted!"<<endl;
                while(1){
                printMainMenu();
                    switch (choice){
                    case 'd':   
                        cout<<"Amount of deposit: $";
                        cin>>dep;
                        balance =balance+dep;
                        break;
                    case 'w':
                        cout<<"Amount of withdrawl: $";
                        cin>>with;
                        balance =balance-with;
                        break;
                    case 'r':
                        cout<<"Your balance Remain $"<<balance<<endl;
                        break;
                    case 'q':
                        exit(0);
                        break;
                    }
                }
            }else{
                cout<<"***!!!!! Incorrect id password!!!! ***"<<endl;
                printIntroMenu();
            }
            break;
        case 'c':
            createAccount();
            printIntroMenu();
            break;
        case 'q':
            cout<<"Thanks for stopping by!"<<endl;
            exit(0);
            break;
        default:
            break;
        }
        }
        }
};
int main(){
    bank menu1;
    cout<<"Welcome to  ATM Machine"<<endl;
    menu1.start();
    return 0;
}