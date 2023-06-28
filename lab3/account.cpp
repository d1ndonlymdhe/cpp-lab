#include<iostream>
using namespace std;
 class Account{
 	int balance;
 	public:
 		Account(){
 			balance = 50;
		 }
		 Account(int amt){
		 	balance = 50+amt;
		 }
		 void display(){
		 	cout << "balance = " << balance << endl;
		 }
 };
 
 int main(){
 	Account A;
 	Account A2(100);
 	A.display();
 	A2.display();
 	return 0;
 }
