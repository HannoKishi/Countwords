
#include "Transfor.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class File{
	public:
	 File(){};
	 File(string s1,string s2)
	 {
		 filename=s1;
		 c=s2;
	 }
	 int Count();
	 string &keyword()
	 {
		 return c;
	 }
	private:
	 string filename;
	 string c;            //keyword
};
int File::Count()
{
	ifstream input;
	input.open(filename);
	char str[20];
	int x=0;
	if(!input)
	{
		cout<<"Cannot open file!\n";
		abort();
	}
	while(!input.eof())
	{
		input>>str;
		if((str==c||str==(c+'.'))||(str==B2S(c))||(str==S2B(c))||(str==FB(c)))
			x=x+1;
	}
	input.close();
	return x;
}

int main()
{
	string f1,s;
	cout << "please input the name of file:" << endl;
	cin >> f1;
	cout << "please input the word want to be counted in the flie:" << endl;
	cin >> s;
	File ftest(f1, s);
	cout << "the file has " << ftest.Count() << ' ' << ftest.keyword() << endl; 
	system("pause");
	return 0;
}


