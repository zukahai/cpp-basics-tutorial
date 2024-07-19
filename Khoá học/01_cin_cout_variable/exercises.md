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