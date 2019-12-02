

#include<iostream>
#include<vector>


using namespace std;

void display(vector<int> &v,int x)
{
	cout<<"(";
	for(int i=0;i<x;i++)
	{
		if(i!=x-1)
		{
		cout<<v[i]<<",";
		}
		else
		{
			cout<<v[i];
		}
	}
	cout<<")"<<'\n'<<'\n';
}

int main()
{
	vector<int> v;
	int x,q,pos,y,sca,op;
	
	cout<<"HOW MANY NUMBERS TO BE ENTERED? "<<'\n';
	cin>>x;
	
	for(int i=0;i<x;i++)
	{
		cout<<'\n'<<"ENTER"<<" "<<i<<"th"<<" "<<"POSITION"<<'\n';
		cin>>q;
		v.push_back(q);
		
	}
	
	cout<<'\n'<<'\n';
	for(;;)
	{
	
	cout<<"WHAT FUNCTION DO YOU WANT TO PERFORM"<<'\n';
	cout<<"1.DISPLAY"<<'\n';
	cout<<"2.MODIFY"<<'\n';
	cout<<"3.MULTPLY A SCALAR VALUE"<<'\n';
	cout<<"4.EXIT"<<'\n';
	cin>>op;
	system("CLS");
	
	switch(op)
	{
	case 1:
		display(v,x);
		cout<<'\n'<<'\n';
		break;
		
	case 2:
	
	display(v,x);
	cout<<'\n'<<"ENTER THE NUMBER WHICH U WANT TO MODIFY THE DATA"<<'\n';
	cin>>pos;
	
	cout<<"ENTER THE NUMBER"<<'\n';
	cin>>y;
	
	
	for(int i=0;i<v.size();i++)
	{
		if(v[i]==pos)
		{
			v[i]=y;
		}
	}
	display(v,x);
	cout<<'\n'<<'\n';
	break;
	
	
	case 3:
	cout<<'\n'<<"ENTER THE SACLAR NO. TO BE MULTIPLIED"<<'\n';
	cin>>sca;
	
	for(int i=0;i<v.size();i++)
	{
		v[i]=sca*v[i];
	}
	
	display(v,x);
	cout<<'\n'<<'\n';
	break;
	
	case 4:
		return 0;
	}
	}
}

