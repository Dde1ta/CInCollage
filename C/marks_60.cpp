
#include <iostream>
using namespace std;
int main()
{
    float assingment ,surprise_test,quiz,total,worksheet, worksheet1,worksheet2,worksheet3,worksheet4,worksheet5,worksheet6,worksheet7,worksheet8,worksheet9,worksheet10,end;
    float mst_1,mst_2,m,suprisetotal,s,attendence,labmst,n;
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
    cout<<"Enter your end sem practical marks";
    cin>>end;
    
    cout<<"Enter your lab mst marks";
    cin>>labmst;
    
    n= ((labmst)/10)*15;
    cout<<"Enter your worksheet marks ";
    cout<<"Enter your worksheet 1 marks ";
    cin>>worksheet1;
    cout<<"Enter your worksheet 2 marks ";
    cin>>worksheet2;
    cout<<"Enter your worksheet 3 marks ";
    cin>>worksheet3;
    cout<<"Enter your worksheet 4 marks ";
    cin>>worksheet4;
    cout<<"Enter your worksheet 5 marks ";
    cin>>worksheet5;
    cout<<"Enter your worksheet 6 marks ";
    cin>>worksheet6;
    cout<<"Enter your worksheet 7 marks ";
    cin>>worksheet7;
    cout<<"Enter your worksheet 8 marks ";
    cin>>worksheet8;
    cout<<"Enter your worksheet 9 marks ";
    cin>>worksheet9;
    cout<<"Enter your worksheet 10 marks ";
    cin>>worksheet10;
    
    worksheet = ((worksheet1+worksheet2+worksheet3+worksheet4+worksheet5+worksheet6+worksheet7+worksheet8+worksheet9+worksheet10)/300)*45;
    
    
    
    

    m =( mst_1 + mst_2)/2;
    
    total = ((assingment  + quiz + m + attendence + s+worksheet+end+n)/140*70);  
    cout<<"Your internal marks is = "<<total;
return 0;
}
