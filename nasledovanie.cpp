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
    Vasya.typeFinger = "��������";
    cout<<"���� ���� "<<Vasya.height<<" ���������� ��� ���� "<<Vasya.kolvoArm<<" ���������� ��� ���� "<<Vasya.kolvoLeg<<" ��� ������� ���� "<<Vasya.typeFinger<<endl;
    return 0;
}s
