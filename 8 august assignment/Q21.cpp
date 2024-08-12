//Write a C++ function that takes the marks of a student in three subjects as input and uses nested if-else 
//statements to determine if the student passed all subjects, passed any one subject, or failed.
#include <bits/stdc++.h>
using namespace std;
string result(int a,int b,int c){
    if(a>30 && b>30 && c>30){
        return "Passed in all subjects.";
    }
    else if(a>30 && b>30 && c<30 || a>30 && b<30 && c>30 || a<30 && b>30 && c>30){
        return "Passed in 2 subjects but failed in 1 subject.";
    }
     else if(a>30 && b<30 && c<30 || a<30 && b<30 && c>30 || a<30 && b>30 && c>30){
        return "Passed in 1 subjects but failed in 2 subject.";
    }
    else{
        return "Failed in all subjects.";
    }
}
int main(){
    int a,b,c;
    cout<<"English marks: ";
    cin>>a;
    cout<<"Maths marks: ";
    cin>>b;
    cout<<"Hindi marks: ";
    cin>>c;
    cout<<"The student has "<<(result(a,b,c));
}