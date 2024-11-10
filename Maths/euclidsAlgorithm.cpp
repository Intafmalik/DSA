// Eulids Algorithm is used to find the greatest common diviser (GCD) or HCF

#include<iostream>
using namespace std;

int gcd(int n1, int n2){
    while(n1!=0 && n2!=0){
        if(n1>n2){
            n1= n1%n2;
        }else{
            n2= n2%n1;
        }
    }
    if(n1==n2){
        return n1;
    }else if(n1==0){
        return n2;
    }else if(n2==0){
        return n1;
    }

}

int main(){
    int n1,n2;
    cout<<"Enter any 2 number to find HCF: ";
    cin>>n1>>n2;
    cout<<gcd(n1,n2)<<" is the greatest common diviser "<<endl;
    return 0;
}