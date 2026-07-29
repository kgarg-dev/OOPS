//basic Structure of class and objects
#include <iostream>
using namespace std;
class Student{ 
public:
    
    string name; 
    int roll;
    float gpa;
};
void print(Student S){
    cout<<S.name<<" "<<S.roll<<" "<<S.gpa<<"\n";
}
int main(){
    Student S1;
    S1.name="Krishna Garg"; 
    S1.roll=22;
    S1.gpa=8.89;

    Student S2;
    S2.name="Raghav Garg";
    S2.roll=23;
    S2.gpa=9.08;

    print(S1);
    print(S2);
    //basically here we did added a function which makes easy for us to print each property of our objects.
}