# Buổi 2 Câu lệnh điều kiện và vòng lặp for

## Đánh giá chung buổi học

**Ưu điểm:**
Tư duy nhạy bén, học hỏi nhanh, xử lý vấn đề nhanh chóng.

**Nhược điểm:**
Thời gian làm bài tập còn ít, còn nhầm lẫn về cú pháp chia lấy dư (**%**) và chia lấy phần nguyên (**/**).

## Tóm tắt lý thuyết buổi học

### Gộp toán tử

Gộp này chỉ để viết ngắn gọn hơn, không ảnh hưởng đến hiệu suất chương trình.

- `+=`: Cộng và gán. Ví dụ: `a += 5` tương đương với `a = a + 5`.
- `-=`: Trừ và gán. Ví dụ: `a -= 5` tương đương với `a = a - 5`.
- `*=`: Nhân và gán. Ví dụ: `a *= 5` tương đương với `a = a * 5`.
- `/=`: Chia và gán. Ví dụ: `a /= 5` tương đương với `a = a / 5`.
- `%=`: Chia lấy phần dư và gán. Ví dụ: `a %= 5` tương đương với `a = a % 5`.
- `++`: Tăng 1 đơn vị. Ví dụ: `a++` tương đương với `a = a + 1`.
- `--`: Giảm 1 đơn vị. Ví dụ: `a--` tương đương với `a = a - 1`.

### Gộp lệnh cin và cout

Có thể gộp nhiều lệnh cout liên tiếp thành một lệnh cout duy nhất. Tuơng tự với lệnh cin.

Ví dụ:

```cpp
int a, b;
cin >> a >> b;
cout << a << " + " << b << " = " << a + b << endl;
```

### Câu lệnh điều kiện

#### Điều kiện

Điều kiện là một biểu thức có giá trị `true` hoặc `false`.
Ví dụ `a > b` là một điều kiện, nếu `a` lớn hơn `b` thì điều kiện đúng, ngược lại điều kiện sai.

Có thể kết hợp nhiều điều kiện lại với nhau bằng các toán tử logic:

- `&&`: Toán tử và. Ví dụ: `a > b && b > c` là điều kiện đúng nếu `a` lớn hơn `b` và `b` lớn hơn `c`.
- `||`: Toán tử hoặc. Ví dụ: `a > b || b > c` là điều kiện đúng nếu `a` lớn hơn `b` hoặc `b` lớn hơn `c`.

#### Câu lệnh điều kiện

Câu lệnh điều kiện dùng để kiểm tra một điều kiện nào đó, nếu đúng thì thực hiện một hành động nào đó, ngược lại thì thực hiện một hành động khác.

Cú pháp:

```cpp
if (điều kiện) {
    // Thực hiện hành động
}
```
Hành động được thực hiện khi điều kiện đúng.

```cpp
if (điều kiện) {
    // Thực hiện hành động 1
} else {
    // Thực hiện hành động 2
}
```

Hành động 1 được thực hiện khi điều kiện đúng, hành động 2 được thực hiện khi điều kiện sai.


## Bài tập

### Bài 1: Kiểm tra số chẵn lẻ

Nhập vào một số nguyên `n`, kiểm tra xem `n` có phải là số chẵn hay không.

*Gơi ý*: Số chẵn là số chia hết cho 2. Nên sử dụng toán tử `%` để kiểm tra.<br>
Nếu `n % 2 == 0` thì `n` là số chẵn, ngược lại `n` là số lẻ.

Ví dụ:

- Nhập `5`, kết quả: `5 là số lẻ`.
- Nhập `6`, kết quả: `6 là số chẵn`.

### Bài 2: Kiểm tra số tự nhiên

Nhập vào một số nguyên `n`, kiểm tra xem `n` có phải là số tự nhiên hay không.

Ví dụ:

- Nhập `5`, kết quả: `5 là số tự nhiên`.
- Nhập `-7`, kết quả: `-7 không phải là số tự nhiên`.

### Bài 3: Kiểm tra có 2 chữ số

Nhập vào một số tự nhiên `n`, kiểm tra xem `n` có phải là số có 2 chữ số hay không.

Ví dụ:

- Nhập `5`, kết quả: `5 không phải là số có 2 chữ số`.
- Nhập `67`, kết quả: `67 là số có 2 chữ số`.
- Nhập `123`, kết quả: `123 không phải là số có 2 chữ số`.

### Bài 4: Đưa ra số lớn nhất

Nhập vào 2 số nguyên `a` và `b`, in ra số lớn nhất trong 2 số đó.

Ví dụ:

- Nhập `5 7`, kết quả: `7`.
- Nhập `10 2`, kết quả: `10`.
- Nhập `3 3`, kết quả: `3`.








