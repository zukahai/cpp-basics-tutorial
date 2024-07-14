# Lập trình hàm trong C++

## Hàm là gì?

Hàm là một khối lệnh thực hiện một công việc cụ thể. Hàm giúp chương trình trở nên ngắn gọn, dễ đọc và dễ bảo trì hơn.

## Cú pháp

```cpp
kiểu_trả_về tên_hàm(tham_số) {
    // Nội dung hàm
}
```
## Ví dụ

### Ví dụ 1

```cpp
#include <iostream>

using namespace std;

void hello() {
    cout << "Hello world!";
}

int main() {
    hello();
    return 0;
}
```

Trong đó:
- `void`: Kiểu trả về của hàm, ở đây là không trả về gì.
- `hello`: Tên của hàm.
- `()`: Danh sách tham số của hàm, ở đây là không có tham số.
- `cout << "Hello world!";`: Nội dung của hàm.

### Ví dụ 2
    
```cpp
#include <iostream>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << sum(a, b);
    return 0;
}
```

Trong đó:
- `int`: Kiểu trả về của hàm, ở đây là trả về kiểu số nguyên.
- `sum`: Tên của hàm.
- `(int a, int b)`: Danh sách tham số của hàm, ở đây là 2 tham số kiểu số nguyên.
- `return a + b;`: Nội dung của hàm.

## Bài tập

Với mỗi bài tập, hãy viết một hàm thực hiện yêu cầu đề bài.

### Bài 1: Tính tổng 2 số

Nhập vào 2 số nguyên `a` và `b`, in ra màn hình tổng của 2 số đó.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int tongAB(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << tongAB(a, b);
}
```

### Bài 2: Tính giai thừa

Nhập vào số tự nhiên `n`, in ra màn hình giai thừa của `n`.

**Gợi ý**: Giai thừa của `n` được tính bằng công thức `n! = 1 * 2 * 3 * ... * n`.

- Ví dụ: 5! = 1 * 2 * 3 * 4 * 5 = 120.
- Ví dụ: 3! = 1.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

long long tongABC(int n) {
    long long tongg1 = 1;
    for (int i = 1; i <= n; i++)
        tongg1 *=i;
        return tongg1;
}

int main() {
    cout << tongABC(20);
}
```

### Bài 3: Kiểm tra số nguyên tố

Nhập vào số nguyên `n`, kiểm tra xem `n` có phải là số nguyên tố hay không.

**Gợi ý**: Số nguyên tố là số lớn hơn 1 và chỉ chia hết cho 1 và chính nó.

- Ví dụ: 2, 3, 5, 7, 11 là số nguyên tố.
- Ví dụ: 4, 6, 8, 9 không phải là số nguyên tố.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

bool check(int n) {
    int dem = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 )
        {
            dem += 1;
            
        }
    if (dem <= 2)
    {
        return true;
    } else {
        return false;
    }
}

int main() {
    if (check(70) == true)
        cout << "La so nguyen to";
    else
        cout << "Khong phai la so nguyen to";
}
```

### Bài 4: Kiểm tra số chính phương

Nhập vào số nguyên `n`, kiểm tra xem `n` có phải là số chính phương hay không.

**Gợi ý**: Số chính phương là số bằng bình phương của một số nguyên.

- Ví dụ: 4 là số chính phương vì 4 = 2^2.
- Ví dụ: 5 không phải là số chính phương.

### Bài 5: Kiểm tra số hoàn hảo

Nhập vào số nguyên `n`, kiểm tra xem `n` có phải là số hoàn hảo hay không.

**Gợi ý**: Số hoàn hảo là số bằng tổng các ước số của nó (không kể nó).

- Ví dụ: 6 là số hoàn hảo vì 6 = 1 + 2 + 3.
- Ví dụ: 5 không phải là số hoàn hảo.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

bool tongCacUoc(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
        {
            tong += i;
            
        }
    if (tong == n)
    {
        return true;
        
    }
    else
    {
        return false;
    }
}
    


int main() {
    int n;
    cin >> n;
    if (tongCacUoc(n) == true)
    {
        cout << " la so hoan hao";
    }
    else
    {
        cout << "khong phai la so hoan hao";
    }
    
}
```

### Bài 6: Chữ số cuối cùng

Nhập vào số nguyên `n`, in ra màn hình chữ số cuối cùng của `n`.

**Gợi ý**: Để lấy chữ số cuối cùng của một số, ta lấy phần dư của số đó cho 10.

- Ví dụ: Chữ số cuối cùng của 123 là 3.
- Ví dụ: Chữ số cuối cùng của 456 là 6.


### Bài 7: Chữ số đầu tiên

Nhập vào số nguyên `n`, in ra màn hình chữ số đầu tiên của `n`.

**Gợi ý**: Để lấy chữ số đầu tiên của một số, ta lấy phần nguyên của số đó chia cho 10 cho đến khi số đó còn một chữ số.

- Ví dụ: Chữ số đầu tiên của 123 là 1.
- Ví dụ: Chữ số đầu tiên của 456 là 4.

### Bài 8: Tổng 1 đến n

Nhập vào số tự nhiên `n`, in ra màn hình tổng của các số từ 1 đến `n`.

