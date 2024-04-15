#include <iostream>
#include <windows.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <string>
#include <fstream>
#include <cmath>
#include <iostream>

using namespace std;
int generateTick(int student, int tick) {
    int tickNumbers = (student % tick) + 1;
    return tickNumbers;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(NULL));

    int student = 0; //студент
    const int tick = 15; // количество билетов
    
    cout << "Введите число" << endl;
    cin >> student;
    
    int Ticked = generateTick(student, tick);

    cout << "Номер вашего билета = " << Ticked << endl;

    return 0;
}
