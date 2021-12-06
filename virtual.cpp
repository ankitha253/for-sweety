#include<iostream>
using namespace std;
class DOB
{
	private:
		int DD,MM,YY;
	public:
		void show()
		{
			cout<<"enter day,month and year";
			cin>>DD>>MM>>YY;
			cout<<"DOB is:"<<DD<<"-"<<MM<<"-"<<YY;
		}
};
class student
{
	private:
		string name;
		string pinno;
		DOB d;
	public:
		void display()
		{
			cout<<"enter name and pinno";
			cin>>name>>pinno;
			cout<<"name="<<name<<endl<<"pinno="<<pinno<<endl;
			d.show();
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}
