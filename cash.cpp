#include <iostream>
using namespace std;

int main() {
    int coin;
    cout << "請輸入你的金錢?";
    cin >> coin;
    string unit[] = {"units digit：" , "tens digit：" , "hundreds digit:" , "thousands digit:"};

    for (uint i = 0, unit_index = 0, n = 1, remain = 0; i < 4; i ++, unit_index ++, n = n * 10) {
        remain = (coin / n) % 10;
        if (n == 1000) {
            remain = (coin / n);
        }
        cout << unit[unit_index].c_str() << remain << "\n";
        // printf("%s%u\n",unit[unit_index].c_str(),remain);
    }
}
