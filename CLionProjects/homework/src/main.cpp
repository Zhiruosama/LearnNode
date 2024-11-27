//
// Created by murane on 24-10-28.
//
#include<iostream>

using namespace std;

class Date
{
public:
    Date(int year,int month,int day)
    {
        _year=year;
        _month=month;
        _day=day;
    }

    Date& operator++()//前置
    {
        this->_day++;
        if(this->_month == 1 || this->_month == 3 || this->_month == 5 ||
            this->_month == 7 || this->_month == 8 || this->_month == 10 || this->_month ==12)
        {
            if(_day>=31)
            {
                _day=1;
                _month++;
                if(_month>=12)
                {
                    _year++;
                    _month=1;
                }
            }
        }
        else if(this->_month==4||this->_month==6||this->_month==9||this->_month==11)
        {
            if(_day>=30)
            {
                _day=1;
                _month++;
            }
        }
        else if(this->_month==2)
        {
            if((_year%4==0&&_year%100!=0)||_year%400==0)//闰年
            {
                if(_day>=29)
                {
                    _day=1;
                    _month++;
                }
            }
            else//平年
            {
                if(_day>=28)
                {
                    _day=1;
                    _month++;
                }
            }
        }

        return *this;
    }

    Date operator++(int)
    {
        Date temp=*this;
        _day++;
        if(temp._month == 1 || temp._month == 3 || temp._month == 5 ||
                   temp._month == 7 || temp._month == 8 || temp._month == 10 || temp._month == 12)
        {
            if(_day>=31)
            {
                _day=1;
                _month++;
                if(_month>=12)
                {
                    _year++;
                    _month=1;
                }
            }
        }
        else if(temp._month==4||temp._month==6||temp._month==9||temp._month==11)
        {
            if(_day>=30)
            {
                _day=1;
                _month++;
            }
        }
        else if(temp._month==2)
        {
            if((_year%4==0&&_year%100!=0)||_year%400==0)//闰年
            {
                if(_day>=29)
                {
                    _day=1;
                    _month++;
                }
            }
            else//平年
            {
                if(_day>=28)
                {
                    _day=1;
                    _month++;
                }
            }
        }
        return temp;
    }

    void Test()
    {
        cout<<"year: "<<_year<<" "<<"month: "<<_month<<" "<<"day: "<<_day;
    }

private:
    int _year;
    int _month;
    int _day;
};

int main()
{
    Date d1(1999,12,31);
    ++d1;
    d1.Test();
    cout<<endl;
    Date d2(2000,12,31);
    d2++;
    d2.Test();
}
