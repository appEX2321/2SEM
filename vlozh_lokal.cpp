#include<iostream>
#include<cstring>
using namespace std;

class HUMAN{
public:
    int height = 190;

    class Arm{
    public:
        float length;
    };
};

void func(){
    class Typ: public HUMAN{
    public:
        string name;
    };
    Typ arr;
    for(int i=0; i<2; i++){
        arr.height+=1;
        cout<<arr.height<<" ";
    }
}

int main(){
    setlocale(LC_ALL,"rus");
    HUMAN Vasya;
    HUMAN::Arm levaya;
    HUMAN::Arm pravaya;
    levaya.length = 59.34;
    pravaya.length = 59.39;
    cout<<"длина правой руки "<<pravaya.length<<" длина левой руки "<<levaya.length<<" изменение роста ";
    func();
    return 0;
}
