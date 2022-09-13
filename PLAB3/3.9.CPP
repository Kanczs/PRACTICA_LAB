
#include <iostream>

using namespace std;

class Account{

	public:

		int withdraw;

		int account;

		int acc1();

}; 



int Account::acc1(){

	return account-withdraw;

}



int main(void){

	Account n;

	n.account=10000;

	n.withdraw=12000;

	if(n.acc1()<0)

	{

		cout<<"Withdrawal amount exceeded account balance."<<endl;

	}

	else

	{

		cout<<n.acc1()<<endl;

	}

}