#include<iostream>
using namespace std;
class shapes
{
	public:
		virtual void area()=0;
};
class square:public shapes
{
	private:
		int side;
	public:
		square()
		{
			cout<<"enter side=";
			cin>>side;
		}
		void area()
		{
			cout<<"area of square="<<side*side<<endl;
		}
};
class rectangle:public shapes
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
			cout<<"area of rectangle="<<length*breadth<<endl;
		}
};
int main()
{
	square s,*sptr;
	sptr=&s;
	sptr->area();
	rectangle r,*rptr;
	rptr=&r;
	rptr->area();
	return 0;
}
