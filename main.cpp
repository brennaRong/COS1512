#include<iostream>
#include<string>

using namespace std;

int calcNotation(int hoursP, int minutesP);

int main()
{
	int hours, minutes;
	string ampm; // stores AM or PM depending on the value of 'hours'
	char answer;
	do
	{
	    cout << "Enter the hour followed by a space followed by the minutes." << endl;
        cin >> hours >> minutes;

        cout << endl;
        calcNotation(hours, minutes);



        cout << "Would you like to try again? Y/N" << endl;
        cin >> answer;
        cout << endl;

	}while ((answer == 'Y') || (answer == 'y'));

	return 0;
}

int calcNotation(int hoursP, int minutesP)
{
    int hours, minutes;
    string ampm;

    if(hours > 12) // If it is bigger than 12 then you subtract 12 from it.
	{
		hoursP -= 12;
		hours = hoursP;
		minutes = minutesP;
		ampm = " PM";
	}
	else // If not, then do nothing to it and just make 'ampm' "AM"
	{
		hours = hoursP;
		minutes = minutesP;
		ampm = " AM";
	}
    cout << hours << 'h' << minutes << ampm << endl; // Output the values

    return hours;
}
