#include <iostream>
using namespace std;
class Student{ 
public:
    string name; 
    int roll;
    float gpa;
    Student(){ 

    }
    Student(string name, int roll, float gpa){ //we use this keyword when out arguments are same as above. as if same these get values but the above ones dont change. void swap () concept.
        this ->name=name;
        this ->roll=roll;
        this ->gpa=gpa;
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