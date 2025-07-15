#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class String {
private:
    vector<char*> arr;
    char* str;
public:
    String(const char* str1) {
        str = new char[strlen(str1) + 1];
        strcpy(str, str1);
        arr.push_back(str);
    }

    String() : String("") {}

    String(const char* str1, int maxSize)
        : String((strlen(str1) <= maxSize) ? str1 : "") {}


    void input() {
        cout << "Enter a text: ";
        cin.getline(str, 81);
        str = new char[81];
        arr.push_back(str);
        str = nullptr;
    }

    void print(const char* str) {
        for (char* s : arr) {
            cout << *s << endl;
        }
    }

    static int count(const vector<char*> arr1) {
        return arr1.size();
    }

    ~String(){
        for (char* s : arr) {
            delete[] s;
        }
        arr.clear();
    }
        
};


int main()
{
    
}

