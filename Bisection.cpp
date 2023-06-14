#include<iostream>
#include<cmath>
using namespace std;
double value(double a){
	return (cos(a)+(5*a)-6);
}

int main(){
	double x,Xl,Xu,Xm,Error,temp=0;
	double Es=0.005;
	int i,iteration=0;
	//initial values input
	for(i=0;i<2;i++){
	cout<<"Enter a value for the function : ";
	cin>>x;
	cout<<endl;
	if(value(x)==0){
		cout<<x<<" is the root";
		break;
	}else if(value(x)>0){
		Xu=x;
	}else if(value(x)<0){
		Xl=x;
	}
	}
	
	
	do{
		Xm=(Xl+Xu)/2;
		if(value(Xm)==0){
			cout<<Xm<<" is the root."<<endl;
			break;
		}else if(value(Xm)>0){
			Xu=Xm;
		}else if(value(Xm)<0){
			Xl=Xm;
		}
		
		Error=abs((Xm-temp)/Xm);
		temp=Xm;
		iteration+=1;
		
	}while(Es<Error);
	cout<<endl;
	cout<<Xm<<" is the required solution"<<endl;
	cout<<"Process was completed in "<<iteration<<" iterations."<<endl;
	cout<<"The functional value at "<<Xm<<" is "<<value(Xm)<<endl;
}
