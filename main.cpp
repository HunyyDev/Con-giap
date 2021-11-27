// https://khmt.uit.edu.vn/wecode/truonganpn/assignment/30/124
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long n;
 vector<string>a = {"THAN","DAU","TUAT","HOI","TY'","SUU","DAN","MEO","THIN","TY.","NGO","MUI","THAN"};

int main()
{
    cin>>n;
    if (n>0) {
        cout<<a[n%12];
    }
    else {
        (n*=-1)%=12;
        cout<<a[(12-n+1)%12];
    }

    return 0;
}
