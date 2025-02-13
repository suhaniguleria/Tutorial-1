#include <iostream>
#include <string>
using namespace std;

class Book 
{
    private:
      string title;
      string author;
      string isbn;
      bool available;

public:
    Book(string t, string a, string i, bool avail = true) 
	{
        title = t;
        author = a;
        isbn = i;
        available = avail;
    }

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return isbn; }
    bool isAvailable() const { return available; }

    void borrowBook() 
	{
        if (available) 
		{
            available = false;
            cout << "Book borrowed successfully." << endl;
        } 
		else 
		{
            cout << "Book is not available." << endl;
        }
    }

    void returnBook() 
	{
        available = true;
        cout << "Book returned successfully." << endl;
    }

    void displayBook() 
	const 
	{
        cout << "Title: " << title << "\nAuthor: " << author
             << "\nISBN: " << isbn << "\nAvailable: " << (available ? "Yes" : "No") << endl;
    }
};

int main() 
{
    Book book1("The RAMAYANA", "RISHI VALMIKI", "100000001");

    book1.displayBook();
    book1.borrowBook();
    book1.displayBook();
    book1.returnBook();
    book1.displayBook();

    return 0;
}

