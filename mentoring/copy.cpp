#include <iostream>
#include <string>

using namespace std;

class account {

private:
    int num;

public:
    string name = "ȫ�浿";
    account() {
        num = 1;
        name = "ȫ�浿";
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

//private public ������ ������ ������ �Ҹ���
int main() {
    int* a = new int(100);
    int* b = new int(200);
    *b = *a;    //  deepcopy
    cout << a << endl;
    cout << b << endl;
    cout << *a << endl;
    cout << *b << endl;
}