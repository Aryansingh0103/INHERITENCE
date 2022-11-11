#include<iostream>
#include<string.h>
using namespace std;
class student 
{
    public:
    string name;
    int roll;
    int age;
    void getdata();
};
void student :: getdata(void)
{
    cout<<"Enter Name , roll no. and age"<<endl;
    cin>>name>>roll>>age;


}
class test : public student
{
    public:
    int marks[8];
    void getmarks();
    void display ();
};
void test :: getmarks(void)
{
    cout<<"Enter the marks in 5 subjects"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"subject "<<i+1<<"  ";
        cin>>marks[i];
    }
}
void test :: display(void)
{
    for(int i=0;i<5;i++)
    {
        cout<<"Marks in subject "<<i+1<<"= "<<marks[i]<<endl;
    }
}
class result : public test
{
    public:
    int total=0;
    float per;
    void cal();
};
void result :: cal(void)
{
    for(int i=0;i<5;i++)
    {
        total = total+ marks[i];
    }
    cout<<"Total marks = "<<total<<endl;
    per=(total/500)*100;
    cout<<"percentage = "<<per<<"%"<<endl;

}
int main(int argc, char const *argv[])
{
    student s;
    result r;
    r.getdata();
    test t;
    r.getmarks();
    r.display();
    r.cal();
    return 0;
}