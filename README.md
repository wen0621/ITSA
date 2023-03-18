# ITSA題目

## 題目

**問題描述：**
迴文是指從前面讀和從後面讀都相同的一個數字或一段文字。
例如下列每一五位數的整數都是迴文： 123321 ， 55555 ， 45554 ， 11611 。
請撰寫一個程式，判斷它是否迴文。

**輸入說明：**
輸入一個正整數。

**輸出說明：**
迴文印出 ” 是 ” ；非回文印出 ” 否 ” 。

**範例：**
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



### 程式碼 & 說明
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

`#include <iostream>` 導入 iostream

`int main(){}` 主程式區塊

宣告`input`字串 存放輸入值，
`len`整數 存放字串長度

使用`for`迴圈逐次檢查是否為迴文，若為迴文`cout`列印出NO，否則列印YES

### 結果
---
![結果](https://media.discordapp.net/attachments/914196675961188443/1086771532816191548/image.png)
![結果](https://media.discordapp.net/attachments/914196675961188443/1086771793487986789/image.png)
![結果](https://media.discordapp.net/attachments/914196675961188443/1086772032110334082/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1086771088811368598/image.png)