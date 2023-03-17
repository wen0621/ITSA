# ITSA題目

## 題目

**問題描述 ：**
在做傅立葉轉換時，常會用到複數，但每次都要分開來計算實部與虛部，非常的麻煩，現在透過operator overloading的方式來簡化程式設計師的負擔。須做加減乘。

**輸入說明 ：**
第一列輸入一個正整數n。其後有n列，每一列代表一個想要做運算的虛數，每一列之資料依序為運算元、虛數1、虛數2。虛數的格式為a b。

**輸出說明 ：**
每一列表一個運算結果。虛數的格式為a b。

**範例 ：**

<table>
    <tr>
      <th>Sample Input: </th>
      <th>Sample Output: </th>
    </tr>
    <tr>
      <td align="center">3<br>- 1 2 2 -3<br>+ 2 1 1 2<br>* 1 1 1 1 </td>
      <td align="center">-1 5<br>3 3<br>0 2 </td>
    </tr>
</table>

### 程式碼 & 說明
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

`#include <iostream>` 導入 iostream
`int main(){}` 主程式區塊

使用`cin`將值輸入至變數 `num` 判斷執行次數

使用`cin`將運算元輸入至變數 `symbol` 用 `switch` 判斷運算方式

> 加法
>
> `real[0] + real[1]` `img[0] + img[1]`

> 減法
>
> `real[0] - real[1]` `img[0] - img[1]`

> 乘法
>
> `real[0] * real[1] - img[0] * img[1]` `img[0] * real[1] + real[0] * img[1]`

> 除法
>
> `(real[0] * real[1] + img[0] * img[1]) / (real[1] * real[1] + img[1] * img[1])` `img[0] * real[1] - real[0] * img[1] / (real[1] * real[1] + img[1] * img[1])`


### 結果
---
![結果](https://cdn.discordapp.com/attachments/914196675961188443/1086178520885112872/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1086178205767057488/image.png)