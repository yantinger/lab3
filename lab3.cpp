#include<iostream>
#include<fstream>
#include<vector>
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

int main()
{
	ifstream fileIn("file.in",ios::in);
	if(!fileIn)
	{
		cerr<<"Failed opening."<<endl;
		exit(0);
	}

	int a;
	fileIn>>a;
	vector<int> num(a);
	
	for(int j=0;j<a;j++)
	{
		fileIn>>num[j];
	}
	sort(num.begin(),num.end());
	
	int tot;
	tot=0;
	for(int j=3;j<=7;j++)
	{
		tot=tot+num[j];
	}
	cout<<tot<<endl;
}
