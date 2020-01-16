self_number = []


def delete_nums(a:int):
    number = a
    next_number = a
    while number != 0:
        next_number += number % 10
        number = number // 10

    if next_number > 10000 or next_number == a:
        return
    else:
        self_number[next_number] = 0
        delete_nums(next_number)


for i in range(0, 10001):
    self_number.append(i)

for i in range(1, 10001):
    if self_number[i] != 0:
        delete_nums(self_number[i])

for i in range(1, 10001):
    if self_number[i] != 0:
        print(self_number[i])
