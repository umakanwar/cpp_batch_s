// 3.user product ek string enter karega
// LUx Lux LuX = Soap
// ViVel  =Soap
// lIFEbOUY =soap

// gooday =biscuit
// snacks = biscuit
// marigold = biscuit

// Axe = perfume
// Vellavita =perfume
// fog = perfume

#include<bits/stdc++.h>
using namespace std;
string fxn(string name)
{
    transform(name.begin(), name.end(), name.begin(), ::tolower);
    if(name=="lifebouy" || name=="vivel" ||name=="lux" )
        return "Soap";
    else if(name=="goodday" || name =="snacks" || name=="marigold")
        return "Biscuit";
    else if(name == "axe" || name == "vellavita" || name=="fog")
        return "Perfumes";
    else
        return "Invalid Keyword";
       
}
int main()
{
    string name;
    cout<<"Enter the string\n";
    cin>>name;
    cout<<fxn(name);
}