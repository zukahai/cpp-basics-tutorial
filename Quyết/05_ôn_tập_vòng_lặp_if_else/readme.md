# Ôn tập các vòng lặp và câu lệnh điều kiện 

## Bài 1. Kiểm tra chia hết cho 3

Nhập vào số nguyên dương `n`, kiểm tra xem `n` có phải chia hết cho 3 không. Nếu có in ra `n chia hết cho 3`, ngược lại in ra `n không chia hết cho 3`.

Ví dụ:

- Với `n = 6` thì in ra `6 chia hết cho 3`
- Với `n = 7` thì in ra `7 không chia hết cho 3`
- Với `n = 9` thì in ra `9 chia hết cho 3`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    {
        if (n % 3 == 0)
        {
            cout << n << " chia het cho 3";
        }
        else
        {
            cout << n << " khong chia het cho 3";
        }
    }
}

```

## Bài 2. Kiểm tra số 2 chữ số

Nhập vào số nguyên dương `n`, kiểm tra xem `n` có phải là số có 2 chữ số không. Nếu có in ra `n là số có 2 chữ số`, ngược lại in ra `n không phải là số có 2 chữ số`.

Ví dụ:

- Với `n = 6` thì in ra `6 không phải là số có 2 chữ số`
- Với `n = 12` thì in ra `12 là số có 2 chữ số`
- Với `n = 99` thì in ra `99 không phải là số có 2 chữ số`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n >= 10 && n <= 99)
    {
        cout << n << " la so co 2 chu so";
    }
    else
    {
        cout << n << " khong phai la so co 2 chu so";
    }
}

```

## Bài 3. Kiểm tra số tính chẵn lẻ

Nhập vào 2 số nguyên dương `a` và `b`, kiểm tra xem `a` và `b` có cùng tính chất chẵn lẻ không. Nếu cùng chẵn hoặc cùng lẻ thì in ra `a và b cùng tính chất chẵn lẻ`, ngược lại in ra `a và b không cùng tính chất chẵn lẻ`.

Ví dụ:

- Với `a = 2` và `b = 3` thì in ra `2 và 3 không cùng tính chất chẵn lẻ`
- Với `a = 4` và `b = 6` thì in ra `4 và 6 cùng tính chất chẵn lẻ`
- Với `a = 7` và `b = 9` thì in ra `7 và 9 cùng tính chất chẵn lẻ`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int a,b;
    int n = 2;
    cin >> a >> b;
    if ((a % n == 0 && b % n == 0) || (a % n != 0 && b % n != 0))
    {
        cout << a << " "<< b << " cung tinh chat chan le";
    }
    else {
        cout << a << " "<< b << " khong cung tinh chat chan le";
    }
    
}

```

## Bài 4. Kiểm tra chênh lệch

Nhập vào 2 số nguyên dương `a` và `b`, kiểm tra xem chênh lệch giữa `a` và `b` có lớn hơn 10 không. Nếu lớn hơn 10 thì in ra `Chênh lệch giữa a và b lớn hơn 10`, ngược lại in ra `Chênh lệch giữa a và b không lớn hơn 10`.

Ví dụ:

- Với `a = 2` và `b = 3` thì in ra `Chênh lệch giữa a và b không lớn hơn 10`

- Với `a = 4` và `b = 16` thì in ra `Chênh lệch giữa a và b lớn hơn 10`

- Với `a = 7` và `b = 9` thì in ra `Chênh lệch giữa a và b không lớn hơn 10`

- Với `a = 100` và `b = 20` thì in ra `Chênh lệch giữa a và b lớn hơn 10`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if ((a - b <= 10 && a >=b) || (b - a <= 10 && b >= a))
    {
        cout << " chech lech giua a va b khong lon hon 10";
    }
    else
    {
        cout << " chech lech giua a va b lon hon 10";
    }
}
    
```

## Bài 5. In ra các số chẵn

Nhập vào số nguyên dương `n`, in ra tất cả các số chẵn từ trong khoảng từ 1 đến `n`.

Ví dụ:

