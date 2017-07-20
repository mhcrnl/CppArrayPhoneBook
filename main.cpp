//#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <cstring>

using namespace std;

char pb[10][2][50];

void addEntry(char arr[10][2][50]);
void display(char arr[10][2][50]);
void check(char arr[10][2][50]);

int i = 0;

int main() {
	char opt;
	do {
		cout << "--------------------------" << endl;
		cout << "  what do you want to do  " << endl;
		cout << "--------------------------" << endl;
		cout << " add new contact  --> a   " << endl;
		cout << " display contacts --> d   " << endl;
		cout << " push to GITHUB   --> p   " << endl;
		cout << " quit             --> q   " << endl;
		cin >> opt;
		if (opt == 'a' || opt == 'A')
		{
			if (i < 10) {

				addEntry(pb);
				check(pb);
			}
			else {
				cout << "It's full, get less friends!" << endl;
			}
		}
		else if (opt == 'd' || opt == 'D')
		{
			display(pb);
		}
		else if (opt == 'p' || opt == 'P'){
            system("./gitpush.sh");
		}
		else if (opt == 'q' || opt == 'Q')
			break;
	} while (1 == 1);

	return 0;


}

void addEntry(char arr[10][2][50])
{
	cin.clear();
	cin.ignore();
	cout << "what is the name?" << endl;
	cin.getline(arr[i][0], 50);//should be albe to replace the .getline with gets_s
							   //	cout <<"i outside  is"<< i <<arr[i][0] << endl;
	cout << "what is the number?" << endl;
	cin.getline(arr[i][1], 50);
	i++;
}

void check(char arr[10][2][50])
{
	for (int c = -1; c < i-1; c++) {
		if ((strcmp(arr[c][0], arr[i-1][0]) == 0 )&& (i-1 !=0))
		{
			cout << "you already did that - press enter" << endl;
			i--;
			addEntry(arr);
			break;
		}
		//		cout << "c in the loop is" << c << arr[c][0] << endl;
		//		cout << "i in the loop is" << i << arr[i-1][0] << endl;
		//		if ((arr[i][0] == arr[c][0])&&(arr[i][1] == arr[c][1]))
		//		{
		//			cout << "you already did that" << endl;
		//			i--;
		//			addEntry(arr);
		//		}
	}
}

void display(char arr[10][2][50])
{

	for (int a = 0; a < i; a++)
	{
		cout << "Entry: " << a + 1 << " Name: " << arr[a][0] << " Number: " << arr[a][1] << endl;
	}
}
