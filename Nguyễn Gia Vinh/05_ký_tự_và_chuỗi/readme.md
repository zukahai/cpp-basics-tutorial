# Ký tự và chuỗi

Bảng mã **ASCII**

<p align="center"> <img src="./images/ascii.png" alt="bg" /> </p>

- Cách chuyển ký tự thành số trong C++

```cpp
char c = 'A';
int n = c;
cout << n; // 65
```

- Cách chuyển số thành ký tự trong C++

```cpp
int n = 65;
char c = n;
cout << c; // A
```

# Bài tập

## Bài 1: nhập xuất ký tự

Nhập vào một ký tự và in ra ký tự đó.

**Input:**

```
A
```

**Output:**

```
A
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << ch
}
```

## Bài 2: Ví trí ký tự

Nhập vào một ký tự và in ra vị trí của ký tự đó trong bảng mã ASCII.

**Input:**

```
A
```

**Output:**

```
65
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << (int)ch;
}
```


## Bài 3: Ký tự in hoa

Nhập vào một ký tự in thường và in ra ký tự in hoa tương ứng.

**Input:**

```
a
```

**Output:**

```
A
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << (char)(ch - 32);
}
```


## Bài 4: Ký tự in thường

Nhập vào một ký tự in hoa và in ra ký tự in thường tương ứng.

**Input:**

```
A
```

**Output:**

```
a
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << (char)(ch + 32);
    
}
```

## Bài 5: Ký tự tiếp theo

Nhập vào một ký tự và in ra ký tự tiếp theo trong bảng mã ASCII.

**Input:**

```
A
```

**Output:**

```
B
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << (char)(ch + 1);
}
```

## Bài 6: Ký tự trước đó

Nhập vào một ký tự và in ra ký tự trước đó trong bảng mã ASCII.

**Input:**

```
A
```

**Output:**

```
@
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    cout << (char)(ch - 1);
}
```


## Bài 7: Kiểm tra ký tự in hoa

Nhập vào một ký tự và kiểm tra xem ký tự đó có phải là ký tự in hoa hay không. In ra `True` nếu là ký tự in hoa, ngược lại in ra `False`.

**Input:**

```
A
```

**Output:**

```
True
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 65 && ch <= 90)
        cout << "true";
    else
        cout << "false";
}
```

## Bài 8: Kiểm tra ký tự số

Nhập vào một ký tự và kiểm tra xem ký tự đó có phải là ký tự số hay không. In ra `True` nếu là ký tự số, ngược lại in ra `False`.

**Input:**

```
5
```

**Output:**

```
True
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;
    if (ch >= 48 && ch <= 57)
        cout << "true";
    else
        cout << "false";
}
```


## Bài 9: Nhập xuất chuỗi

Nhập vào một chuỗi và in ra chuỗi đó.

**Input:**

```
Hello Quyet
```

**Output:**

```
Hello Quyet
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s;
}
```

## Bài 10: Độ dài chuỗi

Nhập vào một chuỗi và in ra độ dài của chuỗi đó.

**Input:**

```
Hello Quyet
```

**Output:**

```
11
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s.length();
}
```

## Bài 11: Ký tự đầu tiên và cuối cùng

Nhập vào một chuỗi và in ra ký tự đầu tiên và ký tự cuối cùng của chuỗi đó.

**Input:**

```
Hello Quyet
```

**Output:**

```
H t
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    cout << s[0] << " " << s[s.length() - 1];
}
```

## Bài 12: Số lượng ký tự in hoa

Nhập vào một chuỗi và in ra số lượng ký tự in hoa trong chuỗi đó.

**Input:**

```
Hello Quyet
```
**Output:**

```
2
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    int dem = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 65 && s[i]<= 90)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 13: Số lượng ký tự số

Nhập vào một chuỗi và in ra số lượng ký tự số trong chuỗi đó.

**Input:**

```
Hello 123 Quyet
```

**Output:**

```
3
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    int dem = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 48 && s[i]<= 57)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 14: In hoa chuỗi

Nhập vào một chuỗi và in ra chuỗi in hoa tương ứng.

**Input:**

```
Hello Quyet
```

**Output:**

```
HELLO QUYET
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 97 && s[i] <= 122)
        {
            cout << s[i];
        }
}
```

## Bài 15: In thường chuỗi

Nhập vào một chuỗi và in ra chuỗi in thường tương ứng.

**Input:**

```
Hello Quyet
```

**Output:**

```
hello quyet
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 97 && s[i] <= 122)
        {
            
            cout << (char)(s[i] - 32);
        }
        else
            cout << s[i];
        
}
```

## Bài 16: Đảo chuỗi

Nhập vào một chuỗi và in ra chuỗi đảo ngược.

**Input:**

```
Hello Quyet
```

**Output:**

```
teyuQ olleH
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length()- 1; i++)
        if (s[i] >= 65 && s[i] <= 90)
        {
            
            cout << (char)(s[i] + 32);
        }
        else
            cout << s[i];
}
```

## Bài 17: Ký tự in thường

Cho chuỗi s, in ra các ký tự in thường trong s

**Input:**

```
Le Quyet
```

**Output:**

```
euyet
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    for (int i = s.length()-1; i > 0; i--)
        cout << s[i];
}
```

## Bài 18: Tổng các ký tự số

Cho chuỗi s, tính tổng các ký tự số trong s

**Input**

```
Hello 124 Quyet
```

**Output**

```
7
```

Giải thích: 1 + 2 + 4 = 7

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    int tong = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
        if (s[i] >= 48 && s[i] <= 57)
        {
            tong += s[i]-48;
        }
    cout << tong;
}
```

## Bài 19: Số từ trong câu

Đếm số từ trong chuỗi s

 **Input:**

 ```
Xin chao cac ban
```

**Output**

```
4
```

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int main() {
    int dem = 0;
    string s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 32)
        {
            dem += 1;
        }
    cout << dem + 1;
    
}
```
 
