# ITSA�D��

## �D��

**���D�y�z�G**

**���w�U�C���j�禡�G**
![C_RU06.JPG](https://cdn.discordapp.com/attachments/914196675961188443/1085885580061192303/C_RU06.png)
�Эp��X f (k) �C

**��J�����G**
��J�Ȭ��@�Ӥj�� 1 ����ơC

**��X�����G**
f(k) ���p�⵲�G�C

**�d�ҡG**
| Sample Input | Sample Output |
|-|-|
|10|60|
|12|94|

### �{���X & ����
---
```cpp
#include <iostream>
using namespace std;

int funtion(int num) {
	if ((num == 0) || (num == 1))
		return num + 1;
	else
		return funtion(num - 1) + funtion(num / 2);
}
int main() {
	int num;
	cin >> num;
	cout << funtion(num) << endl;
	return 0;
}
```

`#include <iostream>` �ɤJ iostream

`int main(){}` �D�{���϶�

�ϥ�`cin`�N�ȿ�J���ܼ�`num`

�N`num`��J�i�禡`funtion()`�B��

�Y`num` = 0 �� 1 �^�� `num` + 1

�_�h

### ���G
---
![���G](https://cdn.discordapp.com/attachments/914196675961188443/1085880703603982398/image.png)
![���G](https://cdn.discordapp.com/attachments/914196675961188443/1085880783132164147/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1085880535324299305/image.png)