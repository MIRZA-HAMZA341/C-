#include <iostream>
using namespace std;
using std::string;
class STUDENT{
	public:
		string Name;
		string Class;
		int age;
		void INTRO(){
			std::cout<<"Name--"<<Name<<std::endl;
			std::cout<<"Class--"<<Class<<std::endl;
			std::cout<<"Age--"<<age<<std::endl;
		}
};
int main()
{
    STUDENT STUDENT1;
    STUDENT1.Name="ALI";
	STUDENT1.Class="pf";
	STUDENT1.age=25;
	STUDENT1.INTRO();
 } 
