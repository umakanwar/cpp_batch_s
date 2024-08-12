//Write a C++ function that takes the coordinates of a 
//point (x, y) as input and uses nested if-else statements to determine in which quadrant the point lies.
#include <bits/stdc++.h>
using namespace std;
string checkquadrant(int x,int y){
    if(x==0 && y==0){
        return "origin.";
    }
    else if(x==0){
        return "on Y-axis.";
    }
    else if(y==0){
        return "on X-axis.";
    }
    else if(x>0 && y>0){
        return "in Ist quadrant.";
    }
    else if(x>0 && y<0){
        return "in IVth quadrant.";
    }
    else if(x<0 && y>0){
        return "in IInd quadrant";
    }
    else if(x<0 && y<0){
        return "in IIIrd quadrant.";
    }
}

int main(){
    int x,y;
    cout<<"Enter the value of X: ";
    cin>>x;
    cout<<"Enter the value of Y: ";
    cin>>y;
    cout<<"The coordinate are "<<(checkquadrant(x,y));
    return 0;
}