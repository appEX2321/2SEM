#include<iostream>
using namespace std;

class Finger{
public:
    virtual void finger(){
        cout<<"функция для пальцев"<<endl;
    }
};

class Arm: public Finger{
public:
    void finger(){
        cout<<"тут пальцы рук"<<endl;
    }
};

class Leg: public Finger{
public:
    void finger(){
        cout<<"тут пальцы ног"<<endl;
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
