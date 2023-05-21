#include<iostream>
using namespace std;
class Account{

private:
int accountNumber;
string name;
int balance;
int password;

public:
void setAccountNumber(int n)
{
    accountNumber=n;
}

void setBalance(int b)
{
balance=b;
}

void setPassword(int s)
{
     password=s;
}

void setName(string na)
{
name=na;
}

string getName()
{
    return name;
}

int getPassword()
{
return password;
}

int getBalance(){
    return balance;
}

int getAccount(){
return accountNumber;
}

//Other methods

void withdraw(int num){
    balance=balance-num;
}
void deposit(int num){
    balance=balance+num;
}

};

int main() {
Account user1;
 user1.setName("Mohamed Essam");
 user1.setAccountNumber(1);
 user1.setBalance(5000);
 user1.setPassword(2023);
 
 Account user2;
 user2.setName("Asmaa");
 user2.setAccountNumber(2);
 user2.setBalance(5000);

int password;
int accnumber;
char op;
int money;

cout<<"Enter your Account Number"<<endl;
cin>>accnumber;

cout<<"Enter your Password"<<endl;
cin>>password;

if(user1.getPassword()==password && user1.getAccount()==accnumber)
{
    while(true){
        cout<<"Enter the operation you want"<<endl; cin>>op;
        switch(op){
            case 'b':cout<<"Your balance is:"<<user1.getBalance()<<endl;
            break;
            case 'w':{
                cout<<"Enter the amount you want to withdraw";
                cin>>money;
                
                if(money<=user1.getBalance())
                {
                    user1.withdraw(money);
                }
                else{
                    cout<<"You don't have enough money"<<endl;
                    }
            }
            break;
            case 'd':{
                cout<<"Enter the amount you want to deposit";
                
                cin>>money;
                
                user1.deposit(money);
                }
                break;
                case 'e':
                return 0;
                break;
                }
                }
                }
else{
    cout<<"Wrong Account number or password"<<endl;
    }
    }