#include <math.h>
#include <string>

using namespace std;


class BMI{

	    public:
	           void number_in(float,float);
	           bool  divided_zero();
	           string category();
	           float adjusts();
	    private:
	           float height;
	           float weight;
	           float result;
			   int final;
};

