#include <iostream>
#include <string>

using namespace std;

class account {

private:
    int num;

public:
    string name = "ȫ�浿";
    account() {
        set_num(1);
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
    void set_num(int num) {
        this-> num = num;
    }

};

int main(void)
{
    account a;
    cout << a.get_num() << endl;
    a.set_num(100);
    cout << a.get_num() << endl;
}