#include iostream;
using namespace std
int main() {
    int a, b, c, d, e, max,;
    cout << ""enter 5 numbers"}
    cin >> a >> b >> c >> d >> e;
    max= (b>a)? b : a;
    max= (c>max)? c : max;
    max= (d>max)? d : max;
    max= (e>max)? e : max;
    cout << " largest number is" << max;
    return 0;
}