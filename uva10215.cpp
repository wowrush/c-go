//uva10215
#include <iostream>
#include <cmath>
#include <iomanip>//fixed<<setprecision�γo�ӭn��<iomanip>
using namespace std;

int main(){
	double l=0.0;
	double w=0.0;
	while(cin>>l>>w){
		double a=12.0;
		double b=-4*(w+l);
		double c=l*w;
		double max=(-b - sqrt(b*b-4*a*c))/(2*a);//sqrt�}�ڸ�
		double min= l < w ? l/2:w/2;//?=if,:=else
		cout<<fixed<<setprecision(3)/*�]�m�I�B�ƪ����ļƦr��n��*/<<max<<" 0.000 " << min<<endl;
	}
}
