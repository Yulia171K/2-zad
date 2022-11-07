#include <iostream> //подключение библиотеки 
#include <cmath> //подключение библиотеки математики
#include <string> //подключение библиотеки string
using namespace std; //глобальное подключение std

//функция ввода в программу
int main()
{ 
    string R; //переменная типа string
    int I; // переменная типа int
    int Mb; //переменная типа int
    int Kb;//переменная типа int
    int B;//переменная типа int
    div_t divresult;//переменная типа div_t

    string mb = " Mbyte "; //переменная типа string
    string kb = " Kbyte ";//переменная типа string
    string b = " byte ";//переменная типа string

    cout << "enter number" << endl;//вывод строки в консоль
    cin >> I;//ввод в консоль

    B = fmod(I, 1024);//вычисление 
    divresult = div(I, 1024);//вычисление 
    Kb = divresult.quot; //вычисление 
    Kb = fmod(Kb, 1024);//вычисление 
    divresult = div(Kb, 1024);//вычисление 
    Mb = divresult.quot;//вычисление 

   cout << Mb << mb << Kb << kb << B << b;//вывод результата
}