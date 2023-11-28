/* 4. Create a class Book with data members as bname,id,author,price. 
Write getters and setters for all the data members. Also add the display function. 
Create Default and Parameterized constructors. 
Create the object of this class in main method and invoke all the methods in that class. */

#include<iostream>
using namespace std;
class book
{
    private:
    string bname;
    int id;
    string author;
    double price;
    public:
    book()  //default constructor
    {
        bname="ABC";
        id=10;
        author="XYZ";
        price=100.00;
    }
    book(string bname,int id,string author,double price)  //parameterizes constructor
    {
        this->bname=bname;
        this->id=id;
        this->author=author;
        this->price=price;
    }
    void print()
    {
        cout<<"Book name:"<<bname<<endl;
        cout<<"Id:"<<id<<endl;
        cout<<"Author:"<<author<<endl;
        cout<<"Price:"<<price<<endl;
    }
    string getname()
    {
        return bname;
    }
    int getid()
    {
        return id;
    }
    void setname(string bname)
    {
        this->bname=bname;
    }
    void setid(int id)
    {
        this->id=id;
    }
    void setauthor(string author)
    {
        this->author=author;
    }
    void setprice(double price)
    {
        this->price=price;
    }
};
int main4()
{
    book b;
    string m;
    b.print();
    m=b.getname();
    cout<<m<<endl;
    int n=b.getid();
    cout<<n<<endl;
    b.setname("XXX");
    b.setid(5);
    b.setauthor("YYY");
    b.setprice(1000);
    b.print();
    return 0;
}

