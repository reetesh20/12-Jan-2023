#include<iostream>
using namespace std;
int main()
{
	int num=16;
	if (num%2==0 && num%3==0)
	{
		cout<<"Pizza"<<endl;
	}
	else if (num%2==0 )
	{
		cout<<"Chips"<<endl;
	}
	else if (num%3==0)
	{
		cout<<"Salad"<<endl;
	}
	else
	{
		cout<<" Uppma"<<endl;
	}

}
