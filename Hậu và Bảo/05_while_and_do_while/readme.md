# Vòng lặp while và do while

## Bài 1: Tiền lương của Hậu

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

## Bài 2: Tiền lương của Hậu và Bảo

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


## Bài 3: Số lượng chữ số

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
