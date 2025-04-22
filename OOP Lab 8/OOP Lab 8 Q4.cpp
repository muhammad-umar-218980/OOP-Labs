#include <iostream>
using namespace std;

/* 

    Muhammad Umar
    CSIT Section - A
    Roll no. : CT - 24028

*/

class Media {
protected:
    string title;
    bool isBorrowed;

public:
    Media(string title) {
        this->title = title;
        this->isBorrowed = false;
    }

    void borrow() {
        if (!isBorrowed) {
            isBorrowed = true;
            cout << title << " has been borrowed." << endl;
        } else {
            cout << title << " is already borrowed." << endl;
        }
    }

    void returnMedia() {
        if (isBorrowed) {
            isBorrowed = false;
            cout << title << " has been returned." << endl;
        } else {
            cout << title << " was not borrowed." << endl;
        }
    }

    void display() {
        cout << "Title: " << title << endl;
        if(isBorrowed){
        	cout << "Status : Borrowed " << endl;
		}else{
        	cout << "Status : Available " << endl;
		}
    }
};


class Book : public Media {
private:
    string author;

public:
    Book(string title, string author) : Media(title) {
        this->author = author;
    }

    void display() {
        Media::display();
        cout << "Author: " << author << endl;
    }
};




class Magazine : public Media {
private:
    int issueNumber;

public:
    Magazine(string title, int issueNumber) : Media(title) {
        this->issueNumber = issueNumber;
    }

    void display() {
        Media::display();
        cout << "Issue Number: " << issueNumber << endl;
    }
};




class DVD : public Media {
private:
    string director;

public:
    DVD(string title, string director) : Media(title) {
        this->director = director;
    }

    void display() {
        Media::display();
        cout << "Director: " << director << endl;
    }
};




int main() {
	
    Book book1("The Great Gatsby", "F. Scott Fitzgerald");
    
    Magazine mag1("National Geographic", 202304);
    
    DVD dvd1("Inception", "Christopher Nolan");

	cout << "-----------------------------------------------------------------------" << endl << endl ;
	
    book1.display();
    cout << endl;
    mag1.display();
    cout << endl;
    dvd1.display();
    cout << endl;

	cout << "-----------------------------------------------------------------------" << endl << endl ;

    book1.borrow();
    cout << endl;
    mag1.borrow();
    cout << endl;
    dvd1.borrow();
    cout << endl ;

	cout << "-----------------------------------------------------------------------" << endl << endl ;

    book1.display();
    cout << endl;
    mag1.display();
    cout << endl;
    dvd1.display();
    cout << endl;

	cout << "-----------------------------------------------------------------------" << endl << endl ;

    book1.returnMedia();
    cout << endl;
    mag1.returnMedia();
    cout << endl;
    dvd1.returnMedia();
    cout << endl << endl;

	cout << "-----------------------------------------------------------------------" << endl << endl ;
    book1.display();
    cout << endl;
    mag1.display();
    cout << endl;
    dvd1.display();

    return 0;
}
