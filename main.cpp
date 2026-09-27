#include <iostream>
#include <cmath>
using namespace std;
int main () {
int a,b;
setlocale (LC_ALL, "RU");
cout << "Программа, которая переводит время из минут и секунд в секунды." << endl;
cout << "Введите количество минут - " ;
cin >> a;

cout << "Введите количество секунд - " ; 
cin >> b;

if (cin.fail()){
    cout << "Введены неверные данные" << endl;
}
else {
    cout << "Количество секунл - " << a*60+b << endl;
}

return 0;}
