#include<iostream>

using namespace std;

class Data{
	
	private:
		int a;
		
	protected:
		int b;
	
	public:
		int c;
		
};

class Abstraction : public Data{
	
	public:
		
		void Setdata(){
			
		//	a = 1;
		    b = 2;
			c = 3; 
		}
		
		void Getdata(){
			
		//	cout<<a<<endl;
            cout<<b<<endl;
			cout<<c<<endl;		
		}
};

main(){
	
	Abstraction obj;
	
	obj.Setdata();
	obj.Getdata();
}
