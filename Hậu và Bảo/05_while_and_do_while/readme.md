# Vòng lặp while và do while

## Bài 1: Luỹ thừa cơ số 2

Viết chương trình nhập vào một số nguyên dương `n`.<br>

Kỉểm tra xem `n` có phải là luỹ thừa cơ số 2 hay không.<br>

Nếu `n` là luỹ thừa cơ số 2 thì in ra "YES", ngược lại in ra "NO".

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- In ra "YES" nếu `n` là luỹ thừa cơ số 2, ngược lại in ra "NO".

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 8     | YES    |

**Giải thích**:

8 = 2^3

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 10    | NO     |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 1024  | YES    |


## Bài 2: Tiền lương của Hậu

Hậu đang là giảng viên ở trường Đại học Bách Khoa. 
Tiền lương của Hậu được tính theo công thức sau:

- Ngày đầu tiên, Hậu nhận được 1 đồng.
- Mỗi ngày tiếp theo, Hậu nhận được số tiền gấp đôi số tiền nhận được ngày trước đó.<br>
Ví dụ: Ngày thứ 2, Hậu nhận được 2 đồng, ngày thứ 3, Hậu nhận được 4 đồng, ngày thứ 4, Hậu nhận được 8 đồng, ...

Tính số ngày ít nhất để tiền lương của Hậu lớn hơn hoặc bằng `x` đồng.

**Đầu vào**:

- Một số nguyên `x`

**Đầu ra**:

- Một số nguyên là số ngày ít nhất để tiền lương của Hậu lớn hơn hoặc bằng `x` đồng.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 4     | 3      |

**Giải thích**:

- Ngày thứ nhất, Hậu nhận được 1 đồng.
- Ngày thứ hai, Hậu nhận được 2 đồng.
- Ngày thứ ba, Hậu nhận được 4 đồng.

Số ngày ít nhất để tiền lương của Hậu lớn hơn hoặc bằng 4 đồng là 3 ngày.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 10    | 5      |

**Giải thích**:

- Ngày thứ nhất, Hậu nhận được 1 đồng.
- Ngày thứ hai, Hậu nhận được 2 đồng.
- Ngày thứ ba, Hậu nhận được 4 đồng.
- Ngày thứ tư, Hậu nhận được 8 đồng.
- Ngày thứ năm, Hậu nhận được 16 đồng.

Số ngày ít nhất để tiền lương của Hậu lớn hơn hoặc bằng 10 đồng là 5 ngày.

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 3000   | 12     |

## Bài 3: Tiền lương của Hậu và Bảo

Hậu và Bảo cùng làm việc ở trường Đại học Bách Khoa.

Hiện tại Hậu đang có số tiền là a đồng, Bảo đang có số tiền là b đồng.<br>
a nhỏ hơn b. Mỗi ngày Hậu kiếm thêm được 5 đồng, Bảo kiếm thêm được 2 đồng.<br>
Tính số ngày ít nhất để số tiền của Hậu lớn hơn hoặc bằng số tiền của Bảo.

**Đầu vào**:

- Hai số nguyên `a` và `b`

**Đầu ra**:

- Một số nguyên là số ngày ít nhất để số tiền của Hậu lớn hơn hoặc bằng số tiền của Bảo.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 2 10   | 3      |

**Giải thích**:

- Hiện tại, Hậu có 2 đồng, Bảo có 10 đồng.
- Ngày thứ nhất, Hậu có 7 đồng, Bảo có 12 đồng.
- Ngày thứ hai, Hậu có 12 đồng, Bảo có 14 đồng.
- Ngày thứ ba, Hậu có 17 đồng, Bảo có 16 đồng.

Số ngày ít nhất để số tiền của Hậu lớn hơn hoặc bằng số tiền của Bảo là 3 ngày.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 4 6   | 1      |

**Giải thích**:

- Hiện tại, Hậu có 4 đồng, Bảo có 6 đồng.
- Ngày thứ nhất, Hậu có 9 đồng, Bảo có 8 đồng.

Số ngày ít nhất để số tiền của Hậu lớn hơn hoặc bằng số tiền của Bảo là 1 ngày.


## Bài 4: Số lượng chữ số

