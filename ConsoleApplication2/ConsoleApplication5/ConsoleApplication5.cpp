/*Класс КОНДИЦИОНЕР.
Данные: фирма, модель, вес, температура, режим, год выпуска.
Создать 2 кондиционера в куче и проинициализировать их с помощью конструкторов с 
параметрами. Еще один кондиционер создать отдельно в стеке и установить его данные 
с помощью сеттеров. В главной функции проимитировать настройку кондиционеров 
персоналом помещений – установить каждому режим; если выбран режим охлаждения, 
то установить также температуру. Проделать эту процедуру три раза. Вывести 
информацию об использовании кондиционеров – режим, в котором на данный момент 
работает техника, среднее изменение температуры за весь период настройки*/



#include <iostream>
#include <string>
#include "Conditioner.h"
using namespace std;


string modes[2] =
{
    "Cooling", "Heating"
};


int setTemp_main(Conditioner cond)
{
    int user_temp;
    cout << "Set the temperature:" << endl;
    cin >> user_temp;
    cout << endl;
    cout << endl;
    return user_temp;
}

bool modeChecker_main(string mode)
{
    if (mode == "Cooling") return true;
    if (mode == "Heating") return false;
}

void modeFuncHeap(Conditioner* cond)
{
    bool ck = true;
    string user_mode;
    while (ck)
    {
        cout << "Please, set the mode (1 - Cooling, 2 - Heating): " << endl;
        cin >> user_mode;
        if (user_mode == "Cooling" || user_mode == "Heating") ck = false;
        else cout << "Wrong mode. (1 - Cooling, 2 - Heating)" << endl;
    }
    cond->setMode(user_mode);
    if (cond->modeChecker()) 
    {
        int user_temp;
        cout << "Set the temperature:" << endl;
        cin >> user_temp;
        cout << endl;
        cond->setTemp(user_temp);
        cout << endl;
    }
}

string modeFunc()
{
    bool ck = true;
    string user_mode;
    while (ck)
    {
        cout << "Please, set the mode (1 - Cooling, 2 - Heating): " << endl;
        cin >> user_mode;
        if (user_mode == "Cooling" || user_mode == "Heating") ck = false;
        else cout << "Wrong mode. (1 - Cooling, 2 - Heating)" << endl;
    }
    //cond.setMode(user_mode);
    for (int i = 0; i < sizeof(modes); i++) 
    {
        if (modes[i] == user_mode) return user_mode;
    }
   /* if (cond.modeChecker())
    {
        int user_temp;
        cout << "Set the temperature:" << endl;
        cin >> user_temp;
        cout << endl;
        cond.setTemp(user_temp);
        cout << endl;
    } */
}


int main()
{
    Conditioner* cond1 = new Conditioner("LG", "D122", 12.7, 2021);
    Conditioner* cond2 = new Conditioner("Mitsubishi", "S177", 15.1, 2020);
    Conditioner cond3;

    cond3.setFirm("Samsung");
    cond3.setModel("A412");
    cond3.setWeight(16.2);
    cond3.setYear(2019);

    cond1->printInfo();
    cout << endl;
    cond2->printInfo();
    cout << endl;
    cond3.printInfo();
    cout << endl;


    cond1->serialize();
    cond2->deserialize();


    cond1->serialize("A:/Новая папка (3)/myfile.txt");
    cond3.deserialize("A:/Новая папка (3)/myfile.txt");

    cond1->printInfo();
    cout << endl;
    cond2->printInfo();
    cout << endl;
    string user_mode_main;
    
    modeFuncHeap(cond1);
    modeFuncHeap(cond2);
    user_mode_main = modeFunc();
    cond3.setMode(user_mode_main);
    if (modeChecker_main(user_mode_main)) cond3.setTemp(setTemp_main(cond3));

    cond1->printInfo();
    cout << endl;
    cond2->printInfo();
    cout << endl;
    cond3.printInfo();

    modeFuncHeap(cond1);
    modeFuncHeap(cond2);
    user_mode_main = modeFunc();
    cond3.setMode(user_mode_main);
    if (modeChecker_main(user_mode_main)) cond3.setTemp(setTemp_main(cond3));

    cond1->printInfo();
    cout << endl;
    cond2->printInfo();
    cout << endl;
    cond3.printInfo();

    modeFuncHeap(cond1);
    modeFuncHeap(cond2);
    user_mode_main = modeFunc();
    cond3.setMode(user_mode_main);
    if (modeChecker_main(user_mode_main)) cond3.setTemp(setTemp_main(cond3));


    cond1->printInfo();
    cout << endl;
    cond2->printInfo();
    cout << endl;
    cond3.printInfo();
    
    delete cond1, cond2;
}
