#include<iostream>
using namespace std;

class Finger{
public:
    virtual void finger(){
        cout<<"������� ��� �������"<<endl;
    }
};

class Arm: public Finger{
public:
    void finger(){
        cout<<"��� ������ ���"<<endl;
    }
};

class Leg: public Finger{
public:
    void finger(){
        cout<<"��� ������ ���"<<endl;
    }
};

int main(){
    setlocale(LC_ALL,"rus");
    Finger palec;
    palec.finger();
    Arm pravaya;
    pravaya.finger();
    Leg levaya;
    levaya.finger();
    return 0;
}
