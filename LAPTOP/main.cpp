#include "HDD.h"  
#include "RAM.h" 
#include <iostream>
using namespace std;

int main()
{
	HDD obj1("Asus", 2000);
	RAM obj2("ATI", 2500);
	obj2.print();
}