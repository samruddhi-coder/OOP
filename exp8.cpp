#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	char ch;
	fstream f;
	f.open("assignment.txt",ios::out);
	if(!f)
	{
		cout<<"ERROR WHILE OPENING FILE"<<'\n';
		return 0;
	}
	
	cout<<"assignment.txt created"<<'\n'<<'\n';
	f<<"HELLO guys..have a good day"<<'\n'<<'\n';
	f.close();
	
	f.open("assignment.txt",ios::in);
	if(!f)
	{
		cout<<"ERROR OPENING FILE"<<'\n';
		return 0;
	}
	cout<<"CONTENT OF THE FILE ARE:"<<'\n';
	while(!f.eof())
	{
	
		f>>ch;
		cout<<ch;
	}
	f.close();
	return 0;
}

