#include <iostream>
using namespace std;
class Student{ 
public:
    string name; 
    int roll;
    float gpa;
    Student(){ 

    }
    Student(string name, int roll, float gpa){ 
        this ->name=name;
        this ->roll=roll;
        this ->gpa=gpa;
    }
    void print(int roll){
        cout<<this->name<<" "<<this->roll<<" "<<this->gpa<<"\n"; //this ensures that if we had void print(int roll) so it prints roll that we gave in first declaration.
        cout<<roll;// this prints 6 as we gave S1.print(6) and not 22 as that went in class.
    }
};
int main(){
    Student S1("Krishna Garg", 22 ,8.89); 
    Student S2("Raghav Garg", 23 , 9.08);

    S1.print(6);
}