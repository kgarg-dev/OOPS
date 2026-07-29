#include <iostream>
using namespace std;
class Student{ 
public:
    string name; 
    int roll;
    float gpa;

    Student(string s, int r, float g){ //constructors
        name=s;
        roll=r;
        gpa=g;
    }
};
void print(Student S){
    cout<<S.name<<" "<<S.roll<<" "<<S.gpa<<"\n";
}
int main(){
    Student S1("Krishna Garg", 22 ,8.89); //writing value of arguments
    Student S2("Raghav Garg", 23 , 9.08);

    print(S1);
    print(S2);
}