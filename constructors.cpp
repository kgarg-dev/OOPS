#include <iostream>
using namespace std;
class Student{ 
public:
    string name; 
    int roll;
    float gpa;
    Student(){ // default constructor , when we create constructor system removes this itself so we need to redefine it to declare by simple method.

    }
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

    Student S3; //declaring by simple method
    S3.name="Arnav Bansal";
    S3.roll=29;
    S3.gpa=6.69;
// copy constructors 
//method1:- 
    Student S4=S1; //copied and it is a deep copy.
    // deep copy ->> only s4 will change no changes to s1.
    //example:-
    S4.name="Prateek";
//method 2:-
    Student S5(S1);
    S5.name="Shyam Garg"; // so again its a deep copy

    print(S1);
    print(S2);
    print(S3);
    print(S4);
    print(S5);

}