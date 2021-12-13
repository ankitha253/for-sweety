#include<iostream>
using namespace std;
class sample
{
	public:
		void name(char init,string name)
		{
			cout<<"Name is:";
			cout<<init<<"."<<name<<endl;
		}
		void name(string init,string name)
		{
			cout<<"Name is:";
			cout<<init<<" "<<name<<endl;
		}
};
int main()
{
	sample s;
	s.name('p',"sweety");
	s.name("penumala","sweety");
	return 0;
}
