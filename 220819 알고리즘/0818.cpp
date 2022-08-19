#include <iostream>
using namespace std;

int main()
{

	int arr[7] = { 3,5,1,1,2,3,2 };
	int box[4]; 

	for (int x = 0; x < 4; x++)
	{
		cin >> box[x];
	}

	int count;

	for (int i = 0; i < 4; i++)
	{
		count = 0;

		for (int x = 0; x < 7; x++)
		{
			if (arr[x] == box[i])
			{
				count++;
			}
		}

		cout << box[i] << "=" << count << "°³" << endl;
	}




	return 0;
}

//============================================================================================

#include <iostream>
using namespace std;

int main()
{

	int arr[7] = { 3,5,1,1,2,3,2 };
	int box[4];

	for (int x = 0; x < 4; x++)
	{
		cin >> box[x];
	}

	int count;

	for (int i = 0; i < 4; i++)
	{
		count = 0;

		for (int x = 0; x < 7; x++)
		{
			if (arr[x] == box[i])
			{
				count++;
			}
		}

		cout << box[i] << "=" << count << "°³" << endl;
	}




	return 0;
}