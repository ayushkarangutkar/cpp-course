#include <bits/stdc++.h>
using namespace std;
bool check_sizeof_specialization(vector<deque<pair<string, string>>>v, short specialization)
{
	if (v[specialization - 1].size() == 5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool check_number_of_patients_in_all_specializations(vector<deque<pair<string, string>>>v)
{
	for (int i = 0;i < v.size();i++)
	{
		if (v[i].size() > 0)
		{
			return 1;
		}
	}
	return 0;
}
void push_patients(vector<deque<pair<string, string>>>& v, bool  status, short specialization, string name)
{
	if (status == 1)				// status->(regular=0, urgent=1)
		v[specialization - 1].push_front(make_pair(name, "urgent"));
	else
		v[specialization - 1].push_back(make_pair(name, "regular"));

}
void print_patients(vector<deque<pair<string, string>>>v)
{
	for (int i = 0;i < v.size();i++)
	{
		if (v[i].size() == 1)
		{
			cout << "There are " << v[i].size() << " patient in specialization " << i + 1 << ".\n";
			for (int j = 0;j < v[i].size();j++)
			{
				cout << v[i].at(j).first << " " << v[i].at(j).second << "\n";
			}
			cout << "\n";
		}
		else if (v[i].size() > 1)
		{
			cout << "There are " << v[i].size() << " patients in specialization " << i + 1 << ".\n";
			for (int j = 0;j < v[i].size();j++)
			{
				cout << v[i].at(j).first << " " << v[i].at(j).second << "\n";
			}
			cout << "\n";
		}
	}
}
void Get_next_patient(vector<deque<pair<string, string>>>& v, short specialization)
{
	if (v[specialization - 1].size() == 0)
	{
		cout << "No patients in this specialization. Have rest, Dr.\n";
	}
	else
	{
		cout << v[specialization - 1].front().first << " please go with the Dr.\n";
		v[specialization - 1].pop_front();
	}
}
void Hospital_System()
{
	short choice = 0, specialization = 0;
	string name = "";
	bool status = 0;
	vector<deque<pair<string, string>>>v(20);
	while (1)
	{
		cout << "Enter your choice:\n" << "1) Add new patient\n"
			<< "2) Print all patients\n" << "3) Get next patient\n4) Exit\n";
		cin >> choice;
		if (cin.fail()) // To check if the input is valid or not. (if input matches the variable data type or not)
		{
			cout << "Invalid input.Please try again.\n";
			cin.clear();  // Clear the error flag on the cin object, allowing it to read input again.
			cin.ignore(1000, '\n');  //  Discard any remaining characters in the input buffer, preventing them from being read again.
		}
		else
		{
			if (choice == 1)
			{
			A:
				cout << "Enter specialization number from 1:20, name, status: ";
				cin >> specialization >> name >> status;
				if (specialization >= 1 && specialization <= 20)
				{
					if (check_sizeof_specialization(v, specialization))
					{
						cout << "Sorry we can't add more patients for this specialization.\n";
					}
					else
					{
						push_patients(v, status, specialization, name);
					}
				}
				else
				{
					cout << "Invalid specialization number.Please try again\n\n";
					goto A;
				}
			}
			else if (choice == 2)
			{
				if (check_number_of_patients_in_all_specializations(v))
				{
					cout << "****************************\n";
					print_patients(v);
				}
				else
				{
					cout << "No patients at the moment.\n";
				}
			}
			else if (choice == 3)
			{
				cout << "Enter specialization: ";
				cin >> specialization;
				Get_next_patient(v, specialization);
			}
			else if (choice == 4)
			{
				// \033[34m -> to make the color of the text blue.
				// \033[37m -> to return the content back to normal color (white).
				cout << "\033[34mIt has been a pleasure serving you and your healthcare needs.\n"
					<< "We wish you all the best in your future endeavors.\n\033[37m";
				break;
			}
			else
			{
				cout << "Invalid input.Please try again.\n";
			}
		}
		cout << "\n";
	}
}
int main()
{
	Hospital_System();
	return 0;
}
