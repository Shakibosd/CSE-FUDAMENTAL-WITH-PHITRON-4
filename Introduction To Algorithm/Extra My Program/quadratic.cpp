

/*
2.3
4
5.6
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b, c;
    double discriminant, root1, root2;
    cout << "Your Value : ";
    cin >> a >> b >> c;
    discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << endl;
        cout << "Root 1 = " << root1 << endl;
        cout << "Root 2 = " << root2 << endl;
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        cout << endl;
        cout << "Root 1 = Root 2 = " << root1 << endl;
    }
    else
    {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << endl;
        cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }
    return 0;
}
