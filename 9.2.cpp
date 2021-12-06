#include<iostream>
using namespace std;
class name
{
	protected:
		string names;
	public:
		void nam()
		{
			cout<<"enter name:";
			cin>>names;
		}
		void print()
		{
			cout<<"name is:"<<names;
		}
};
class nickname:public name
{
	private:
		string nicknames;
	public:
		nickname()
		{
			nam();
			cout<<"enter nickname:";
			cin>>nicknames;
		}
		virtual void print()
		{
			cout<<"nickname is:"<<nicknames;
		}
};
int main()
{

	name n,*nptr;
	nptr=&n;
	nptr->print();
	nickname nk,*nkptr;
	nptr=&n;
	nptr->print();
	return 0;
}
