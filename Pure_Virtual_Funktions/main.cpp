#include <iostream>
using namespace std;

class Vehicle{
    int fuel;
    int price;
    int capacity;
public:
    int passengers;
    Vehicle(){
        fuel = 0;
        price = 0;
        capacity = 0;
        passengers = 0;
    }
    virtual ~Vehicle() {}
    virtual void Print() = 0;
    virtual void Init() = 0;
    virtual void SetPrice(int p){
        price = p;
    };
    virtual void SetCapacity(int c){
        capacity = c;
    }
    virtual void SetPassengers() = 0;
};

class Car : public Vehicle{
    void Print(){
        cout << "Car";
    }
    void Init(){
        cout << "Init car...\n";
        int help;
        cout << "Enter price: ";
        cin >> help;
        SetPrice(help);
        cout << "Enter capacity: ";
        cin >> help;
        SetCapacity(help);
    }
    void SetPassengers(){
        passengers = 4;
    }
};

int main() {
    Vehicle* v[5];
    for (int el = 0; el < 5; el++){
        v[el] = new Car();
        v[el]->Init();
    }
    for (int el = 0; el < 5; el++){
        delete v[el];
    }
}
