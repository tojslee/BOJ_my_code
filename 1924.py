x, y=map(int, input().split())
list=['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']
if x<=2:
    print(list[(31*(x-1)+y)%7])
elif 2<x<=4:
    print(list[(31*(x-1)+y)%7-3])
elif 4<x<=6:
    print(list[(31*(x-1)+y)%7-4])
elif 6<x<=9:
    print(list[(31*(x-1)+y)%7-5])
elif 9<x<=11:
    print(list[(31*(x-1)+y)%7-6])
else:
    print(list[(31*(x-1)+y)%7])
