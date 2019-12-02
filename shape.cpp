#include<iostream>
using namespace std;

class shape
{
     public: 

          double a,b;
          virtual void get_data()=0;
          virtual void display_area()=0;
};


class rectangle:public shape
{
      public:
		void get_data()
		{
                      cin>>a>>b;
		} 
		void display_area()
		{
			cout<<"\n Area of Rectangle is:"<<a*b<<"\n";
		}
};

class triangle:public shape
{
     public:
		void get_data()
		{
			cin>>a>>b;
		} 
		void display_area()
		{
			cout<<"\n Area of Triangle is:"<<(a*b)/2<<"\n";
               	}
};

int main()
{

  int ch,ch1;
  rectangle r1;
  triangle t1;
  do
    {
       
       cout<<"\n0.Exit\n1.Rectangle\n2.Triangle\n";
	cout<<"\nEnter your choice\n";
	cin>>ch;

       switch(ch)
               {
			case 0:
				break;                    
			case 1:
                            
                            cout<<"Enter length and breadth of rectangle\n";
                            r1.get_data();
                            r1.display_area();
                            break;
                    case 2:
                            
                            cout<<"Enter base and heigth of triangle\n";
                            t1.get_data();
                            t1.display_area();
                            break;
                    case 3:

                            cout<<"Invalid choice plzz enter valid choice\n";
                            break;
                            
               }
                  
    }while(ch>0);
}
