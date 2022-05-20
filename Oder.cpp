#include<iostream>
using namespace std;
#include<cstring>

class oder{

	private:
		int oder_number;
		float amount;
		
	public:
		
		oder();
		oder( int oder_number,float amount);
		void getoder_number();
		void getamount();
		
	
};

oder::oder()
{
	oder_number=0;
	amount=0.0;
		
}

oder::oder(int oder_number,float amount)
{
	oder_number=oder_number;
	amount=amount;
}

void oder::getoder_number(){
}

void oder::getamount(){
}


int main()
{
 
oder(45678,47500.00);

return 0; 
}
