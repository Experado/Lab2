#include "BMI.h"

void BMI::number_in(float h,float w)
{
		height=h;
		weight=w;
}

bool BMI::divided_zero()
{
	if (height==0 || weight==0)	
	{
		result=0;
		return false;
	}
	if (height!=0 && weight!=0) 
	{
		result=weight/pow(height/100,2.0);
		return true;
	}
}

float BMI::adjusts()
{
	final=result*100;
	return final/100.0;
}

string BMI::category()
{
    if (result<15)
		return "\tVery severely underweight\n";
	else if(result<16)
		return "\tSeverely underweight\n";
	else if (result<18.5)
		return "\tUnderweight\n";
	else if(result<25)
		return "\tNormal\n";
	else if(result<30)
		return "\tOverweight\n";
	else if(result<35)
		return "\tObese Class I (Moderately obese)\n";
	else if(result<40)
		return "\tObese Class II (Severely obese)\n";
	else 
		return "\tObese Class III (Very severely obese)\n";
}
