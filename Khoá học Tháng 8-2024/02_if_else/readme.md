# Bài tập if else

## Bài 1: Kiểm tra bằng 10

Hãy nhập vào một số nguyên và kiểm tra xem số đó có bằng 10 hay không.

**Đầu vào:**

- Một số nguyên `n`

**Đầu ra:**

- In ra màn hình `n` có bằng 10 hay không, Nếu có in ra `n bang 10`, ngược lại in ra `n khong ban 10`

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 10    | 10 bang 10              |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 5     | 5 khong bang 10         |


## Bài 2: Kiểm tra số dương

Hãy nhập vào một số nguyên và kiểm tra xem số đó có phải là số dương hay không.<br>
Nếu là số dương thì in ra `YES`, ngược lại in ra `NO`

**Đầu vào:**

- Một số nguyên `n`

**Đầu ra:**

- In ra màn hình `YES` nếu `n` là số dương, ngược lại in ra `NO`

**Gợi ý:**

- Số dương là số lớn hơn 0

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 10    | YES                     |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| -5    | NO                      |


## Bài 3: Kiểm tra số chẵn lẻ

Hãy nhập vào một số nguyên và kiểm tra xem số đó có phải là số chẵn hay số lẻ.<br>
Nếu là số chẵn thì in ra `Even`, ngược lại in ra `Odd`

**Đầu vào:**

- Một số nguyên `n`

**Đầu ra:**

- In ra màn hình `Even` nếu `n` là số chẵn, ngược lại in ra `Odd`

**Gợi ý:**

- Số chẵn là số chia hết cho 2, mình sẽ kiểm tra xem số đó chia hết cho 2 hay không bằng cách sử dụng toán tử `%`

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 10    | Even                    |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 5     | Odd    |


## Bài 4: Số lớn hơn

Hãy nhập vào 2 số nguyên, tìm và in ra giá trị lớn hơn trong 2 số đó.

**Đầu vào:**

- Hai số nguyên `a`, `b`

**Đầu ra:**

- In ra màn hình số lớn hơn trong 2 số `a` và `b`

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 5 10     | 10                      |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 10 5    | 10                      |


## Bài 5: Số có 3 chữ số

Hãy nhập vào một số tự nhiên và kiểm tra xem số đó có phải là số có 3 chữ số hay không.<br>
Nếu là số có 3 chữ số thì in ra `YES`, ngược lại in ra `NO`

**Đầu vào:**

- Một số tự nhiên `n`

**Đầu ra:**

- In ra màn hình `YES` nếu `n` là số có 3 chữ số, ngược lại in ra `NO`

**Gợi ý:**

- Số có 3 chữ số là số lớn hơn hoặc bằng 100 và nhỏ hơn 1000

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 249   | YES                     |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 35    | NO                      |


## Bài 6: Hình vuông

Hãy nhập vào 2 số nguyên dương `a`, `b` là chiều dài và chiều rộng của hình chữ nhật, kiểm tra xem hình chữ nhật đó có phải là hình vuông hay không.<br>
Nếu là hình vuông thì in ra `YES`, ngược lại in ra `NO`

**Đầu vào:**

- Hai số nguyên dương `a`, `b`

**Đầu ra:**

- In ra màn hình `YES` nếu hình chữ nhật có chiều dài và chiều rộng bằng nhau, ngược lại in ra `NO`

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 5 5   | YES                     |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 10 5  | NO                      |

## Bài 7: Ba cạnh của tam giác

Hãy nhập vào 3 số nguyên dương `a`, `b`, `c`, hãy kiểm tra xem 3 số đó có phải là 3 cạnh của một tam giác hay không.<br>
Nếu là 3 cạnh của một tam giác thì in ra `YES`, ngược lại in ra `NO`

**Đầu vào:**

- Ba số nguyên dương `a`, `b`, `c`

**Đầu ra:**

- In ra màn hình `YES` nếu 3 số `a`, `b`, `c` là 3 cạnh của một tam giác, ngược lại in ra `NO`

**Gợi ý:**

- Để 3 số `a`, `b`, `c` là 3 cạnh của một tam giác thì tổng của 2 số bất kỳ phải lớn hơn số còn lại, và 3 số phải lớn hơn 0

### Ví dụ:

#### Ví dụ 1:

| Input | Output                  |
|:-------|:-----------------------|
| 4 5 8 | YES                     |

#### Ví dụ 2:

| Input | Output                  |
|:-------|:-----------------------|
| 1 2 4 | NO                      |

## Bài 8: So sánh 2 số

Hãy nhập vào 2 số nguyên `a`, `b`, so sánh 2 số đó và in ra kết quả so sánh.

**Đầu vào:**

- Hai số nguyên `a`, `b`

**Đầu ra:**

- In ra màn hình kết quả so sánh giữa 2 số `a`, `b`, nếu `a` lớn hơn `b` in ra `a > b`, nếu `a` bé hơn `b` in ra `a < b`, ngược lại in ra `a = b`

#### Ví dụ

##### Ví dụ 1

| Input | Output                  |
|:-------|:-----------------------|
| 5 10  | 5 < 10                  |

##### Ví dụ 2

| Input | Output                  |
|:-------|:-----------------------|
| 10 5  | 10 > 5                  |

##### Ví dụ 3

| Input | Output                  |
|:-------|:-----------------------|
| 5 5   | 5 = 5                   |