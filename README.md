# ITSA�D��

## �D��10. ����۰��k

���D�y�z�G
���w�G�ӥ���ơA�Q������۰��k�D��̤j���]�ơC

��J�����G
���w�G�ӥ����

��X�����G
��X�̤j���]��

�d�ҡG
���]��J�� 300 �P 250, �h��X�� 50

### �{���X & ����
---
```cpp
#include <iostream>
using namespace std;
int gcd(int x, int y) {
    int num = 1;
    while (num != 0) {
        num = x % y;
        x = y;
        y = num;
    }
    return x;
}
int main() {
    int x, y;
    cin >> x;
    cin >> y;
    cout << gcd(x, y) << endl;
    return 0;
}
```
`#include <iostream>` �ɤJ iostream

`int main(){}` �D�{���϶�

�ϥ�`cin`�N�ȿ�J���ܼ� `x`�B`y`

�ϥ�[����۰��k](https://zh.wikipedia.org/zh-tw/����۰��k)���X�̤j���]�ƫ�A�ϥ�`cout`��X����۰��k�禡`gcd()`�^�ǭ�

### ���G
---
![���G](https://cdn.discordapp.com/attachments/914196675961188443/1085626266436251668/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1085626535626678303/image.png)