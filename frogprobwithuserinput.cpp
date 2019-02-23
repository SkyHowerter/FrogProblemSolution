#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
using namespace std;
// 	code by: Logan Howerter //
int main(){
	int prob;
	cout << "probability x100?" << endl;
	cin >> prob;
	int max=100;
	int min=0;
	srand(time(NULL));
	int a; // front frog
	int b1; // rear frog
	int b2; // rear frog
	double ca; // front croak
	double cb1; // rear croak
	double cb2; // rear croak
	double cfr=0; //croak from rear
	double cff=0; //croak from front
	double rhf=0; // rear has female
	double fhf=0; // front has female
	double rim=0;// rear is male
	double fim=0; // front is male
	for (int i=0; i<prob*100; i++){
		cff=0;
		cfr=0;
		a = std::rand();
		b1 = std::rand();
		b2 = std::rand();
		ca = rand()%(max-min+2);
		cb1 = rand()%(max-min+2);
		cb2 = rand()%(max-min+2);
		if (b1%2==0 || b2%2==0){
			if (b1%2==0){
				if (cb1<=prob){
					cfr++;
				}
			}
			if (b2%2==0){
				if (cb2<=prob){
					cfr++;
				}
			}
		}
		if (a%2==0){
			if (ca<=prob){
				cff++;
			}
		}
		if (cff==0 && cfr==1){
			if(a%2!=0){
				fhf++;
			}
			else{
				fim++;
			}
			if(b1%2!=0 || b2%2!=0){
				rhf++;
			}
			else{
				rim++;
			}
		}
	}
	double cofir;
	double cofif;
	cofir = 100*rhf/1000*1/(rhf/1000+rim/1000);
	cofif = 100*fhf/1000*1/(fhf/1000+fim/1000);
	cout << "times where rear had female: " << rhf << endl;
	cout << "times where rear was all male: " << rim << endl;
	cout << "times where front had female: " << fhf << endl;
	cout << "times where front was all male: " << fim << endl;
	cout << "chance of female in rear in percent: " << cofir << endl;
	cout << "chance of female in front in percent: " << cofif << endl;
}
