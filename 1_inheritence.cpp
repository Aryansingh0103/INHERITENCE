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
    cout<<"Enter name ,Roll no. and age of your choice:"<<endl;
    cin>>name>>roll>>age;
    cout<<"Name - "<<name<<"\troll-"<<roll<<"\tage-"<<age<<endl;

}
class test : public student
{
    int marks[5];
    public : 
        void display ();
};
void test :: display(void)
{
    static int marks=0;
    for(int i=0;i<6;i++)
    {
        marks=marks+10;
        cout<<"marks in subject "<<i+1<<"= "<<marks<<endl;
    }
}
int main(int argc, char const *argv[])
{
    student s;
    s.getdata();
    test t;
    t.display();
    return 0;
}