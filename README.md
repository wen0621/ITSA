# ITSA�D��

## �D��

**���D�y�z�G**
�j��O���q�e��Ū�M�q�᭱Ū���ۦP���@�ӼƦr�Τ@�q��r�C
�Ҧp�U�C�C�@����ƪ���Ƴ��O�j��G 123321 �A 55555 �A 45554 �A 11611 �C
�м��g�@�ӵ{���A�P�_���O�_�j��C

**��J�����G**
��J�@�ӥ���ơC

**��X�����G**
�j��L�X �� �O �� �F�D�^��L�X �� �_ �� �C

**�d�ҡG**
<table>
    <tr>
      <th>Sample Input: </th>
      <th>Sample Output: </th>
    </tr>
    <tr>
      <td align="center">123321<br>1556551<br>1244221 </td>
      <td align="center">YES<br>YES<br>NO</td>
    </tr>
</table>



### �{���X & ����
---
```cpp
#include <iostream>
using namespace std;

int main() {
	string input;
	int len;
	cin >> input;
	len = input.length();
	for (int i = 0; i < len / 2; i++) {
		if (input[i] != input[len -1 - i]) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
```

`#include <iostream>` �ɤJ iostream

`int main(){}` �D�{���϶�

�ŧi`input`�r�� �s���J�ȡA
`len`��� �s��r�����

�ϥ�`for`�j��v���ˬd�O�_���j��A�Y���j��`cout`�C�L�XNO�A�_�h�C�LYES

### ���G
---
![���G](https://media.discordapp.net/attachments/914196675961188443/1086771532816191548/image.png)
![���G](https://media.discordapp.net/attachments/914196675961188443/1086771793487986789/image.png)
![���G](https://media.discordapp.net/attachments/914196675961188443/1086772032110334082/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1086771088811368598/image.png)