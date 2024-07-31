# Buổi 1: Các lệnh nhập xuất, kiểu dữ liệu và toán tử cơ bản

## Nhắc qua về lý thuyết

### Cấu trúc chương trình C++

```cpp
#include <bits/stdc++.h>

using namespace std;

int main() {
    cout << "Hello world!";
    return 0;
}
```

Trong đó:
- `#include <bits/stdc++.h>`: Thư viện chuẩn của C++.
- `using namespace std;`: Dùng để sử dụng các hàm trong thư viện chuẩn mà không cần ghi rõ tên thư viện.
- `int main() { ... }`: Hàm main, nơi chương trình bắt đầu thực thi.

### Các kiểu dữ liệu cơ bản

- `int`: Kiểu số nguyên.
- `float`: Kiểu số thực.
- Các kiểu dữ liệu khác: `double`, `char`, `string`, ... sẽ được học sau.

### Các toán tử cơ bản

- `+`: Cộng.
- `-`: Trừ.
- `*`: Nhân.
- `/`: Chia lấy phần nguyên.
- `%`: Chia lấy phần dư.

### Lệnh cout và cin

- `cout`: Dùng để in ra màn hình.
- `cin`: Dùng để nhập từ bàn phím.

Ví dụ:

```cpp
int a;
cin >> a;
cout << a;
```

Khi cout 1 cầu cần phân tích, đâu là giá trị cần in ra (phụ thuộc), đâu là chuỗi cần in ra.

**Ví dụ 1**
    
Biến `a` có giá trị 5, in ra màn hình dòng chữ "Gia tri cua a: 5".

Thì phần phụ thuộc là `5`, phần chuỗi cần in ra là `"Gia tri cua a: "`.


**Ví dụ 2:**

Biến tuoi = 18, in ra màn hình dòng chữ "Nam nay ban 18 tuoi".

Thì phần phụ thuộc là `18`, phần chuỗi cần in ra là `"Nam nay ban "`, `" tuoi"`.

## Thực hành

Thực hành làm bài tập tại:

https://tleoj.edu.vn/contest/hz0201





