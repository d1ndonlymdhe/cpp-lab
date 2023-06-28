#include<iostream>
using namespace std;

class Area{
	int length,breadth;
	public:
		void get(int l,int b){
			length = l;
			breadth = b;
			cout<<"Area of rectangle = "<<l*b<<endl;
		}
		void get(int l){
			length = l;
			breadth = 0;
			cout << "Area of square = "<<l*l<<endl;
		}
};

int main(){
	Area Rect;
	Area Sq;
	Rect.get(2,3);
	Sq.get(4);
	return 0;
}
