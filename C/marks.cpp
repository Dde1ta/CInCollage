#include <iostream>

using namespace std;

int main()
{
    float assingment ,surprise_test,quiz,total;
    float mst_1,mst_2,m,suprisetotal,s,attendence;
    cout<<"Enter the your assignment marks: ";
    cin>>assingment;
    cout<<"Enter the your attendence marks: ";
    cin>>attendence;
    cout<<"Enter the your surprise test marks: ";
    cin>>surprise_test;
    s = ((surprise_test)/12)*4;
    cout<<"Enter the your quiz marks: ";
    cin>>quiz;
    cout<<"Enter your MST 1 marks:";
    cin>>mst_1;
    cout<<"Enter your MST 2 marks: ";
    cin>>mst_2;

    m =( mst_1 + mst_2)/2;
    
    total = assingment  + quiz + m + attendence + s;  
    cout<<"Your internal marks is = "<<total;
return 0;
}
