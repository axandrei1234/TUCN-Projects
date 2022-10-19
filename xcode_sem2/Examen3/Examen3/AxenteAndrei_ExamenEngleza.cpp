#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

ostream &manip (ostream &);

class Vehicle {
protected:
    string name;
    string producer;
    int wheels;
public:
    Vehicle (string n="Unknown", string p="Unknown", int w=0) : name{n}, producer{p}, wheels{w} {}
    Vehicle (const Vehicle &v1) {*this=v1;}
    void operator=(const Vehicle &v) {
        name = v.name;
        producer = v.producer;
        wheels = v.wheels;
    }
    
    void setName (string name) {this->name = name;}
    string getName() {return name;}
    
    void setProducer(string producer) {this->producer = producer;}
    string getProducer() {return producer;}
    
    void setWheels (int wheels) {this->wheels = wheels;}
    int getWheels () {return wheels;}
    
    virtual void display() {
        cout << "Name: " << manip << name << endl;
        cout << "Producer: " << manip << producer << endl;
        cout << "Wheels: " << manip << wheels << endl;
    }
    
    
    ~Vehicle() {}
};

class Car : public Vehicle {
private:
    int power;
    int capacity;
public:
    
    Car (string n="Unknown", string p="Unknown", int w=0, int pw=0, int c=0) : Vehicle(n,p,w), power{pw}, capacity{c} {}
    Car (const Car &c1) {*this = c1;}
    
    void operator = (const Car &c) {
        name = c.name;
        producer = c.producer;
        wheels = c.wheels;
        power = c.power;
        capacity = c.capacity;
    }
    
    
    void setPower(int power) {this->power = power;}
    int getPower() {return power;}
    
    void setCapacity(int capacity) {this->capacity = capacity;}
    int getCapacity() {return capacity;}
    
    void display() override {
        cout << "Name: " << manip << name << endl;
        cout << "Producer: " << manip << producer << endl;
        cout << "Wheels: " << manip << wheels << endl;
        cout << "Power: " << manip << power << endl;
        cout << "Capacity: " << manip << capacity << endl;
    }
};


int main() {
    Vehicle v1("Masina" , "Dacia", 133);
    Vehicle v2;
    v2=v1;
    Vehicle v3(v1);
    
    Car c1("Logan", "Dacia", 133, 10, 20);
    Car c2;
    c2=c1;
    Car c3(c1);
}


ostream &manip (ostream &stream) {
    stream.width(30);
    stream.setf(ios::left);
    return stream;
}

ostream &operator<<(ostream &stream, Vehicle v) {
    stream << "Name: " << v.getName() << endl;
    stream << "Producer: " << v.getProducer() << endl;
    stream << "Wheels: " << v.getWheels() << endl;
    return stream;
}

ostream &operator<<(ostream &stream, Car c) {
    stream << "Name: " << c.getName() << endl;
    stream << "Producer: " << c.getProducer() << endl;
    stream << "Wheels: " << c.getWheels() << endl;
    stream << "Power: " << c.getPower() << endl;
    stream << "Capacity: " << c.getCapacity() << endl;
    return stream;
}