- Với `n = 5` thì in ra `2 4`
- Với `n = 10` thì in ra `2 4 6 8 10`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
}
```

## Bài 6. In ra các số lẻ

Nhập vào số nguyên dương `n`, in ra tất cả các số lẻ từ trong khoảng từ 1 đến `n`.

Ví dụ:

- Với `n = 5` thì in ra `1 3 5`
- Với `n = 10` thì in ra `1 3 5 7 9`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
}

```

## Bài 7. In ra các số chia hết cho 3 hoặc 5

Nhập vào số nguyên dương `n`, in ra tất cả các số chia hết cho 3 hoặc 5 từ trong khoảng từ 1 đến `n`.

Ví dụ:

- Với `n = 5` thì in ra `3 5`
- Với `n = 10` thì in ra `3 5 6 9 10`
- Với `n = 20` thì in ra `3 5 6 9 10 12 15 18 20`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
        }
}

```

## Bài 8. In ra các số chia hết cho 2 và 3

Nhập vào số nguyên dương `n`, in ra tất cả các số chia hết cho 3 và 5 từ trong khoảng từ 1 đến `n`.

Ví dụ:

- Với `n = 7` thì in ra `6`
- Với `n = 10` thì in ra `6`
- Với `n = 20` thì in ra `6 12 18`
- Với `n = 30` thì in ra `6 12 18 24 30`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0 && i % 3 == 0)
        {
            cout << i << " ";
        }
}
```

## Bài 9. Đếm số chẵn

Nhập vào số nguyên dương `n`, đếm xem trong khoảng từ 1 đến `n` có bao nhiêu số chẵn.

Ví dụ:

- Với `n = 5` thì in ra `2`
- Với `n = 10` thì in ra `5`
- Với `n = 20` thì in ra `10`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 == 0)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 10. Đếm số lẻ

Nhập vào số nguyên dương `n`, đếm xem trong khoảng từ 1 đến `n` có bao nhiêu số lẻ.

Ví dụ:

- Với `n = 5` thì in ra `3`
- Với `n = 10` thì in ra `5`
- Với `n = 20` thì in ra `10`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 != 0)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 11. Đưa ra các ước số

Nhập vào số nguyên dương `n`, in ra tất cả các ước số của `n`.

**Ước số** của một số nguyên dương `n` là số nguyên dương `m` sao cho `n` chia hết cho `m`.

Ví dụ:

- Với `n = 6` thì in ra `1 2 3 6`
- Với `n = 10` thì in ra `1 2 5 10`
- Với `n = 20` thì in ra `1 2 4 5 10 20`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            cout << i << " ";
        }
}
```

## Bài 12. Đếm số ước số

Nhập vào số nguyên dương `n`, đếm xem `n` có bao nhiêu ước số.

Ví dụ:

- Với `n = 6` thì in ra `4`
- Với `n = 10` thì in ra `4`
- Với `n = 20` thì in ra `6`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            dem += 1;
        }
    cout << dem;
}
```

## Bài 13. Kiểm tra số nguyên tố

Nhập vào số nguyên dương `n`, kiểm tra xem `n` có phải là số nguyên tố không. Nếu có in ra `n là số nguyên tố`, ngược lại in ra `n không phải là số nguyên tố`.

**Số nguyên tố** là số nguyên dương lớn hơn 1 và chỉ chia hết cho 1 và chính nó.

**Gợi ý**: Số nguyên tố chỉ chia hết cho 1 và chính nó, nghĩa là nó có đúng 2 ước số.

Ví dụ:

- Với `n = 6` thì in ra `6 không phải là số nguyên tố`
- Với `n = 7` thì in ra `7 là số nguyên tố`
- Với `n = 9` thì in ra `9 không phải là số nguyên tố`

Bài làm của Quyết:

```cpp
#include <iostream>

using namespace std;

int main() {
    int n;
    int dem = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            dem += 1;
        }
    if (dem == 2)
        cout << n << "la so nguyen to";
    else
        cout << n << "khong phai la so nguyen to";
}









