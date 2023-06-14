#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return(cos(x)+(5*x)-6);
}
int main(){
	double Xi,Xii,Xiii,Error;
	double Es=0.005;
	int iteration=1;
	cout<<"Enter the value for Xi : ";
	cin>>Xi;
	cout<<endl;
	cout<<"Enter the value for Xi-1 : ";
	cin>>Xii;
	cout<<endl;
	do{
		//Xi+1
		Xiii=Xi-((Xi-Xii)/(f(Xi)-f(Xii)))*f(Xi);
		Error=abs((Xiii-Xi)/Xiii);
		iteration+=1;
	
		Xii=Xi;
		Xi=Xiii;
	}while(Es<Error);
	cout<<Xiii<<" is the required solution"<<endl;
	cout<<"The process completed in "<<iteration<<" iterations."<<endl;
	cout<<"The functional value at "<<Xiii<<" is "<<f(Xiii)<<endl;
	return 0;
}
