#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"\n Please enter the year to check the leap year=";
cin>>year;
if((year%400==0)||((year%4==0)&&(year%100!=0))){
	cout<<"\n"<<year<<"is not a leap year";
}
cout<<"\n";
return 0;
}
