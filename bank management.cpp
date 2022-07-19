#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;
class bank
{
	char name[100],add[100],y;
	int balance;
	
	public:
		void open_account();
		void deposit_money();
		void withdraw_money();
		void display_account();
};
void bank :: open_account()
{
	cout<<"enter full name  ::";
	cin.ignore();
	cin.getline(name,100);
	cout<<"enter your address  ::";
	cin.ignore();
	cin.getline(add,100);
	cout<<"what type of account you open saving(s) or current(c)";
	cin>>y;
	cout<<"enter amount for deposit::";
	cin>>balance;
	cout<<"your acount is created \n";
	
}
void bank::deposit_money()
{
	int a;
	cout<<"enter how much you deposit";
	cin>>a;
	balance+=a;
	cout<<"total amount you deposit :"<< balance;
}
void bank::display_account()
{
	cout<<"your full name :: \t"<<name;
	cout<<"\n your address ::\t"<<add;
	cout<<"\n type of account that you open::\t"<<y;
	cout<<"\n amount you deposit:: \t"<<balance;
}
void bank:: withdraw_money()
{
	float amount;
	cout<<"\n withdraw ::";
	cout<<"enter amount to withdraw";
	cin>>amount;
	balance-=amount;
	cout<<"now total amount is left::"<<balance;
}
int main()
{
	int ch,x;
	bank obj;
	do
	{
	cout<<" BANK MANAGEMENT SYSTEM \n";
	cout<<"1) Open Account \n";
	cout<<"2) Deposit Money \n";
	cout<<"3) Withdraw Money \n";
	cout<<"4) Display Account \n";
	cout<<"5) Exit \n";
	cout<<"select option from above";
	cin>>ch;
	switch(ch)
	{
		case 1:{
		     	
		        cout<<"1) open account \n";
	         	obj.open_account();
	         	break;
          	   }
		
		case 2:{
			    cout<<"2) deposit money\n";
		obj.deposit_money();
		break;
			
			
		}
		case 3:{cout<<"3) withdraw money \n";
		obj.withdraw_money();
		break;
			
		}
		case 4:{cout<<"4) display account  \n";
		obj.display_account();
		break;
			
		}
		case 5:{
			if (ch=5)
			{
				exit(1);
			}
		}
			
		default:
			cout<<"this is not exit try again \n";
			}
	        cout<<"\n do you want to select next option then press:: y \n ";
	cout<<"if you want to exit then press::N";
	x=getch();
	if(x=='n' || x=='N')
	exit(0);
}while(x=='y' || x=='Y');
	return 0;
}