- Ví dụ: Tổng từ 1 đến 5 là 1 + 2 + 3 + 4 + 5 = 15.
- Ví dụ: Tổng từ 1 đến 3 là 1 + 2 + 3 = 6.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int tong(int n) {
    int tong = 0;
    for (int i = 1; i <= n; i++)
        tong += i;
    return tong;
}
    


int main() {
    int n;
    cin >> n;
    cout << tong(n);
    
}
```

### Bài 9: Tổng a đến b

Nhập vào 2 số nguyên `a` và `b`, in ra màn hình tổng của các số từ `a` đến `b`. (`a` < `b`).

- Ví dụ: Tổng từ 2 đến 5 là 2 + 3 + 4 + 5 = 14.
- Ví dụ: Tổng từ 3 đến 7 là 3 + 4 + 5 + 6 + 7 = 25.

### Bài 10: Tính tổng các ước số

Nhập vào số nguyên `n`, in ra màn hình tổng các ước số của `n`.

**Gợi ý**: Ước số của `n` là số chia hết cho `n`.

- Ví dụ: Ước số của 6 là 1, 2, 3, 6. Tổng các ước số của 6 là 1 + 2 + 3 + 6 = 12.
- Ví dụ: Ước số của 8 là 1, 2, 4, 8. Tổng các ước số của 8 là 1 + 2 + 4 + 8 = 15.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int tong(int n) {
    int tongg = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
        {
            tongg += i;
        }
    return tongg;
    
    }
    


int main() {
    int n;
    cin >> n;
    cout << tong(n);
    
}
```

### Bài 11: Tính tổng các ước số lẻ

Nhập vào số nguyên `n`, in ra màn hình tổng các ước số lẻ của `n`.

**Gợi ý**: Ước số lẻ của `n` là số chia hết cho `n` và là số lẻ.

- Ví dụ: Ước số lẻ của 6 là 1, 3. Tổng các ước số lẻ của 6 là 1 + 3 = 4.
- Ví dụ: Ước số lẻ của 8 là 1. Tổng các ước số lẻ của 8 là 1.

**Bài làm của Quyết**

```cpp
#include <iostream>

using namespace std;

int tong(int n)
{
    int tongg = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && i % 2 != 0)
        {
            tongg += i;
        }

    return tongg;
}

int main()
{
    int n;
    cin >> n;
    cout << tong(n);
}
```

### Bài 12: In ra n dấu *

Nhập vào số nguyên `n`, in ra màn hình `n` dấu `*`.

- Ví dụ: Nhập `n = 5`, in ra `*****`.
- Ví dụ: Nhập `n = 3`, in ra `***`.
- Ví dụ: Nhập `n = 7`, in ra `*******`.

### Bài 13: In ra tam giác vuông

Nhập vào số nguyên `n`, in ra màn hình tam giác vuông cân có cạnh góc vuông ở dưới bên trái.

- Ví dụ: Nhập `n = 5`, in ra:

```
*
**
***
****
*****
```

- Ví dụ: Nhập `n = 3`, in ra:

```
*
**
***
```

- Ví dụ: Nhập `n = 7`, in ra:

```
*
**
***
****
*****
******
*******
```

### Bài 14: In hoa chữ cái

Nhập vào một chữ cái, in ra màn hình chữ cái đó ở dạng in hoa.

- Ví dụ: Nhập `a`, in ra `A`.
- Ví dụ: Nhập `b`, in ra `B`.

### Bài 15: In thường chữ cái

Nhập vào một chữ cái, in ra màn hình chữ cái đó ở dạng in thường.

- Ví dụ: Nhập `A`, in ra `a`.
- Ví dụ: Nhập `B`, in ra `b`.

### Bài 16: In ra chữ cái tiếp theo

Nhập vào một chữ cái in thường, in ra màn hình chữ cái tiếp theo của chữ cái đó.
Nếu chữ cái là `z` thì in ra `a`.

- Ví dụ: Nhập `a`, in ra `b`.
- Ví dụ: Nhập `b`, in ra `c`.
- Ví dụ: Nhập `z`, in ra `a`.

### Bài 17: In ra chữ cái trước đó

Nhập vào một chữ cái in thường, in ra màn hình chữ cái trước đó của chữ cái đó.
Nếu chữ cái là `a` thì in ra `z`.

- Ví dụ: Nhập `a`, in ra `z`.
- Ví dụ: Nhập `b`, in ra `a`.
- Ví dụ: Nhập `z`, in ra `y`.

### Bài 18: In ra chữ cái tiếp theo (Nâng cao)

Nhập vào một chữ cái, in ra màn hình chữ cái tiếp theo của chữ cái đó.
Nếu chữ cái là chữ cái in thường thì in ra chữ cái tiếp theo ở dạng in thường.
Nếu chữ cái là chữ cái in hoa thì in ra chữ cái tiếp theo ở dạng in hoa.

- Ví dụ: Nhập `a`, in ra `b`.
- Ví dụ: Nhập `b`, in ra `c`.
- Ví dụ: Nhập `z`, in ra `a`.
- Ví dụ: Nhập `A`, in ra `B`.
- Ví dụ: Nhập `B`, in ra `C`.
- Ví dụ: Nhập `Z`, in ra `A`.