#include<iostream>
using namespace std;
class rectangle
{
	private:
		int length,breadth;
	public:
		rectangle()
		{
			cout<<"enter length and breadth:";
			cin>>length>>breadth;
		}
		void area()
		{
			cout<<"area of rectangle="<<length*breadth;
		}
};
int main()
{
	rectangle r,*rptr;
	rptr=&r;
	rptr->area();
	return 0;
}
