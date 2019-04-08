#include <iostream>
#include <string>

using namespace std;

static string benzine_1="80";   //����������� ������
static string benzine_2="92";
static string benzine_3="95";
static string benzine_4="��";

class Car   //��� ������
{
private:    //���������� ����
    bool typeFuel;
public:
    Car():typeFuel(true){}  //����������� �� ���������
    Car(bool a):typeFuel(a){}   //����������� � ����������
    Car(const Car &other){this->typeFuel=other.typeFuel;} // ����������� �����������
    void showType(){if(typeFuel)cout<<benzine_2<<endl;
                    else cout<<benzine_4<<endl;}
    ~Car(){}    //����������
};

class passengerCars : virtual public Car
{
public:
    int power;
    int maxSpeed;
    int Lenght;
    passengerCars():power(210), maxSpeed(190){}
    passengerCars(int a, int b, int c):power(a), maxSpeed(b), Lenght(c){}
    void setter(int p, int m, int l){power=p, maxSpeed=m, Lenght=l;}
    void  showPower(){cout<<"�������� ���������: "<< power <<" l.s."<<endl;}
    void  showSpeed(){cout<<"������������ ��������: "<<maxSpeed<<endl;}
    ~passengerCars(){}
};

class trucks : virtual public Car, public passengerCars
{
public:
    friend passengerCars;   //������������ ������������� ����� ������������ ������
    int CCapacity;
    int Tlenght;
    trucks():CCapacity(13), Tlenght(123){}
    trucks(bool a, int b, int c):Car(a), CCapacity(b), Tlenght(c){}
    void showCC(){cout<<"����������������: "<<CCapacity<<" ����"<<endl;}
    friend void showHC();
    class bus : public Car
    {
    private:
        int HCapacity;
        friend void showHC();   //������������� ������������� �������
    public:
        bus():HCapacity(42){}
        bus(int a):HCapacity(a){}
        void showHC(){cout<<"�����������: "<<HCapacity<<" �������"<<endl;}
        ~bus(){}
    };
    ~trucks(){}
};

class trailer: public Car, public trucks
{
public:
    int fullLenght=281;
    trailer():fullLenght(281){}
    trailer(int a):fullLenght(a){}
    friend trailer operator+ (trailer&l, trailer& r);
    void showSize(){cout<<"����� ���������� � ��������: "<<fullLenght<<" ��"<<endl;}
    ~trailer(){}
};

trailer operator+ (trailer&l, trailer& r)   //���������� ��������� +
    {
        return trailer (l.fullLenght+r.fullLenght);
    }


int main()
{
    setlocale(0, "rus");
    cout<<"VAZ"<<endl;
    passengerCars VAZ(210, 190, 467);
    VAZ.showType();
    VAZ.showPower();
    VAZ.showSpeed();
    cout<<"\nKAMAZ"<<endl;
    trucks KAMAZ(false, 18, 123);
    KAMAZ.showType();
    KAMAZ.setter(240, 130, 780);
    KAMAZ.showPower();
    KAMAZ.showSpeed();
    KAMAZ.showCC();
    cout<<"\nLIAZ"<<endl;
    trucks::bus LIAZ;
    LIAZ.showType();
    KAMAZ.setter(270, 150, 700);
    KAMAZ.showPower();
    KAMAZ.showSpeed();
    LIAZ.showHC();
    cout<<"\nVAZtr"<<endl;
    trailer vaz(VAZ.Lenght);
    trailer TR(KAMAZ.Tlenght);
    trailer VAZtr = TR + vaz;
    VAZtr.setter(290, 140, 945);
    VAZtr.showPower();
    VAZtr.showSpeed();
    VAZtr.showSize();

    return 0;
}
