#include <iostream>
using namespace std;

int main() {
    string student;  // Changed to string for storing the full name
    int one, two, three, four;
    
    cout << "Enter Student Name: ";
    cin >> student;
    
    cout << "Enter Grade of 1st Subject: ";
    cin >> one;
    
    cout << "Enter Grade of 2nd Subject: ";
    cin >> two;
    
    cout << "Enter Grade of 3rd Subject: ";
    cin >> three;
    
    cout << "Enter Grade of 4th Subject: ";
    cin >> four;
    
    float average = (one + two + three + four) / 4.0;  
    cout << "Average = " << average << endl;

    if (one > two && one > three && one > four) {
        cout << student<<" You have scored the maximum in 1st Subject"<<endl;
    } else if (two > one && two > three && two > four) {
        cout << student<<" You have scored the maximum in 2nd Subject"<<endl;
    } else if (three > one && three > two && three > four) {
        cout << student<<" You have scored the maximum in 3rd Subject"<<endl;
    } else {
        cout << student<<" You have scored the maximum in 4th Subject"<<endl;
    }
    if(one<two && one<three && one<four){
        cout << student<<" You have scored the minimum in 1st Subject"<<endl;
    }
    else if(one>two && two<three && two<four){
        cout << student<<" You have scored the minimum in 2nd Subject"<<endl;
    }
    else if(three<two && one>three && three<four){
        cout << student<<" You have scored the minimum in 3rd Subject"<<endl;
    }
    else{
        cout << student<<" You have scored the minimum in 4th Subject"<<endl;
    }

    return 0;  
}
