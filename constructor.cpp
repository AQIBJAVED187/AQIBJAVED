#include<iostream>
using namespace std;
class calculator{
	int n1;
	char grade;
	public:
		
		calculator(int f1, char f2)
		{
			n1 = f1;
			grade = f2;
		}
		
		void display()
		{
			cout<<"the second data member"<<n1<<endl;
			cout<<"the third data member"<<grade<<endl;
		}
};

main(){
	calculator t1(100, 'a');
	t1.display();
	
}
