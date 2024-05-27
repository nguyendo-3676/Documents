#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Date
{
    int Day, Month, Year;
    public:
    // Dinh nghia ham tao va ham huy
        Date()
        {
            Day = 15;
            Month = 12;
            Year = 2020;
        }
        ~Date()
        {
            cout<<"\nClear date !";
        }
        //Dinh nghia toan tu xuat
        friend ostream &operator<<(ostream &output, Date &date)
        {
            output<<"Ngay "<<date.Day<<" Thang "<<date.Month<<" Nam "<<date.Year<<".";
            return output;
        }
        //Dinh nghia toan tu nhap
        friend istream &operator>>(istream &input,  Date &date)
        {
            cout<<"Nhap vao ngay: "; input>>date.Day;
            cout<<"Thang: "; input>>date.Month;
            cout<<"Nam : "; input>>date.Year;
            return input;
        }
        //Dinh nghia toan tu so sanh > -----------  Neu date1 > date2 => date1 xuat hien truoc date 2 va nguoc lai
        bool operator>(Date &date)
        {
            if(Year < date.Year)
            {
                return true;
            }
            else if( Year == date.Year && Month < date.Month)
            {
                return true;
            }
            else if(Year == date.Year && Month == date.Month && Day <date.Day)
            {
                return true;
            }
            else
            {
                return false;
            }
        }  
        // Toan tu so sanh ==
        bool operator==(Date &date)
        {
            if(Year == date.Year && Month == date.Month && Day ==date.Day)
            {
                return true;
            }
            return false;
        }  
};
//Ham nhap vao danh sach

void createListDate(Date *date, int &n)
{
    char choose;
    int index = 0;
    do{
        cout<<"Nhap vao danh sach cac ngay:"<<endl;
        cin>>*(date+index);
        index ++;
        n++;
        cout<<"\nBan co muon nhap them ngay khong ? Y/N";
        cout<<"\nLua chon cua ban: "; cin>>choose;
    }while(choose !='N');
}

//Ham sap xep lai danh sach ngay 
void sort(Date *date, int n)
{
    for(int i = 0; i<n-1; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(*(date +j)>*(date +i))
            {
                swap(*(date +i),*(date +j));
            }
        }
    }
}


//ham xuat danh sach:
void print(Date *date, int n)
{
    for(int i = 0; i<n; i++)
    {
         cout<<i+1<<". "<<*(date +i)<<endl;
    }
}

int main()
{
    int n = 0;
    Date *date = new Date[100];
    createListDate(date,n);
    cout<<"\nDanh sach ngay truoc khi sap xep:  "<<endl;
    print(date,n);
    cout<<"\nDanh sach ngay theo thu tu tu cu den moi: "<<endl;
    sort(date,n);
    print(date,n);
    delete[] date; date=NULL; 
    return 0;
}
