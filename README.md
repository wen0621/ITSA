# ITSA題目

## 題目

**問題描述：**

**給定下列遞迴函式：**
![C_RU06.JPG](https://cdn.discordapp.com/attachments/914196675961188443/1085885580061192303/C_RU06.png)
請計算出 f (k) 。

**輸入說明：**
輸入值為一個大於 1 的整數。

**輸出說明：**
f(k) 的計算結果。

**範例：**
| Sample Input | Sample Output |
|-|-|
|10|60|
|12|94|

### 程式碼 & 說明
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

`#include <iostream>` 導入 iostream

`int main(){}` 主程式區塊

使用`cin`將值輸入至變數`num`

將`num`輸入進函式`funtion()`運算

若`num` = 0 或 1 回傳 `num` + 1

否則

### 結果
---
![結果](https://cdn.discordapp.com/attachments/914196675961188443/1085880703603982398/image.png)
![結果](https://cdn.discordapp.com/attachments/914196675961188443/1085880783132164147/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1085880535324299305/image.png)