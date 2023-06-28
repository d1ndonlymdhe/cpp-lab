#include<iostream>
using namespace std;
class Rectangle{
	int length;
	int breadth;
	public:
		Rectangle(){
			length = 0;
			breadth = 0;
		}
		Rectangle(int a){
			length =a ;
			breadth = a;
		}
		Rectangle(int a,int b){
			length = a;
			breadth = b;
		}
		int getArea(){
			cout << "Area = "<< length*breadth << endl;
			return length*breadth;
		}
};

int main(){
	Rectangle R1;
	Rectangle R2(2);
	Rectangle R3(2,3);
	R1.getArea();
	R2.getArea();
	R3.getArea();
	return 0;
	
}
