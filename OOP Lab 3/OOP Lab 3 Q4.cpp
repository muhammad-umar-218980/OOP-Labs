#include <iostream>
using namespace std;

/*

	Muhammad Umar
	CSIT Section - A
	Roll no. : CT - 24028

*/

class bookType {
private:
    string title;
    string authors[4];
    int number_of_authors;
    string publisher;
    int ISBN;
    double price;
    int number_of_copies;

public:
    bookType();
    
    void set_title(string value);
    string get_title();
    bool is_title_same(string value);

    void add_author(string author_name);
    string get_authors();

    void set_publisher(string value);
    string get_publisher();

    void set_ISBN(int value);
    int get_ISBN();
    bool is_ISBN_same(int value);

    void set_price(double value);
    double get_price();

    void set_number_of_copies(int value);
    void update_number_of_copies(int value);
    int get_number_of_copies();

    void display_book_info();
};

bookType::bookType() {
    title = "";
    publisher = "";
    ISBN = 0;
    price = 0.0;
    number_of_copies = 0;
    number_of_authors = 0;
}

void bookType::set_title(string value) {
    title = value;
}
string bookType::get_title() {
    return title;
}
bool bookType::is_title_same(string value) {
    if (title == value) {
        return true;
    } else {
        return false;
    }
}

void bookType::add_author(string author_name) {
    if (number_of_authors < 4) {
        authors[number_of_authors] = author_name;
        number_of_authors = number_of_authors + 1;
    }
}
string bookType::get_authors() {
    string author_list = "";
    for (int i = 0; i < number_of_authors; i++) {
        author_list = author_list + authors[i];
        if (i < number_of_authors - 1) {
            author_list = author_list + ", ";
        }
    }
    return author_list;
}


void bookType::set_publisher(string value) {
    publisher = value;
}
string bookType::get_publisher() {
    return publisher;
}

void bookType::set_ISBN(int value) {
    ISBN = value;
}
int bookType::get_ISBN() {
    return ISBN;
}
bool bookType::is_ISBN_same(int value) {
    if (ISBN == value) {
        return true;
    } else {
        return false;
    }
}

void bookType::set_price(double value) {
    price = value;
}
double bookType::get_price() {
    return price;
}

void bookType::set_number_of_copies(int value) {
    number_of_copies = value;
}
void bookType::update_number_of_copies(int value) {
    number_of_copies = number_of_copies + value;
}
int bookType::get_number_of_copies() {
    return number_of_copies;
}

void bookType::display_book_info() {
    cout << "\nTitle: \t\t\t" << title << endl;
    cout << "Authors: \t\t" << get_authors() << endl;
    cout << "Publisher: \t\t" << publisher << endl;
    cout << "ISBN: \t\t\t" << ISBN << endl;
    cout << "Price: \t\t\t" << price << "$" << endl;
    cout << "Stock: \t\t\t" << number_of_copies << " copies" << endl;
}

int main() {
    bookType book[100];

    book[0].set_title("Clean Code");
    book[0].add_author("Robert Martin");
    book[0].set_publisher("Prentice Hall");
    book[0].set_ISBN(123);
    book[0].set_price(49.99);
    book[0].set_number_of_copies(35);

    book[1].set_title("Design Patterns");
    book[1].add_author("Erich Gamma");
    book[1].add_author("Richard Helm");
    book[1].set_publisher("Addison-Wesley");
    book[1].set_ISBN(456);
    book[1].set_price(59.99);
    book[1].set_number_of_copies(40);

    book[2].set_title("Pride and Prejudice");
    book[2].add_author("Jane Austen");
    book[2].add_author("Some Other Author");
    book[2].set_publisher("Penguin Classics");
    book[2].set_ISBN(789);
    book[2].set_price(12.99);
    book[2].set_number_of_copies(50);

    book[3].set_title("To Kill a Mockingbird");
    book[3].add_author("Harper Lee");
    book[3].add_author("John Doe");
    book[3].set_publisher("Grand Central");
    book[3].set_ISBN(101);
    book[3].set_price(14.99);
    book[3].set_number_of_copies(45);

    book[4].set_title("Guns, Germs, and Steel");
    book[4].add_author("Jared Diamond");
    book[4].set_publisher("W.W. Norton");
    book[4].set_ISBN(202);
    book[4].set_price(29.99);
    book[4].set_number_of_copies(30);

    int choice;
    int search_ISBN;
    bool found = false;

    cout << "\nChoose an option:" << endl;
    cout << "1. Search Book By Title" << endl;
    cout << "2. Search Book By ISBN" << endl;
    cout << "3. Update Stock By ISBN" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1) {
        string search_query;
        cout << "\nEnter book title: ";
        cin.ignore();
        getline(cin, search_query);

        for (int i = 0; i < 5; i++) {
            if (book[i].is_title_same(search_query)) {
                book[i].display_book_info();
                found = true;
                break;
            }
        }
    } else if (choice == 2) {
        cout << "\nEnter book ISBN: ";
        cin >> search_ISBN;

        for (int i = 0; i < 5; i++) {
            if (book[i].is_ISBN_same(search_ISBN)) {
                book[i].display_book_info();
                found = true;
                break;
            }
        }
    } else if (choice == 3) {
        cout << "\nEnter book ISBN to update stock: ";
        cin >> search_ISBN;

        for (int i = 0; i < 5; i++) {
            if (book[i].is_ISBN_same(search_ISBN)) {
                int new_stock;
                cout << "\nEnter the number of copies to update (positive for addition, negative for removal): ";
                cin >> new_stock;
                book[i].update_number_of_copies(new_stock);
                cout << "\nUpdated stock information:" << endl;
                book[i].display_book_info();
                found = true;
                break;
            }
        }
    }

    if (found == false) {
        cout << "\nBook not found." << endl;
    }

    return 0;
}
