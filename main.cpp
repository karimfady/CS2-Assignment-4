#include <iostream>
#include <vector>
#include "linkedlist.hpp"
using namespace std;
void insertAfter(int firstValue,int secondValue,vector<int> &v){
   int x=v.size();
    for(int i=0;i<x;i++){
        if (v[i]==firstValue)
        {
            v.insert(v.begin()+i+1,secondValue);
            i++;
            x++;
        }
    }
};

int main() {
    int n;string z="yes";int r;
    linkedlist l;
    vector<int>v;
    cout<<"Please enter a number to be inserted in the vector: ";
    cin>>n;
    v.push_back(n);
    while(z=="yes"){
        cout<<"Do you want to add another number(yes/no): ";
        cin>>z;
        if(z=="yes"){
            cout<<"Number: ";
            cin>>n;
            v.push_back(n);
        }
    }
    z="yes";
    int firstValue;int secondValue;
    cout<<"Do you want to insert a number after a specific number in the vector (yes/no): ";
    cin>>z;
    while(z=="yes"){
        if(z=="yes"){
            cout<<"Enter the value you want to insert: ";
            cin>>secondValue;
            cout<<"After what value do you want to insert it: ";
            cin>>firstValue;
            insertAfter(firstValue,secondValue, v);
            cout<<"Do you want to do this process again (yes/no): ";
            cin>>z;
        }
    }
   for(int i=0;i<v.size();i++){
        l.Insert(v[i]);
    }
    cout<<"Do you want to remove a node (yes/no): ";
    cin>>z;
   while(z=="yes")
   {
       cout<<"Which node would you like to remove: (1-"<<l.getNumOfNodes()<<"): ";
       cin>>r;
       while(r<1)
       {
           cout<<"No 0 or negative numbers are allowed please try again: ";
           cin>>r;
       }
       while(r>l.getNumOfNodes())
       {
           cout<<"Number entered is larger than the number of nodes please re-etner: ";
           cin>>r;
       }
       l.Remove(r);
       cout<<"Do you want to remove another node (yes/no): ";
       cin>>z;
       
   }
    cout<<"------------------------------------------------"<<endl;
    l.Print();
    cout<<"------------------------------------------------"<<endl;
    cout<<"The sum of nodes is: "<<l.getSum()<<endl;
    

    return 0;
}
