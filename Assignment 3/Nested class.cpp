#include <iostream>
using namespace std;

class Library {
public:
    class Book {  // nested class
    public:
        string title;
        void setTitle(string t) {
            title = t;
        }
        void show() {
            cout << "Book Title: " << title << endl;
        }
    };
};

int main() {
    Library::Book b1;  // access nested class using ::
    b1.setTitle("The Alchemist");
    b1.show();
}
