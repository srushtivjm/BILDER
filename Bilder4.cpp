#include<iostream>
#include<string.h>
using namespace std;

class State
{
	public :
		static char name[100];
		int no_of_city;
		char clenest_city[30];
		char developed_city[30];
		int population;
		
		void setdata()
		{
		    cout<<"Enter number of city=";
			cin>>no_of_city;
			cout<<"Enter name of clenest city=";
			cin>>clenest_city;
			cout<<"Enter name most developed city=";
			cin>>developed_city;
			cout<<"Enter population of state=";
			cin>>population;
			cout<<endl;	
		}
		void getdata()
		{
			cout<<"State="<<name<<endl;
			cout<<"number of city="<<no_of_city<<endl;
			cout<<"clenest city="<<clenest_city<<endl;
			cout<<"Developed city="<<developed_city<<endl;
			cout<<"populartion="<<population<<endl;
		}
};
char State::name[100]="Gujrat";
main()
{
	State s1;
	s1.setdata();
	s1.getdata();
}
