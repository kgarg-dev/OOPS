//basic Structure of class and objects
#include <iostream>
using namespace std;
class Student{ //student is object here
public:
    //declaration of attributes of class
    string name; 
    int roll;
    float gpa;
};
int main(){
    Student S1;
    S1.name="Krishna Garg"; 
    S1.roll=22;
    S1.gpa=8.89;

    Student S2;
    S2.name="Raghav Garg";
    S2.roll=23;
    S2.gpa=9.08;
}