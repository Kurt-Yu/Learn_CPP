#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Student {
    string name;
    int age;
    string id;
    int first;
    int second;
    int third;
    int forth;

    public:
        void setFirst(int f) {
            first = f;
        }

        void setSecond(int s) {
            second = s;
        }

        void setThird(int t) {
            third = t;
        }

        void setForth(int f) {
            forth = f;
        }

    public:
        int average() {
            return (first + second + third + forth) / 4;
        }
};

int main() {
    
    string str;
    getline (cin, str);
    stringstream ss(str);
    vector<string> res;

    while( ss.good() ){
        string substr;
        getline(ss, substr, ',');
        res.push_back(substr);
    }

    int i = 0;
    Student s;
    s.setFirst(stoi(res.at(3)));
    s.setSecond(stoi(res.at(4)));
    s.setThird(stoi(res.at(5)));
    s.setForth(stoi(res.at(6)));
    
    cout << res.at(0) << "," << res.at(1) << "," << res.at(2) << "," << s.average() << endl;

    return 0;
}