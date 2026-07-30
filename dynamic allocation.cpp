#include <iostream>
using namespace std;
class Student{ 
public:
    string name; 
    int roll;
    float gpa;
    Student(){ 

    }
    Student(string s, int r, float g){
        name=s;
        roll=r;
        gpa=g;
    }
};
void print(Student S){
    cout<<S.name<<" "<<S.roll<<" "<<S.gpa<<"\n";
}

int main(){
    Student S1("Krishna Garg", 22 ,8.89); 
    Student *S2= new Student("Raghav Garg", 23 , 9.08); //dynamic memory allocated
    //Lifespan Control: Objects created on the stack are destroyed automatically when they go out of scope (e.g., at the end of a function).
    // Objects created with new stay in memory until you explicitly delete them using the delete keyword, 
    //allowing them to persist across different scopes.

    print(S1);
    print(*S2);
}