#include<iostream>
#include<cstring>
using namespace std;

class Finger{
public:
    string typeFinger;
};

class Arm: public Finger{
public:
    int kolvoArm;
};

class Leg{
public:
    int kolvoLeg;
};


class HUMAN: public Arm, public Leg{
public:
    int height;
};

int main(){
    setlocale(LC_ALL,"rus");
    HUMAN Vasya;
    Vasya.height = 180;
    Vasya.kolvoArm = 2;
    Vasya.kolvoLeg = 2;
    Vasya.typeFinger = "короткие";
    cout<<"Рост Васи "<<Vasya.height<<" количество рук Васи "<<Vasya.kolvoArm<<" количество ног Васи "<<Vasya.kolvoLeg<<" тип пальцев Васи "<<Vasya.typeFinger<<endl;
    return 0;
}s
