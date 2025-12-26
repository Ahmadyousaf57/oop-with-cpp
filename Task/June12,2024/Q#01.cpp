#include<iostream>
using namespace std;
class Library_Item{
    public:
    string title;
    string author;
    int publication_year;
    int regi;
    string name;
    int choice;
    int issue_number;
    int isbn;
    virtual void checkout(){
        cout << "Enter the name of the Borrower : ";
        cin >> name;
        cout << "Enter the Registration Number of the Borrower : ";
        cin >> regi;
    }
    virtual void return_item() = 0;
};
class Book:public Library_Item{
    public:
   int issue_number;
    Book (string title, string author, int publication_year, int isbn){
       this->title = title;
       this->author = author;
       this->publication_year = publication_year;
       this->isbn = isbn;
       cout << "Enter 1 for checkout and 2 for clear : ";
       cin >> choice;
       checkout();
    }
    virtual void checkout() override{
        if(choice == 1){
            cout << "Mark as Checked :)" << endl;
        }else{
            return_item();
        }
    }
    virtual void return_item(){
        
    }
    ~Library_Item();
};
class Magazine:public Library_Item{
    public:
    int isbn;
    Magazine (string title, string author, int publication_year, int isbn){
       this->title = title;
       this->author = author;
       this->publication_year = publication_year;
       this->isbn = isbn;
       cout << "Enter 1 for checkout and 2 for clear : ";
       cin >> choice;
       checkout(choice);
    }
    
    virtual void checkout(int choice){
        cout << "Enter the name of the Borrower : ";
        cin >> name;
        cout << "Enter the Registration Number of the Borrower : ";
        cin >> regi;
        if(choice == 1){
            cout << "Mark as Checked :)" << endl;
        }else{
            return_item();
        }
    }
    virtual void return_item(){
       
    }
    ~Magazine();
};