Viết chương trình nhập vào một số nguyên dương `n` và in ra số lượng chữ số của `n`.

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- Một số nguyên là số lượng chữ số của `n`.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 123   | 3      |

**Giải thích**:

Số 123 có 3 chữ số.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 1000  | 4      |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 12039483     | 8      |

## Bài 5: Tổng các chữ số

Viết chương trình nhập vào một số nguyên dương `n` và in ra tổng các chữ số của `n`.

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- Một số nguyên là tổng các chữ số của `n`.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 123   | 6      |

**Giải thích**:

Tổng các chữ số của 123 là 1 + 2 + 3 = 6.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 1000  | 1      |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 12039483     | 30     |

## Bài 6: Số đảo ngược

Viết chương trình nhập vào một số nguyên dương `n` và in ra số đảo ngược của `n`.

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- Một số nguyên là số đảo ngược của `n`.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 123   | 321    |

**Giải thích**:

Số đảo ngược của 123 là 321.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 12039483     | 38493021      |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 1000  | 1      |

## Bài 7: Số đối xứng

Viết chương trình nhập vào một số nguyên dương `n` và kiểm tra xem `n` có phải là số đối xứng hay không.

Số đối xứng là số mà khi đọc từ trái sang phải hoặc từ phải sang trái đều giống nhau. Ví dụ: 121, 12321, 123321, 332233

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- In ra "YES" nếu `n` là số đối xứng, ngược lại in ra "NO".

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 12321 | YES    |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 12345 | NO     |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 1331 | YES     |

## Bài 8: Số lượng ước số

Viết chương trình nhập vào một số nguyên dương `n` và in ra số lượng ước số của `n`.

**Đầu vào**:

- Một số nguyên dương `n` (0 ≤ n ≤ 10^9)

**Đầu ra**:

- Một số nguyên là số lượng ước số của `n`.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 6     | 4      |

**Giải thích**:

Số 6 có 4 ước số là 1, 2, 3, 6.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 10    | 4      |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 100   | 9      |

## Bài 9: Số nguyên tố

Viết chương trình nhập vào một số nguyên dương `n` và kiểm tra xem `n` có phải là số nguyên tố hay không.

Số nguyên tố là số có đúng 2 ước số dương là 1 và chính nó.

Ví dụ: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, ... là số nguyên tố.

**Đầu vào**:

- Một số nguyên dương `n`

**Đầu ra**:

- In ra "YES" nếu `n` là số nguyên tố, ngược lại in ra "NO".

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 7     | YES    |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 10    | NO     |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 13    | YES    |


## Bài 10: Số hoàn thiện

Viết chương trình nhập vào một số nguyên dương `n` và kiểm tra xem `n` có phải là số hoàn thiện hay không.

Số hoàn thiện là số mà tổng các ước số trừ chính nó bằng chính nó.

Ví dụ: 6, 28, 496, 8128, ... là số hoàn thiện.

Vì 6 = 1 + 2 + 3, 28 = 1 + 2 + 4 + 7 + 14

**Đầu vào**:

- Một số nguyên dương `n`

**Đầu ra**:

- In ra "YES" nếu `n` là số hoàn thiện, ngược lại in ra "NO".

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 28    | YES    |

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 10    | NO     |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 496   | YES    |

## Bài 11: Thời gian

Hiện tại đang là `h1` giờ `m1` phút. Tính cần ít nhất bao nhiêu phút nữa để đến `h2` giờ `m2` phút. Biết rằng `h2` >= `h1`

**Đầu vào**:

- Bốn số nguyên `h1`, `m1`, `h2`, `m2` (0 ≤ h1, h2 ≤ 23, 0 ≤ m1, m2 ≤ 59)

**Đầu ra**:

- Một số nguyên là số phút cần ít nhất để đến `h2` giờ `m2` phút.

### Ví dụ

#### Ví dụ 1

| Input | Output |
|-------|--------|
| 10 30 11 0 | 30     |

**Giải thích**:

Hiện tại là 10 giờ 30 phút. Cần 30 phút nữa để đến 11 giờ 0 phút.

#### Ví dụ 2

| Input | Output |
|-------|--------|
| 7 50 9 40 | 110    |

#### Ví dụ 3

| Input | Output |
|-------|--------|
| 10 40 11 20 | 40     |