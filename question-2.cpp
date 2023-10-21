#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int velo, dir, time;
    int i, j = 0;

    // initial position of the particle
    double x = 0, y = 0;
    double vdtArray[3][3];

    // taking user input of the 2D array - 
    // consisting of all the dimensions
    cout << "\n*Enter the values of Velocity, Dimension and Time as an elements of a row!*\n";
    for (i = 0; i <= 2; ++i)
    {
        for (j = 0; j <= 2; ++j)
        {
            cout << "Enter the element at row " << i << " & column " << j << ": ";
            cin >> vdtArray[i][j];
        }
    }

    // calculating the position of the particle
    for (i = 0; i <= 2; ++i)
    {
        double velocity = vdtArray[i][0];
        double direction = vdtArray[i][1];
        double time = vdtArray[i][2];
        double dirRad = direction * (3.14 / 180);
        x += velocity * cos(dirRad) * time;
        y += velocity * sin(dirRad) * time;
    }
    cout << "The final position is: (" << x << "," << y << ")";
}