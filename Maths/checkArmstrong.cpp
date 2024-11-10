// Armstrong Number is a number that is equal to the sum of cubes of its digit

#include <iostream>
using namespace std;

bool isArmstrong(int n)
{
    int copyN = n;
    int cubeSum = 0;

    while (n != 0)
    {
        int digit = n % 10;
        cubeSum += (digit * digit * digit);
        n /= 10;
    }
    return copyN == cubeSum;
}

int main()
{
    int n;
    cout << "Enter any number: ";
    cin >> n;
    if (isArmstrong(n))
    {
        cout << n << " is an Armstrong number." << endl;
    }else{
    cout << n << " is not an Armstrong number." << endl;
    }
    return 0;
}