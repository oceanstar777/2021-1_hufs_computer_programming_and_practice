#include <iostream>
#include <string>

using namespace std;

class account {

private:
    int num;

public:
    string name = "홍길동";
    account() {
        num = 1;
        name = "홍길동";
    }

    account(const account& obj)
    {
        num = obj.num;
        name = obj.name;
    }

    void show_all_vars() {
        cout << get_num() << endl;
        cout << name << endl;
    }
    int get_num() {
        return num;
    }
    void set_num(int n) {
        num = n;
    }

};

//private public 접근자 설정자 생성자 소멸자
int main() {
    int* a = new int(100);
    int* b = new int(200);
    *b = *a;    //  deepcopy
    cout << a << endl;
    cout << b << endl;
    cout << *a << endl;
    cout << *b << endl;
}