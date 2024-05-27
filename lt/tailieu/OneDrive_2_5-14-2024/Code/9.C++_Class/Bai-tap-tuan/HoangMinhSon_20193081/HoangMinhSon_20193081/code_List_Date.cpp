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
            cout<<"\n--------------------------------------";
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
//Ham sap xep lai danh sach ngay 
void sort(vector <Date*> &List)
{
    if(List.size() > 0)
    {
        for(int i = 0; i<List.size()-1; i++)
        {
            for(int j = i+1; j<List.size(); j++)
            {
                if(*(List[j])>*(List[i]))
                {
                    swap(*(List[i]),*(List[j]));// doi cho 2 thoi diem neu thoi diem j xuat hien trc thoi diem i
                }
            }
        }
    }
}


//ham xuat danh sach:
void print(vector <Date*> &list)
{
    if(list.size() < 1)
    {
        cout<<"\nChua co ngay nao duoc tao. Vui long tao them!"<<endl;
    }
    else{
        for(int i = 0; i<list.size(); i++)
        {
            cout<<i+1<<". "<<*(list[i])<<endl;
        }
    }
}
void reversePrint(vector <Date*> &list)// in theo thu tu nguoc lai bang cach lap tu cuoi mang
{
    int count = 0;
    if(list.size()<1)
    {
        cout<<"\nChua co ngay nao duoc tao. Vui long tao them!"<<endl;
    }
    else{
        for(int i = list.size()-1; i>=0; i--)
        {
            cout<<count +1<<". "<<*(list[i])<<endl;
            count ++;
        }
    }
}

//ham chuong trinh
void menu()
{
    vector <Date*> listDate;// mang luu danh sach cac ngay
    char choose;
    do{
        cout<<setw(10)<<"MENU"<<endl;
        cout<<"1. Nhap vao cac ngay "<<endl;
        cout<<"2. In ra binh thuong"<<endl;
        cout<<"3. In ra theo thu tu cu den moi"<<endl;
        cout<<"4. In ra theo thu tu tu moi den cu"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Lua chon cua ban la:";cin>>choose;
        cout<<"\n--------------------------------------------"<<endl;
        switch(choose)
        {
            case '1':// khoi tao danh sach cac ngay
                char chon;
                do{
                    listDate.push_back(new Date);
                    cin>>*(listDate.back());
                    cout<<"\nBan co muon nhap tiep khong ? Y/N";
                    cout<<"\nLua chon: ";cin>>chon;
                }while(chon !='N'&&chon !='n');
            break;
            case '2':
                cout<<"\nDanh sach ngay thang in ra binh thuong:"<<endl;
                print(listDate);
            break;
            case '3':
                sort(listDate);
                cout<<"\nDanh sach ngay thang in ra tu cu den moi:"<<endl;
                print(listDate);
            break;
            case '4':
                sort(listDate);
                cout<<"\nDanh sach ngay thang in ra tu moi den cu: "<<endl;
                reversePrint(listDate);
            break;
            case '5':
                cout<<"\n"<<setw(20)<<"THANK YOU!";
            break;
            default:
                cout<<"Khong hop le moi nhap lai !"<<endl;
            break;

        }
    }
    while(choose !='5');
}

int main()
{
    menu();
    return 0;
}