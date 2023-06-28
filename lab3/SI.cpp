#include<iostream>
using namespace std;
class SI{
	int p,t,r;
	public:
		SI(int P,int T,int R=10){
			p =P;
			t = T,
			r = R;
		};
		void get(){
			cout << "interest = " << p*t*r/100 << endl;
		}
};

int main(){
	SI i1(100,2,5);
	SI i2(100,2);
	i1.get();
	i2.get();
	return 0;
}
