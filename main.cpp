#include "BMI.h"
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin ("file.in",ios::in);
	ofstream fout("file.out",ios::out);
	
	float storage_w,storage_h;

	BMI health;

	while(fin>>storage_h>>storage_w)
	{
		health.number_in(storage_h,storage_w);
		if(!health.divided_zero()) fout<<health.adjusts()<<"\t\t0\n";
		else	fout<<health.adjusts()<<health.category();

	}
	
	fin.close();
	fout.close();
	return 0;
}
