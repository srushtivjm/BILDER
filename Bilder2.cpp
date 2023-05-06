#include<iostream>
#include<string.h>
using namespace std;
class Hotel
{
	public :
		int id;
		char name[100];
		char type[100];
		int s_size;
		char r_size[10];
		int e_year;
		char add[100];
		char r_type[100];
		char webside[100];
		
		void setdata()
		{
			this->id=id;
			cout<<"Enter Id =";
			cin>>id;
			this->name[100]=name[100];
			cout<<"Enter Name =";
			cin>>name;
			this->type[100]=type[100];
			cout<<"Enter Hotel type =";
			cin>>type;
			this->s_size=s_size;
			cout<<"Enter staff size =";
			cin>>s_size;
			this->r_size[10]=r_size[10];
			cout<<"Enter room size =";
			cin>>r_size;
			this->e_year=e_year;
			cout<<"Enter estrablished year =";
			cin>>e_year;
			this->add[100]=add[100];
			cout<<"Enter address =";
			cin>>add;
			this->r_type[100]=r_type[100];
			cout<<"Enter rating type =";
			cin>>r_type;
			this->webside[100]=webside[100];
			cout<<"Enter webside =";
			cin>>webside;
			cout<<endl;
			
		}
		
		void getdata()
		{
			cout<<"Hotel id ="<<id<<endl
			<<"Hotel name ="<<name<<endl
			<<"Hotel staff size ="<<s_size<<endl
			<<"Hotel room size ="<<r_size<<endl
			<<"Hotel estrablished year ="<<e_year<<endl
			<<"Hotel address ="<<add<<endl
			<<"Hotel rating type ="<<r_type<<endl
			<<"Hotel webside ="<<webside<<endl;
		}
};
main()
{
	Hotel h1;
	
	h1.setdata();
	h1.getdata();
}
