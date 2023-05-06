#include<iostream>
#include<string.h>

using namespace std;
class Collage
{
	public :
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_year;
		int stu_age;
		char stu_contect[10];
		static char stu_edu_institute_name[100];
		char stu_add[100];
		
		void setdata()
		{
			cout<<"Enter Id=";
			cin>>id;
			cout<<"Enter name=";
			cin>>stu_name;
			cout<<"Enter roll number=";
			cin>>stu_roll_no;
			cout<<"Enter studing year=";
			cin>>stu_year;
			cout<<"Enter age=";
			cin>>stu_age;
			cout<<"Enter contect number=";
			cin>>stu_contect;
			cout<<"Enter address=";
			cin>>stu_add;
			cout<<endl;
		}
		void getdata()
		{
			cout<<"Collage name="<<Collage::stu_edu_institute_name<<endl;
			cout<<"Id="<<id<<endl;
			cout<<"Name ="<<stu_name<<endl;
			cout<<"Roll number="<<stu_roll_no<<endl;
			cout<<"Year ="<<stu_year<<endl;
			cout<<"Age="<<stu_age<<endl;
			cout<<"Contect number="<<stu_contect<<endl;
			cout<<"Address="<<stu_add<<endl;
			cout<<"-------------------------"<<endl;
		}
};
class Highschool
{
	public:
		int id;
		char stu_name[100];
		int stu_roll_no;
		int stu_standred;
		int stu_age;
		char stu_contect[10];
		static char stu_edu_institute_name[100];
		char stu_add[100];
		
		void setdata_h()
		{
			this->id=id;
			cout<<"Enter Id=";
			cin>>id;
			this->stu_name[100]=stu_name[100];
			cout<<"Enter name=";
			cin>>stu_name;
			this->stu_roll_no=stu_roll_no;
			cout<<"Enter roll number=";
			cin>>stu_roll_no;
			this->stu_standred=stu_standred;
			cout<<"Enter standred=";
			cin>>stu_standred;
			this->stu_age=stu_age;
			cout<<"Enter age=";
			cin>>stu_age;
			this->stu_contect[10]=stu_contect[10];
			cout<<"Enter contect number=";
			cin>>stu_contect;
			this->stu_add[100]=stu_add[100];
			cout<<"Enter address=";
			cin>>stu_add;
			cout<<endl;
		}
		void getdata_h()
		{
			cout<<"Highschool name="<<Highschool::stu_edu_institute_name<<endl;
			cout<<"Id="<<id<<endl;
			cout<<"Name ="<<stu_name<<endl;
			cout<<"Roll number="<<stu_roll_no<<endl;
			cout<<"Standred ="<<stu_standred<<endl;
			cout<<"Age="<<stu_age<<endl;
			cout<<"Contect number="<<stu_contect<<endl;
			cout<<"Address="<<stu_add<<endl;
		
		}
};
char Collage::stu_edu_institute_name[]="Sardar patel";
char Highschool::stu_edu_institute_name[]="Tapovan";
main()
{
	Collage c1;
	Highschool h1;
	
	c1.setdata();
	c1.getdata();
	
	
	h1.setdata_h();
	h1.getdata_h();
}
