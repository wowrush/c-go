//uva10215
#include <iostream>
#include <cmath>
#include <iomanip>//fixed<<setprecision用這個要打<iomanip>
using namespace std;

int main(){
	double l=0.0;
	double w=0.0;
	while(cin>>l>>w){
		double a=12.0;
		double b=-4*(w+l);
		double c=l*w;
		double max=(-b - sqrt(b*b-4*a*c))/(2*a);//sqrt開根號
		double min= l < w ? l/2:w/2;//?=if,:=else
		cout<<fixed<<setprecision(3)/*設置點浮數的有效數字為n位*/<<max<<" 0.000 " << min<<endl;
	}
}
