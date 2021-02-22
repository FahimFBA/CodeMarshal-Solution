#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    // In this example, it is declared that - No float or double types of variable is not allowed, but using normal int n, we can't get the exact proper solutions for all cases. So I'm taking long long int for all of the values here.

    long long int t,i, cx, cy, r, px, py, distance_x_y;
    cin >> t;
    for (i = 1 ; i <= t ; i++)
    {
        cin >> cx >> cy >> r >> px >> py;

        // finding the distance between the points from the circles center

        distance_x_y= sqrt(pow((cx - px) , 2) + pow((cy - py) , 2)); 

        // Conditions

        if ( distance_x_y < r )

        cout << "Case " << i << ": yes" << endl;

        else 

        cout << "Case " << i << ": no" << endl;

    }
}