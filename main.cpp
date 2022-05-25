#include <iostream>
using namespace std;
class Mammels{
    public:
    void fun(){
        cout<<"Iam mammel"<<endl;
    }
};
class MarineAnimal{
    public:
    void fun(){
        cout<<"Iam Marine Animal"<<endl;
    }

};
class BlueWhale:public Mammels,public MarineAnimal{
    public:
    BlueWhale()
    {   
        cout<<"I belong to both categories"<<endl;
    }
    
};
int main(){
    BlueWhale obj;
    obj.Mammels::fun();
    obj.MarineAnimal::fun();
    
    return 0;


}