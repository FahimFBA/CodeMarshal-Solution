#include<iostream>
using namespace std;

int main()
{

    int t, i, v;

    cin >> t;

    for (i = 1; i <= t; i++)
    {
        cin >> v;
        if ( v>= 90 && v<= 100 )
        cout << "Student " << i << ": " << "A+" << endl;

        else if ( v>= 80 && v<= 89)
        cout << "Student " << i << ": " << "A" << endl;

        else if ( v>= 70 && v<= 79)
        cout << "Student " << i << ": " << "A-" << endl;

        else if ( v>= 60 && v<= 69)
        cout << "Student " << i << ": " << "B+" << endl;

        else if ( v>= 50 && v<=59)
        cout << "Student " << i << ": " << "B-" << endl;

        else if ( v>= 40 && v<= 49)
        cout << "Student " << i << ": " << "C" << endl;

        else if ( v>= 35 && v<= 39)
        cout << "Student " << i << ": " << "D" << endl;

        else if ( v>= 0 && v<= 34)
        cout << "Student " << i << ": " << "F" << endl;
    }

}