#include<iostream>
#include<cmath>
using namespace std;

double f(double x){
	return(cos(x)+(5*x)-6);
}
//function for first derivative
double ff(double x){
	return(-sin(x)+5);
}

int main(){
	double x,x_new,Error;
	double Es=0.005;
	int iteration=0;
	cout<<"Enter initial value for x : ";
	cin>>x;
	cout<<endl;
	do{
		if(f(x)==0){
			cout<<x<<" is the root."<<endl;
		}else{
			try{
				if(ff(x)==0){
					throw 0;
				}else{
					x_new=x-(f(x)/ff(x));
					Error=abs((x_new-x)/x_new);
					x=x_new;
					iteration+=1;
				}
			}
			catch(int i){
				cout<<"first derivative is zero!"<<endl;
			}
			
		}
	}while(Es<Error);
	cout<<x_new<<" is the required root."<<endl;
	cout<<"Process was completed in "<<iteration<<" iterations."<<endl;
	cout<<"The functional value at "<<x_new<<" is "<<f(x_new)<<endl;
	return 0;
	
}
