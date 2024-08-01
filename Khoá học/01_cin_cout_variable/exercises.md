# Bài tập buổi 1: Các lệnh nhập xuất, kiểu dữ liệu và toán tử cơ bản

### Bài 1: In ra màn hình dòng chữ "Hello world!"

Hãy in ra màn hình chữ "Hello, World!".

**Đầu vào:**

Bài này không có đầu vào, không cần nhập gì cả

**Đầu ra:**

In ra màn hình dòng chữ "Hello, World!"

**Bài làm mẫu:**

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello, World!";
}
```

### Bài 2: Nhập vào một số nguyên và in ra màn hình

Hãy nhập vào một số nguyên và in ra màn hình số đó.

**Đầu vào:**

- Một số nguyên `a`

**Đầu ra:**

In ra màn hình số nguyên `a`.

#### Ví dụ:

##### Ví dụ 1:

| Input | Output |
|-------|--------|
| 5     | a = 5  |

##### Ví dụ 2:

| Input | Output |
|-------|--------|
| 10    | a = 10 |

**Bài làm mẫu:**

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "a = " << a;
}
```


### Bài 3: Nhập vào tuổi và in ra màn hình

Hãy nhập vào tuổi của một người và in ra màn hình tuổi đó.

**Đầu vào:**

- Một số nguyên `age` (0 ≤ `age` ≤ 100)

**Đầu ra:**

In ra màn hình dòng chữ "Nguoi do `age` tuoi".

#### Ví dụ:

##### Ví dụ 1:

| Input | Output            |
|-------|-------------------|
| 18    | Nguoi do 18 tuoi  |

##### Ví dụ 2:

| Input | Output            |
|-------|-------------------|
| 20    | Nguoi do 20 tuoi  |

**Bài làm mẫu:**

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cin >> age;
    cout << "Nguoi do " << age << " tuoi";
}
```


### Bài 4: Tính toán 2 số

Hãy nhập vào 2 số nguyên và in ra màn hình tổng, hiệu, tích, thương của 2 số đó.

**Đầu vào:**

- Hai số nguyên `a`, `b`

**Đầu ra:**

In ra màn hình các phép toán cơ bản giữa `a` và `b` (xem ở ví dụ)

#### Ví dụ:

##### Ví dụ 1:

| Input | Output                  |
|-------|-------------------------|
| 5<br>3| a + b = 8<br>a - b = 2<br>a * b = 15<br>a / b = 1 |

##### Ví dụ 2:

| Input | Output                  |
|-------|-------------------------|
| 10<br>2| a + b = 12<br>a - b = 8<br>a * b = 20<br>a / b = 5 |

**Bài làm mẫu:**

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b;
}
```

### Bài 5: Tính toán 2 số (nân cấp)

Hãy nhập vào 2 số nguyên và in ra màn hình tổng, hiệu, tích, thương của 2 số đó.

**Đầu vào:**

- Hai số nguyên `a`, `b`

**Đầu ra:**

In ra màn hình các phép toán cơ bản giữa `a` và `b` (xem ở ví dụ)

#### Ví dụ:

##### Ví dụ 1:

| Input | Output                  |
|-------|-------------------------|
| 5<br>3| 5 + 3 = 8<br>5 - 3 = 2<br>5 * 3 = 15<br>5 / 3 = 1 |

##### Ví dụ 2:

| Input | Output                  |
|-------|-------------------------|
| 10<br>2| 10 + 2 = 12<br>10 - 2 = 8<br>10 * 2 = 20<br>10 / 2 = 5 |

**Bài làm mẫu:**

```cpp

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b;
}
```

### Bài 6: Phép chia 2 số nguyên

Nhập vào 2 số nguyên dương a và b.<br>
In ra màn hình
- Phần nguyên của phép chia a cho b.
- Phần dư của phép chia a cho b.
- Trung bình cộng của a và b.

**Đầu vào:**

- Hai số nguyên `a`, `b`

**Đầu ra:**

In ra màn hình các phép toán cơ bản giữa `a` và `b` (xem ở ví dụ)

#### Ví dụ:

##### Ví dụ 1:

| Input | Output                  |
|-------|-------------------------|
| 5<br>3| Phan nguyen cua 5 / 3 la 1<br>Phan du cua 5 / 3 la 2<br>Trung binh cong cua 5 va 3 la 4.0 |

##### Ví dụ 2:

| Input | Output                  |
|-------|-------------------------|
| 10<br>3| Phan nguyen cua 10 / 3 la 3<br>Phan du cua 10 / 3 la 1<br>Trung binh cong cua 10 va 3 la 6.5 |

##### Ví dụ 3:

| Input | Output                  |
|-------|-------------------------|
| 7<br>2 | Phan nguyen cua 7 / 2 la 3<br>Phan du cua 7 / 2 la 1<br>Trung binh cong cua 7 va 2 la 4.5 |

### Bài 7: Chữ số cuối cùng

Nhập vào một số nguyên dương `n`<br>

In ra màn hình chữ số cuối cùng của số `n`.

**Đầu vào:**

- Một số nguyên dương `n`

**Đầu ra:**

In ra màn hình chữ số cuối cùng của số `n`.

**Gợi ý:**

- Để lấy chữ số cuối cùng của một số nguyên `n`, ta có thể lấy phần dư của `n` cho 10.

#### Ví dụ:

##### Ví dụ 1:

| Input | Output |
|-------|--------|
| 123   | Chu so cuoi cung cua 123 la 3     |

##### Ví dụ 2:

| Input | Output |
|-------|--------|
| 456   | Chu so cuoi cung cua 456 la 6     |

##### Ví dụ 3:

| Input | Output |
|-------|--------|
| 789   | Chu so cuoi cung cua 789 la 9     |


### Bài 8: Số đảo ngược

Nhập vào một số nguyên dương `n` có 2 chữ số.<br>

In ra màn hình số đảo ngược của số `n`.

**Đầu vào:**

- Một số nguyên dương `n` có 2 chữ số.

**Đầu ra:**

In ra màn hình số đảo ngược của số `n`.

#### Ví dụ:

##### Ví dụ 1:

| Input | Output |
|-------|--------|
| 12    | So dao nguoc cua 12 la 21     |

##### Ví dụ 2:

| Input | Output |
|-------|--------|
| 34    | So dao nguoc cua 34 la 43     |

##### Ví dụ 3:

| Input | Output |
|-------|--------|
| 90    | So dao nguoc cua 90 la 09     |

### Bài 9: Số có 4 chữ số

Nhập vào một số nguyên dương `n` có 4 chữ số.<br>

In ra màn hình các chữ số của N

**Đầu vào:**

- Một số nguyên dương `n` có 4 chữ số.

**Đầu ra:**

In ra màn hình các chữ số của N

#### Ví dụ:

##### Ví dụ 1:

| Input | Output |
|-------|--------|
| 1234  | So thu 1 cua 1234 la 1<br>So thu 2 cua 1234 la 2<br>So thu 3 cua 1234 la 3<br>So thu 4 cua 1234 la 4     |

##### Ví dụ 2:

| Input | Output |
|-------|--------|
| 5678  | So thu 1 cua 5678 la 5<br>So thu 2 cua 5678 la 6<br>So thu 3 cua 5678 la 7<br>So thu 4 cua 5678 la 8     |

##### Ví dụ 3:

| Input | Output |
|-------|--------|
| 9876  | So thu 1 cua 9876 la 9<br>So thu 2 cua 9876 la 8<br>So thu 3 cua 9876 la 7<br>So thu 4 cua 9876 la 6     |