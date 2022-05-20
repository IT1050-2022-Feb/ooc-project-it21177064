#include<iostream>
#include<cstring>
using namespace std;

class systemadmin{
	
	private:
		char systemadmin_id[];
		char systemadmin_name[];
		
	public:
		
		systemadmin();
		systemadmin( char admin_id[10],char admin_name[]);
		void getsystemadmin_id();
		void getsystemadmin_name();
		
		
};

systemadmin::systemadmin()
{
	strcpy(systemadmin_id,"");
	strcpy(systemadmin_name, "");
	
}

systemadmin::systemadmin( char admin_id[10],char admin_name[])
{
	strcpy(systemadmin_id,admin_id);
	strcpy(systemadmin_name,admin_name);
}

void systemadmin::getsystemadmin_id(){

}

void systemadmin::getsystemadmin_name(){
}

int main()
{
	systemadmin("AD03567","Thushan alvis");
	
	return 0;
}
