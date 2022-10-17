#include <iostream>
#include <cmath> 
#include <string>
using namespace std;


int main()
{ 
    string R;
    int I;
    int Mb;
    int Kb;
    int B;
    div_t divresult;

    string mb = " Mbyte ";
    string kb = " Kbyte ";
    string b = " byte ";

    cout << "enter number" << endl;
    cin >> I;

    B = fmod(I, 1024);
    divresult = div(I, 1024);
    Kb = divresult.quot; 
    Kb = fmod(Kb, 1024);
    divresult = div(Kb, 1024);
    Mb = divresult.quot;

   cout << Mb << mb << Kb << kb << B << b;











}