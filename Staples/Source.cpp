#include<iostream>

using namespace std;


string staples(string text, string what)
{
	string result = text;
	size_t pos = result.find(what, 0);
	while (pos != string::npos)
	{
		result.replace(pos, what.length(), "(" + what + ")");
		pos = result.find(what, pos + 1 + what.length() + 2);
	}
	return result;
}


int main()
{
	string text = "BigManBigLeg?";
	string what = "Big";
	cout<<staples(text, what);

}