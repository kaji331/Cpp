#include <iostream>
#include <vector>

using namespace std;

int main()
{
	cout << "Hello World!" << endl;

	vector<int> data;
	vector<int>::iterator pos;

	for (int i = 0; i <= 10; i++)
		data.push_back(i);

	for (pos = data.begin(); pos != data.end(); pos++)
		cout << *pos <<" ";
	cout << endl;

	return 0;
}
