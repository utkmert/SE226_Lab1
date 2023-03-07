#include <iostream>
using namespace std;
int main() {
    string y;
    cout<<"Enter your name:";
    cin>>y;
    cout<<"Your name is " << y;


    int x;
    cout<<"Enter your student ID:";
    cin>>x;
    cout<<"Your ID is " << x;



    int var1 , var2 , sum , diff , prod;
    cout << "Enter your first number: ";
    cin>>var1;
    cout << "Enter your second number: ";
    cin>>var2;
    sum = var1 + var2;
    diff = var1 - var2;
    prod = var1 * var2;
    cout << "Sum = " << sum;
    cout << "Diff = " << diff;
    cout << "Prod = " << prod;



    string name;
    int labGrade , midtermGrade , finalGrade , finalScore;
    cout << "Enter student name:: ";
    cin >> name;
    cout << "Enter your lab grade: ";
    cin >> labGrade;
    cout << "Enter your midterm grade: ";
    cin >> midtermGrade;
    cout << "Enter your final grade: ";
    cin >> finalGrade;
    finalScore = labGrade * 0.25 + midtermGrade * 0.35 + finalGrade * 0.4;
    cout <<"final score is " << finalScore;



    cout << "*\n**\n***\n**\n*\n";
}
