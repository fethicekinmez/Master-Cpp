#include <iostream>
#include <string>
using namespace std;

struct Book{
    string title;
    string author;
    int pages;
};

int main(){

    Book book1;
    book1.title = "The Great Gatsby";
    book1.author = "F. Scott Fitzgerald";
    book1.pages = 180;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Pages: " << book1.pages << endl;

    return 0;
}

/*
Title: The Great Gatsby
Author: F. Scott Fitzgerald
Pages: 180
*/