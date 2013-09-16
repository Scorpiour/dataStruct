#include <iostream>
#include "GTemplate.h"

using namespace std;

int main(int argc, char** argv)
{
	cout<<"bill start work now"<<endl;
	
	NODE<int> N1(12);
	int i = 5;
	NODE<int> N2(i);
	
	cout<<*N1<<endl;
	cout<<*N2<<endl;
	
	i = 8; 
	cout<<*N2<<endl;
	
	*N2 = 8;
	
	cout<<*N2<<endl;
	return 0;
}
