// Graphs.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include"vector.h"
#include<sstream>
#include<string>
using namespace std;

template <typename T>
vector<T> takeinput(vector<vector<T>>& obj , int  i)
{
	string x;
	vector<T> in;
	cout << "ENTER EDGES FOR "<< i <<" VERTEX  SEPERATED BY COMMAS:";
	std::getline(cin,x,'\n');
	stringstream y(x);
	while (getline(y,x,','))
	{
		in.push_back(stoi(x, NULL, 10));
	}
	return in;
}

int main()
{
	int no_of_vertex;
	cout << "ENTER NO OF VERTICES:";
	cin >> no_of_vertex;
	cin.ignore();
	vector<vector<int>>obj;
	for (int i = 0; i < no_of_vertex ; i++)
	{
		obj.push_back(takeinput(obj,i));
	}
	for (size_t i = 0; i < obj.size(); i++)
	{
		cout << "EDGES FOR  " << i << " VERTEX:";
		for (size_t j = 0; j<obj[i].size(); j++)
		{
			cout << obj[i][j]<<",";
		}
		cout << endl;
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
