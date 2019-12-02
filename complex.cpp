#include<iostream>
using namespace std;

class complex
{
	
	float a,b,c;	
	
	public:
	
	complex()
	{
		a=0;
		b=0;
	}
	
	friend istream &operator >>(istream &in, complex &c)
	{
		cout<<"\n Enter Real part:";
		in>>c.a;
		cout<<"\n Enter Imaginary part:";
		in>>c.b;
		return in; 
	}

	friend ostream &operator <<(ostream &out, complex &c)
	{
		out<<"\n"<<c.a<<"+"<<c.b<<"i";
		return out;
	}
   	complex operator+ (complex);
	complex operator* (complex);
	
};

complex complex::operator+ (complex c1)
{
	complex t;
	t.a=a+c1.a;
	t.b=b+c1.b;
	//cout<<"the sum is: "<<t.c;
	return(t);

}

complex complex::operator* (complex c1)
{
	complex t;
	t.a=a*c1.a;
	t.b=b*c1.b;
	//cout<<"the multiplication is"<<t.c;
	return(t);

}


int main()
{
	
	complex t1,r1,i,k;
	
	cout<<"\n Enter 1st number:";
	cin>>t1;
	cout<<"\n Enter 2nd number:";
	cin>>r1;
	
	
	
	i=t1+r1;
	k=t1*r1;
	cout<<"\n First No. is:";
	cout<<t1;
	cout<<"\n Second No. is:";
	cout<<r1;
	
	cout<<"addition: "<<i;
	cout<<"multiplication: "<<k;
	return 0;

}










 
