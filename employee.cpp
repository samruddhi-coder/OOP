#include<iostream>
#include<limits>
#include<string>
#include<sstream>
using namespace std;
class DateV
{
    private:
            int date,month,year;
            int days;
    public:
            DateV(int dd,int mm,int yy)
            {
                date=dd;
                month=mm;
                year=yy;
            }
	//function for validation of date
            bool isValidDate()
            {
                if(year >= 1950 && year<=2001)
                {
                    switch(month)
                    {
                        case 1:case 3: case 5: case 7: case 8: case 10: case 12: days=31;
                        break;
                        case 4:case 6: case 9:case 11: days=30;
                        break;
                        case 2: if(year%4 == 0)
                                    days=29;
                                else
                                    days=28;
                        break;
                        default: return false;
                    }
                    if(date>=1 && date<=days)
                        return true;
                    else
                        return false;
                }
                else
                {
                    return false;
                }
            }

};
class Employee
{
 	private:
 			int empid;
			char empname[30];
			double empsal;
			char empaddr[100];
			int empbDay,empbMonth,empbYear;
			string empDOB;
			string empbloodGroup;
			string empphone;
			bool flag;
	public:
            void setEmpId()
            {
                cin>>empid;
                while(1)
                {
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<"\nEmployee ID should be number Only!";
                        cout<<"\nEmployee ID: ";
                        cin>>empid;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            void setEmpName()
            {
                cin.ignore();
                cin.getline(empname,30,'\n');
            }
            void setEmpSalary()
            {
                cin>>empsal;
                while(1)
                {
                    if(cin.fail())
                    {
                        cin.clear();
                        cin.ignore(numeric_limits<streamsize>::max(),'\n');
                        cout<<"\nEmployee Salary should be number Only!";
                        cout<<"\nEmployee Salary: ";
                        cin>>empsal;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            void setEmpPhoneNo()
            {
                try
                {
                    int digitCount;
                    cin>>empphone;
                    digitCount=empphone.length();
                    bool first=empphone.at(0)=='9' ||empphone.at(0)=='8'||empphone.at(0)=='7'||empphone.at(0)=='6';
                    while(1)
                    {
                        if(digitCount!=10 || (!first))
                        {
                            throw "Invalid phone number try again!!!";
                        }
                        else
                        {
                            break;
                        }
                    }
                }catch(const char* exp)
                {
                    cout<<"\nError!! "<<exp;
                    cout<<"\nEnter the phone No: ";
                    setEmpPhoneNo();
                }
            }
            void setEmpAddress()
            {
                cin.ignore();
                cin.getline(empaddr,50,'\n');
            }
            void setEmpDOB()
            {
                bool invalid;
                do
                {
                    cout<<"\nDate: ";
                    cin>>empbDay;
                    cout<<"\nMonth: ";
                    cin>>empbMonth;
                    cout<<"\nYear: ";
                    cin>>empbYear;
                    DateV d(empbDay,empbMonth,empbYear);
                    if(!d.isValidDate())
                    {
                        cout<<"Invalid Date Please try again!!\n";
				";
                        invalid=true;
                    }
                }while(invalid);
                stringstream ss;
                ss<<empbDay<<"/"<<empbMonth<<"/"<<empbYear;
                ss>>empDOB;
            }
            void setEmpBloodGroup()
            {
            	int bloodType;
            	do
            	{
                    cout<<"\nEnter your choice..!";
                    cout<<"\n1: A+\t2: A-\t3: B+\t4: B-\t5: O+\t6: O-\t7: AB+\t8: AB-\n";
                    cin>>bloodType,flag=1;
                    switch(bloodType)
                    {
                    	case 1: empbloodGroup="A+";
                    	break;
                    	case 2: empbloodGroup="A-";
                    	break;
                    	case 3: empbloodGroup="B+";
                    	break;
                    	case 4: empbloodGroup="B-";
                    	break;
                    	case 5: empbloodGroup="O+";
                    	break;
                    	case 6: empbloodGroup="O-";
                    	break;
                    	case 7: empbloodGroup="AB+";
                    	break;
                    	case 8: empbloodGroup="AB-";
                    	break;
                    	default: cout<<"\nWrong choice, Please Enter Valid Blood Group!";
                    			 flag=0;
                    }
                }while(flag==0);   
            }
            int getEmpId()
            {
                return empid;
            }
            char* getEmpName()
            {
                return empname;
            }
            double getEmpSalary()
            {
                return empsal;
            }
            string getEmpPhoneNo()
            {
                return empphone;
            }
            char* getEmpAddress()
            {
                return empaddr;
            }
            string getEmpDOB()
            {
                return empDOB;
            }
            string getEmpBloodGroup()
            {
                return empbloodGroup;
            }
			void acceptData();
			void displayData();

 };

void Employee::acceptData()
{
    cout<<"\nEmployee ID: ";
    setEmpId();
    cout<<"\nEmployee Name: ";
    setEmpName();
    cout<<"\nEmployee Salary: ";
    setEmpSalary();
    cout<<"\nEmployee Phone No: ";
    setEmpPhoneNo();
    cout<<"\nEmployee Address: ";
    setEmpAddress();
    cout<<"\nEmployee DOB: ";
    setEmpDOB();
    cout<<"\nEmployee Blood Group: ";
    setEmpBloodGroup();
}
void Employee::displayData()
{
    cout<<"\n_________________Employee Data_________________\n";
    cout<<"\nID\t\t |\t"<<getEmpId();
    cout<<"\nName\t\t |\t"<<getEmpName();
    cout<<"\nSalary\t\t |\t"<<getEmpSalary();
    cout<<"\nPhone No.\t |\t"<<getEmpPhoneNo();
    cout<<"\nAddress\t\t |\t"<<getEmpAddress();
    cout<<"\nDOB\t\t |\t"<<getEmpDOB();
    cout<<"\nBlood Group\t |\t"<<getEmpBloodGroup();
    cout<<"\n_______________________________________________\n";
}

int main()
{
 	cout<<"\n****************Employee****************\n";
 	Employee e;
 	e.acceptData();
 	e.displayData();
 	return 0;
}
