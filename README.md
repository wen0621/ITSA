# ITSA�D��

## �D��8. ��ƧP�O
���D�y�z�G
�ռ��g�@�ӵ{���A�ѿ�J�@�Ӿ�ơA�M��P�O���ƬO�_����ơC��ƬO�����F 1 �M���������~�A�S���䥦���ƥi�H�㰣�����ơA�Ҧp�A 2, 3, 5, 7 �P 11 ���Ҭ���ơC

��J�����G��J�@�ӥ���ơC
   
��X�����G������ YES �F�D������ NO �C
   

<table>
    <tr>
      <th>��J�d��:</th>
      <th>��X�d��:</th>
    </tr>
    <tr>
      <td align="center">23</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">37</td>
      <td align="center">YES</td>
    </tr>
    <tr>
      <td align="center">39</td>
      <td align="center">NO</td>
    </tr>
</table>



### �{���X & ����
---
```cpp
#include <iostream>
using namespace std;
int main()
{
    int input = 0;
    while(cin >> input)
    {
        bool check = true;
        for (int i = 2; i <= input - 1; i++) {
            if (input % i == 0) {
                check = false;
                break;
            }
        }
        if (check == true) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
```

`#include <iostream>` �ɤJ iostream  
`int main(){}` �D�{���϶�     

int input = 0;
   - �ŧi�Ω��x�s��J�Ȫ�����ܼ�

�ϥ� **`while(cin >> input){}`** ����N��ƿ�J�� `input` �ܼ�  
   - 1.�ŧi�@�� `check` ���L�ܼƥΩ��x�s�ˬd�ƭȬO�_���i�H�㰣����ñN�ȳ]��true�A�קK�X��
   - 2.�ϥ� **`for`** �j��q2�@���� `��J��-1`
        - ���G�]����ƬO�����F1�M�ۤv�H�~�S����L��ƭȥi�H�㰣�ۤv
        - �p�G���ƭȨ� `i` ���l�Ƭ� `0` (�Y���ܾ㰣)  
        ����N�N�����L���O��ơA�Ncheck�]�� `false`�A�ø��X�j��
   - 3.�ϥ� `if` �P�_ `check`
     - �p�G�� `true` ���ܬ���ơA��X `YES`
     - �_�h��X `NO` (�Y���O���)



### ���G
---
![���G](https://cdn.discordapp.com/attachments/1083434363968032828/1086134342562107492/image.png)
![ITSA](https://cdn.discordapp.com/attachments/1083434363968032828/1086134519490424892/image.png)
