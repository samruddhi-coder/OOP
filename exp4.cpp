#include<iostream>
using namespace std;
template<class T1>
T1 selection()
{
  int i,j,k,n,minIndex;
  T1 a[100],temp;
  cout<<"\nEnter the no.array elements\n";
  cin>>n;
  cout<<"\nEnter the elements in the array\n";
  for(i=0;i<n;i++)
  {
   cin>>a[i];
  }
 
 // Selection sort 
for(i=0;i<n-1;i++)
   {
	minIndex=i;
	for(j=i+1;j<n;j++)
	   {
	    	if(a[j]<a[minIndex])
		minIndex=j;
	   }
	temp=a[i];
	a[i]=a[minIndex];
	a[minIndex]=temp;
	cout<<"\n Pass"<<i+1<<":";
	for(k=0;k<n;k++)
	   {
		cout<<"\t"<<a[k];
	   }
	cout<<"\n";
     }
}

int main()
{
  int ch;
   do
     {
        cout<<"\n Enter your choice\n";
        cout<<"\n0.Exit.  1.float type. 2.int type\n";
        cin>>ch;
        switch(ch)
            {
		case 0:
			break;
                 case 1:
                         selection<float>();
                         break;
                 case 2:
                         selection<int>();
                         break;
                 case 3:
                         cout<<"\n Invalid choice\n";
                         break;
            }
         
     }while(ch>0);
  
  return 0;
}
