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
//method 1
void change(Student &S){
    S.name="Manish";
}
//method 2
void change(Student *S){
    (*S).name="kartik";
    //OR
    S->name="Kartik" ;
}
int main(){
    Student S1("Krishna Garg", 22 ,8.89); //writing value of arguments
    Student S2("Raghav Garg", 23 , 9.08);
    change(S1);//for method 1 -> Manish
    change(&S1);// for method 2 -> kartik


    print(S1);
    print(S2);
}