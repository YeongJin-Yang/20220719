//#include <iostream>
//using namespace std;
//
//int main()
//{
//	char arr[8];
//	int bucket[150] = { 0 };
//	
//	for (int i = 0; i < 8; i++)
//	{
//		cin >> arr[i];
//	}
//	for (int i = 0; i < 8; i++)
//	{
//		bucket[arr[i]]++;
//	}
//	
//	int index = 0;
//	for (int i = 65; i < 150; i++)
//	{
//		if (bucket[index] < bucket[i])
//		{
//			index = i;
//		}
//	}
//
//	cout << char(index);
//
//
//	return 0; 
//}


//#include<iostream>
//using namespace std;
//
//int main()
//
//{
//	int input;
//	cin >> input;
//
//
//	char arr[100000];
//	int buckect[150] = { 0 };
//
//	for (int i = 0; i < input; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 30; i++)
//	{
//		buckect[arr[i]]++;
//	}
//
//
//	int index = 0;
//	for (int i =0; i<input; i++)
//	{
//		for (int i = 65; i < 150; i++)
//		{
//			if (buckect[index] == buckect[i])
//			{
//				cout << "O";
//			}
//
//			else
//			{
//				cout << "X";
//			}
//
//
//
//		}
//	}
//
//
//	return 0;
//}

#include<iostream>
using namespace std;

int main()
{
	char arr[10] = "MINCODING";
	int buckect[150] = { 0 };

	int input;
	cin >> input;


	for (int i = 0; i < input; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 30; i++)
	{
		buckect[arr[i]]++;
	}




return 0;
}