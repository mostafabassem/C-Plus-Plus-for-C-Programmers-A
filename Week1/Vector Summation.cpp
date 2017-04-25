//	Author 			: Mostafa Bassem Heiba
// 	Description 		: Generic Function for summation of vectors of allowed datatypes (int,double,etc..)
//  	Date			: 16/4/2017

#include <iostream>
#include <vector>

using namespace std;

const int MAX_SIZE = 40; // size bound

template <typename summable> // summable could be the allowed datatype (int,double,etc..)
inline void sum(summable & sum, int n, vector<summable> data)
{
	sum = 0;
	for (int i = 0;i < n;++i)
	{
		sum = sum + data[i];
	}
}
int main()
{
	int accum = 0;
	vector<int> data;
	for (int i = 0;i < MAX_SIZE;++i)
	{
		data.push_back(i);
	}
	sum(accum, MAX_SIZE, data);
	cout << "sum is " << accum << endl;
	return 0;
}
