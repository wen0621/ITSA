# ITSA�D��

## �D��

**���D�y�z �G**
�b���ť߸��ഫ�ɡA�`�|�Ψ�ƼơA���C�����n���}�ӭp��곡�P�곡�A�D�`���·СA�{�b�z�Loperator overloading���覡��²�Ƶ{���]�p�v���t��C�����[��C

**��J���� �G**
�Ĥ@�C��J�@�ӥ����n�C��ᦳn�C�A�C�@�C�N��@�ӷQ�n���B�⪺��ơA�C�@�C����ƨ̧Ǭ��B�⤸�B���1�B���2�C��ƪ��榡��a b�C

**��X���� �G**
�C�@�C��@�ӹB�⵲�G�C��ƪ��榡��a b�C

**�d�� �G**

<tr> 
    <p><strong>Sample Input: </strong></p> 
    <p><strong>Sample Output: </strong></p> 
</tr> 
<tr> 
    <p>3<br>- 1 2 2 -3<br>+ 2 1 1 2<br>* 1 1 1 1 </p> 
    <p>-1 5<br>3 3<br>0 2 </p> 
</tr>


### �{���X & ����
---
```cpp
#include <iostream>
using namespace std;

int main() {
	int num, real[2], img[2];
	cin >> num;
	for (int i = 0; i < num; i++) {
		char symbol;
		cin >> symbol >> real[0] >> img[0] >> real[1] >> img[1];
		switch (symbol) {
			case '+':
				cout << real[0] + real[1] << " " << img[0] + img[1] << endl;
				break;
			case '-':
				cout << real[0] - real[1] << " " << img[0] - img[1] << endl;
				break;
			case '*':
				cout << real[0] * real[1] - img[0] * img[1] << " " << img[0] * real[1] + real[0] * img[1] << endl;
				break;
			case '/':
				cout << (real[0] * real[1] + img[0] * img[1]) / (real[1] * real[1] + img[1] * img[1]) << " " << img[0] * real[1] - real[0] * img[1] / (real[1] * real[1] + img[1] * img[1]) << endl;
				break;
			default:
				break;
		}
	}
	return 0;
}
```



### ���G
---
![���G](https://cdn.discordapp.com/attachments/914196675961188443/1086178520885112872/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1086178205767057488/image.png)