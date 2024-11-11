// Eulids Algorithm is used to find the greatest common diviser (GCD) or HCF

#include <iostream>
using namespace std;

int gcd(int n1, int n2)
{
    while (n1 != 0 && n2 != 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == n2)
    {
        return n1;
    }
    else if (n1 == 0)
    {
        return n2;
    }
    else if (n2 == 0)
    {
        return n1;
    }
}


//  using recursion function to find gcd

int recGCD(int a, int b){
    if(b==0)return a;
   return recGCD(b, a%b);
}

// Formula to find LCM is n1*n2/gcd(HCF)
int lcm(int n1, int n2){
    int gcd = recGCD(n1, n2);
    return n1*n2/gcd;
}

int main()
{
    int n1, n2;
    cout << "Enter any 2 number to find HCF: ";
    cin >> n1 >> n2;
    cout << gcd(n1, n2) << " is the greatest common diviser " << endl;

    cout<<"Using Resrcion Function: "<<endl;
    cout << recGCD(n1, n2) << " is the greatest common diviser " << endl;
    cout << lcm(n1, n2) << " is the lowest common multiple between " <<n1 <<" & "<<n2<<endl;

    return 0;
}