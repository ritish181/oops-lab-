// program nby ritish
// wap for hierachial inheritance

#include<iostream>
using namespace std ;

class Staff 
{
    protected :
    string code ;
    string name ;
    public :
    void get_staff()
    {
        cout << "enter code : " ;
        cin >> code ;
        cout << "enter name : " ;
        cin >> name ;
    }
    void display_staff()
    {
        cout << " Staff code is : " << code <<  endl ;
        cout << " Staff name  : " << name << endl ;
    }
};

class Teacher : public Staff
{
    protected :
    string subject ;
    int pub ;
    public :
    void get_teacher()
    {
        get_staff();
        cout << "enter subject : " ;
        cin >> subject ;
        cout << "publications : " ;
        cin >> pub ;
    }
    void display_teacher()
    {
        display_staff();
        cout << " subject  :" << subject << endl ;
        cout  << "publications : " << pub << endl ;
    }
};

class Typist : public Staff
{
    protected :
    int speed ;
    public :
    void get_speed()
    {
        get_staff();
        cout << "speed : ";
        cin >> speed;
    }
    void display_speed()
    {
        cout << "typng speed : " << speed << endl ;
    }
};

class Officer : public Staff
{
    protected :
    char grade ;
    public :
    void get_grade()
    {
        get_staff();
        cout << "grade : " ;
        cin >> grade ;
    }
    void display_grade()
    {
        display_staff();
        cout << "grade :" << grade << endl ;
    }
};

class Regular : public Typist
{
    protected :
    int salary ;
    public :
    void get_salary()
    {
        cout << "salary :  " ;
        cin >> salary ;
    }
    void display_salary()
    {
        display_staff();
        display_speed() ;
        cout << "Salary :" << endl ;
    }
};

class Casual : public Typist
{
    protected:
    int daily ;
    public :
    void get_daily()
    {
        cout << "daily wage : " ;
        cin >> daily ;
    }
    void display_daliy()
    {
        display_staff();
        display_speed();
        cout << "Daily Wage : " << daily << endl ;
    }
};


int main()
{
    Teacher t ;
    Officer o ;
    Regular r ;
    Casual c ;
    int ch ;
    while(1)
    {
    cout << " press : \n 1:teacher \n 2: officer \n 3: regular typist \n 4: casual typist \n 5: display \n " ;
    cin >> ch ;
    switch(ch)
    {
        case 1:
        {
        t.get_teacher();
        
            break ;
        }
        case 2:
        {
          o.get_grade();
            break ;
        }
        case 3 :
        {
          r.get_speed();
          r.get_salary();

            break;
        }
        case 4 :
        { c.get_speed();
     c.get_daily();
         
                    
            break ;
        }
        default :
        break ;
        case 5 :
        {
            t.display_teacher();
            o.display_grade();
            r.display_salary();
             c.display_daliy();
            break ;
        }
    }
    cout << "press any key to exit" ;
    if(ch != 1 && ch !=2 && ch != 3&& ch !=4&& ch != 5)
    break ;
}
    
    return 0 ;
}



























































