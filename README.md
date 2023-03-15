# ITSA題目

## 題目10. 輾轉相除法

問題描述：
給定二個正整數，利用輾轉相除法求其最大公因數。

輸入說明：
給定二個正整數

輸出說明：
輸出最大公因數

範例：
假設輸入為 300 與 250, 則輸出為 50

### 程式碼 & 說明
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
`#include <iostream>` 導入 iostream

`int main(){}` 主程式區塊

使用`cin`將值輸入至變數 `x`、`y`

使用[輾轉相除法](https://zh.wikipedia.org/zh-tw/輾轉相除法)取出最大公因數後，使用`cout`輸出輾轉相除法函式`gcd()`回傳值

### 結果
---
![結果](https://cdn.discordapp.com/attachments/914196675961188443/1085626266436251668/image.png)
![ITSA](https://cdn.discordapp.com/attachments/914196675961188443/1085626535626678303/image.png)