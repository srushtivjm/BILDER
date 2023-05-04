#include<iostream>
using namespace std;
class Employ
{
    private :
	 int id;
	 char name[100];
	 char role[100];
	 int selery;
	 char experience[1000];
	 char add[100];
	 char email[100];
	 char contect[100];
	 	
	public :
	void setdata()
	{			
	cout<<"Enter Id =";
	cin>>id;
	cout<<"Enter name =";
	cin>>name;
	cout<<"Enter role =";
	cin>>role;
	cout<<"Enter selery =";
	cin>>selery;
	cout<<"Write experience =";
	cin>>experience;
	cout<<"Enter address =";
	cin>>add;
	cout<<"Enter email address =";
	cin>>email;
	cout<<"Write contect number =";
	cin>>contect;
	cout<<endl;
    }
    
    void getdata()
	{
		cout<<"Id ="<<id<<endl;
		cout<<"Name ="<<name<<endl;
		cout<<"Role ="<<role<<endl;
		cout<<"Selery ="<<selery<<endl;
		cout<<"Experience ="<<experience<<endl;
		cout<<"Address ="<<add<<endl;
		cout<<"Email ="<<email<<endl;
		cout<<"Contect number ="<<contect<<endl;
		cout<<endl;
	}
};
main()
{
	Employ e1,e2,e3,e4,e5;
	
	e1.setdata();
	e2.setdata();
	e3.setdata();
	e4.setdata();
	e5.setdata();
	
	cout<<"----------------------------------"<<endl;
	
	e1.getdata();
	e2.getdata();
	e3.getdata();
	e4.getdata();
	e5.getdata();
	

}
